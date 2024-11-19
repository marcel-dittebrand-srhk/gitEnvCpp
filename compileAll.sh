#find src -name "*.cpp" -exec bash -c 'g++ "$0" -o "dist/$(basename "$0" .cpp)"' {} \;
find src -name "*.cpp" -exec bash -c '
  src_file="{}"
  rel_path="${src_file#src/}"
  dest_dir="dist/$(dirname "$rel_path")"
  mkdir -p "$dest_dir"
  g++ "$src_file" -o "$dest_dir/$(basename "$rel_path" .cpp)"
' \;
