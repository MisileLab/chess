#ifndef DIFFICULTY_WINDOW_H
#define DIFFICULTY_WINDOW_H

#include "GuiButton.h"
#include "GuiHelpers.h"
#include "GuiWindow.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <stdbool.h>
#include <stdio.h>

/*
The game difficulty window.
*/

typedef struct difficulty_window_t {
  SDL_Window *window;
  SDL_Renderer *rend;
  GuiWidget *widgets[6]; // 5 levels, back
  SDL_Texture *bgTexture;
} DifficultyWindow;

GuiWindow *guiDifficultyWindowCreate(SDL_Window *window, SDL_Renderer *rend);
void guiDifficultyWindowDraw(GuiWindow *src);
void guiDifficultyWindowDestroy(GuiWindow *src);
void guiDifficultyWindowHandleEvent(GuiWindow *src, SDL_Event *e);

#endif