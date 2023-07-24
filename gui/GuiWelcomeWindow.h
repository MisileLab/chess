#ifndef WELCOME_WINDOW_H
#define WELCOME_WINDOW_H

#include "GuiButton.h"
#include "GuiHelpers.h"
#include "GuiWindow.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <stdbool.h>
#include <stdio.h>

/*
This is the main (i.e first to see) window of the game.
*/

typedef struct welcome_window_t {
  SDL_Window *window;
  SDL_Renderer *rend;
  GuiWidget *widgets[3]; // newGame, load, exit
  SDL_Texture *bgTexture;
} WelcomeWindow;

GuiWindow *guiWelcomeWindowCreate(SDL_Window *window, SDL_Renderer *rend);
void guiWelcomeWindowDraw(GuiWindow *src);
void guiWelcomeWindowDestroy(GuiWindow *src);
void guiWelcomeWindowHandleEvent(GuiWindow *src, SDL_Event *e);

#endif
