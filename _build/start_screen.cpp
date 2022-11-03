#include "raylib.h"
#include "screens.h"
#include <iostream>
#include "changeToScreen.h"

#define NUM_FRAMES  1


static void ChangeToScreen(int  screen)
{
	// Unload current screen

	// Init next screen
	switch (screen)
	{
	case 1: DrawLogoScreen(); break;
	case 2: DrawGameplayScreen(); break;
		//case 3: InitGameplayScreen(); break;
		//case 4: InitEndingScreen(); break;
	default: break;
	}

}

void DrawLogoScreen(void) {


	#//InitWindow(800, 800, "Logo - Screen");

	while (!WindowShouldClose()) 
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
			ChangeToScreen(2);
		}


		DrawText("Click on the Screen to Start", 190, 200, 20, BLACK);
		EndDrawing();
		
	}

	CloseWindow();



}

