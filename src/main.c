#include <stdio.h>
#include <math.h>

#include <SDL2/SDL.h>

#include "hellomake.h"

#define PI 3.14

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char *argv[]) {
	// call a function in another file
	myPrintHelloMake();

	// math
	double x, ret, val;
	x = 0.9;
	val = 180.0 / PI;
	ret = acos(x) * val;
	printf("The arc cosine of %lf is %lf degrees\n", x, ret);

	// SDL
	//The window we'll be rendering to
    SDL_Window* window = NULL;
    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    //Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    } else {
        //Create window
        window = SDL_CreateWindow(
			"SDL Tutorial", 
			SDL_WINDOWPOS_UNDEFINED, 
			SDL_WINDOWPOS_UNDEFINED, 
			SCREEN_WIDTH, 
			SCREEN_HEIGHT, 
			SDL_WINDOW_SHOWN
		);

        if( window == NULL ) {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        } else {
            //Get window surface
            screenSurface = SDL_GetWindowSurface(window);
            //Fill the surface white
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB( screenSurface->format, 255, 255, 0 ));
            //Update the surface
            SDL_UpdateWindowSurface(window);
            //Wait two seconds
            SDL_Delay(10000);
        }
    }
	//Destroy window
    SDL_DestroyWindow(window);
    //Quit SDL subsystems
    SDL_Quit();

	return 0;
}
