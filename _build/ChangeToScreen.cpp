#include "changeToScreen.h"
#include "raylib.h"
#include "screens.h"

void ChangeToScreen(int  screen)
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