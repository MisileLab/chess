#ifndef USER_COLOR_WINDOW_H
#define USER_COLOR_WINDOW_H

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

typedef struct user_color_window_t {
  SDL_Window *window;
  SDL_Renderer *rend;
  GuiWidget *widgets[3]; // white, black, back
  SDL_Texture *bgTexture;
} UserColorWindow;

GuiWindow *guiUserColorWindowCreate(SDL_Window *window, SDL_Renderer *rend);
void guiUserColorWindowDraw(GuiWindow *src);
void guiUserColorWindowDestroy(GuiWindow *src);
void guiUserColorWindowHandleEvent(GuiWindow *src, SDL_Event *e);

#endif