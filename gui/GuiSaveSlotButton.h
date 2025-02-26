#ifndef SAVE_SLOT_BUTTON_H_
#define SAVE_SLOT_BUTTON_H_

#include "../game/GameHandler.h"
#include "GuiWidget.h"
#ifdef __linux__
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#else
#include <SDL.h>
#include <SDL_Video.h>
#endif
#include <stdbool.h>

/*
This widget represents a save-load slot button in the save-load window. The
button dynamically performs its' action (save or load) according to the user
choice.
*/

typedef struct save_slot_button_t {
  SDL_Renderer *render;
  SDL_Texture *texture;
  SDL_Rect location;
  int slotNum;
  bool saveRequested; // or load
  GameHandler *gh;    // for save
  void (*action)(int slotNum, bool saveRequested, GameHandler *gh);
} GuiSaveSlotButton;

GuiWidget *createSaveSlotButton(SDL_Renderer *renderer, const char *image,
                                SDL_Rect location, int slotNum,
                                bool saveRequested, GameHandler *gh,
                                void (*action)(int slotNum, bool saveRequested,
                                               GameHandler *gh));
void destroySaveSlotButton(GuiWidget *src);
void handleSaveSlotButtonEvent(GuiWidget *src, SDL_Event *event);
void drawSaveSlotButton(GuiWidget *, SDL_Renderer *);

#endif /* BUTTON_H_ */
