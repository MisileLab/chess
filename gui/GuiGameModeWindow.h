#ifndef GAME_MODE_WINDOW_H
#define GAME_MODE_WINDOW_H

#include "GuiButton.h"
#include "GuiHelpers.h"
#include "GuiWindow.h"
#ifdef __linux__
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#else
#include <SDL.h>
#include <SDL_Video.h>
#endif
#include <stdbool.h>
#include <stdio.h>

typedef struct game_mode_window_t {
  SDL_Window *window;
  SDL_Renderer *rend;
  GuiWidget *widgets[3]; // one player, two player, back
  SDL_Texture *bgTexture;
} GameModeWindow;

GuiWindow *guiGameModeWindowCreate(SDL_Window *window, SDL_Renderer *rend);
void guiGameModeWindowDraw(GuiWindow *src);
void guiGameModeWindowDestroy(GuiWindow *src);
void guiGameModeWindowHandleEvent(GuiWindow *src, SDL_Event *e);

#endif