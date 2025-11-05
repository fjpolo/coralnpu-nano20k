#!/bin/bash
APP="/Applications/GowinIDE.app"
RES="$APP/Contents/Resources"
BIN="$RES/Gowin_EDA/IDE/bin"

export GOWIN_EDA_HOME="$RES/Gowin_EDA/IDE"
export GOWIN_EDA_BIN_DIR="$BIN"
export DYLD_FRAMEWORK_PATH="$RES/Gowin_EDA/IDE/lib:$DYLD_FRAMEWORK_PATH"
export DYLD_LIBRARY_PATH="$RES/Gowin_EDA/IDE/lib:$DYLD_LIBRARY_PATH"

cd "$RES"
exec "$BIN/gw_sh" "$@"