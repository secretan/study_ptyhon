/*************************************************************************
	> File Name: sdl_test.c
	> Author: 
	> Mail: 
	> Created Time: Sat 08 Oct 2016 04:32:22 PM CST
 ************************************************************************/

#include <stdio.h>
#include <SDL2/SDL.h>

int main()
{
    SDL_Window *win = NULL;

    SDL_Init(SDL_INIT_EVERYTHING);

    win = SDL_CreateWindow("MyWindow", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 300, 300, SDL_WINDOW_SHOWN);
    
    sleep(3);

    SDL_DestroyWindow(win);

    SDL_Quit();

    return 0;
}


