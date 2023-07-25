export WINSDK_PATH="$HOME/winsdk"
cargo xwin build --target x86_64-pc-windows-msvc
wine main.exe