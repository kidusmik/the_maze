#ifndef _MAZE_H_
#define _MAZE_H_

#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct SDL_Instance - SDL instance
 * @window: the window to render to
 * @renderer: the renderer
 *
 * Description: SDL instance structure
 *
 */
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *);
void draw_figure(SDL_Instance instance);
int poll_events(void);

#endif /* _MAZE_H_ */
