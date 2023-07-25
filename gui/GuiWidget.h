#ifndef WIDGET_H_
#define WIDGET_H_

#ifdef __linux__
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#else
#include <SDL.h>
#include <SDL_Video.h>
#endif

typedef struct widget_t GuiWidget;
struct widget_t {
  void (*draw)(GuiWidget *, SDL_Renderer *);
  void (*handleEvent)(GuiWidget *, SDL_Event *);
  void (*destroy)(GuiWidget *);
  void *data;
};

void destroyWidget(GuiWidget *src);

#endif
