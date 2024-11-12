find src -name "*.cpp" -exec bash -c 'g++ "$0" -o "dist/$(basename "$0" .cpp)"' {} \;
