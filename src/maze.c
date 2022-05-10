#include "headers/maze.h"

/**
 * main - main entry of the program
 *
 * Return: 0 on success, otherwise 1
 */
int main(void)
{
	SDL_Instance instance;

	if (init_instance(&instance) != 0)
		return (1)

	while (1)
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		if (poll_events() == 1)
			break;
		draw_figure(instance);
		SDL_RenderPresent(instance.renderer);
	}

	return (0);
}
