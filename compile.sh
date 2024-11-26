#!/bin/bash

# Usage: ./compile_recursive.sh [source_subdirectory] [filename]
# Example: ./compile_recursive.sh "26.11 (for-Schleifen)" main.cpp

# Check for correct number of arguments
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 [source_subdirectory] [filename]"
    exit 1
fi

# Base source and output directories
BASE_SRC_DIR="./src"
BASE_OUTPUT_DIR="./dist"

# Get the subdirectory, filename, and compute full paths
SUBDIR="$1"
TARGET_FILE="$2"
SEARCH_DIR="$BASE_SRC_DIR/$SUBDIR"
OUTPUT_DIR="$BASE_OUTPUT_DIR/$SUBDIR"

# Verify the source directory exists
if [ ! -d "$SEARCH_DIR" ]; then
    echo "Error: Source directory $SEARCH_DIR does not exist."
    exit 1
fi

# Verify the output directory exists, create it if not
if [ ! -d "$OUTPUT_DIR" ]; then
    echo "Output directory $OUTPUT_DIR does not exist. Creating it..."
    mkdir -p "$OUTPUT_DIR"
    if [ $? -ne 0 ]; then
        echo "Error: Failed to create output directory $OUTPUT_DIR."
        exit 1
    fi
fi

# Remove trailing slashes from directories for consistent path handling
SEARCH_DIR="$(realpath "$SEARCH_DIR")"
OUTPUT_DIR="$(realpath "$OUTPUT_DIR")"

# Find and compile the file recursively
find "$SEARCH_DIR" -type f -name "$TARGET_FILE" | while read -r file; do
    RELATIVE_PATH="${file#$SEARCH_DIR/}" # Get the relative path of the file
    OUTPUT_PATH="$OUTPUT_DIR/$RELATIVE_PATH" # Preserve the subdirectory structure in the output directory
    OUTPUT_PATH="${OUTPUT_PATH%.*}" # Remove the file extension for the output binary
    OUTPUT_DIR_PATH="$(dirname "$OUTPUT_PATH")" # Get the directory of the output file

    # Create the necessary subdirectory in the output directory
    if [ ! -d "$OUTPUT_DIR_PATH" ]; then
        mkdir -p "$OUTPUT_DIR_PATH"
        if [ $? -ne 0 ]; then
            echo "Error: Failed to create directory $OUTPUT_DIR_PATH."
            continue
        fi
    fi

    echo "Compiling $file to $OUTPUT_PATH" # Inform the user

    g++ "$file" -o "$OUTPUT_PATH"  # Compile with g++

    # Check if compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compilation successful: $OUTPUT_PATH"
    else
        echo "Error compiling $file"
    fi
done
