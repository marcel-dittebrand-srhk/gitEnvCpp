#find src -name "*.cpp" -exec bash -c 'g++ "$0" -o "dist/$(basename "$0" .cpp)"' {} \;
find src -name "*.cpp" -exec bash -c '
  src_file="{}"
  rel_path="${src_file#src/}"
  dest_dir="dist/$(dirname "$rel_path")"
  mkdir -p "$dest_dir"
  g++ "$src_file" -o "$dest_dir/$(basename "$rel_path" .cpp)"
' \;
echo Kompilierung aller Datein in $PWD/src/ abgeschlossen.
echo Die '.exe'-Datein sind unter $PWD/dist/ zu finden und können als Konsole-Programm ausgeführt werden.
echo z. B. mit ./dist/program.exe