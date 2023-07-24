# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(YourProjectName)

# Add the executable and list your source files
add_executable(
    main
    main.c 
    game/ChessGlobalDefinitions.h
    cli/ConsoleGame.c
    cli/ConsoleGame.h 
    cli/Parser.c 
    cli/Parser.h 
    game/ArrayList.c
    game/ArrayList.h
    game/Game.c
    game/Game.h
    game/GameHandler.c
    game/GameHandler.h
    game/Minimax.c
    game/Minimax.h
    gui/GraphicalGame.c
    gui/GraphicalGame.h
    gui/GuiButton.c
    gui/GuiButton.h
    gui/GuiDifficultyWindow.c
    gui/GuiDifficultyWindow.h
    gui/GuiGameBoard.c
    gui/GuiGameBoard.h
    gui/GuiGameModeWindow.c
    gui/GuiGameModeWindow.h
    gui/GuiGameWindow.c
    gui/GuiGameWindow.h
    gui/GuiHelpers.c
    gui/GuiHelpers.h
    gui/GuiSaveLoadWindow.c
    gui/GuiSaveLoadWindow.h
    gui/GuiSaveSlotButton.c
    gui/GuiSaveSlotButton.h
    gui/GuiUserColorWindow.c
    gui/GuiUserColorWindow.h
    gui/GuiWelcomeWindow.c
    gui/GuiWelcomeWindow.h
    gui/GuiWidget.c
    gui/GuiWidget.h
    gui/GuiWindow.c
    gui/GuiWindow.h
)

# Set the path to SDL2 installation directory
# Replace '/path/to/sdl' with the actual path where SDL2 is installed
set(SDL2_DIR "/usr/lib/SDL2")

# Use find_package to locate SDL2
find_package(SDL2 REQUIRED)

# Link SDL2 libraries to the executable
target_link_libraries(main PRIVATE SDL2::SDL2 SDL2::SDL2main)