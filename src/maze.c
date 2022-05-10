#include "headers/maze.h"

/**
 * main - main entry of the program
 *
 * Return: EXIT_SUCCESS on success, otherwise EXIT_FAILURE
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
		draw_figure(instance);
		SDL_RenderPresent(instance.renderer);
	}

	return (0);
}
