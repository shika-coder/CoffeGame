#include "raylib.h"
#include "CoffeMaschine.h"
#include "screens.h"


const int screenWidth = 800;
const int screenHeight = 800;

int actMousePosX = GetMouseX();
int actMousePosY = GetMouseY();


void update() {

    int actMousePosX = GetMouseX();
    int actMousePosY = GetMouseY();

    if (IsKeyPressed(KEY_W)) {
        std::cout << "w is up" << std::endl;
    }
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        std::cout << "left clicked!" << std::endl;
    }

    std::cout << actMousePosX << " : " << actMousePosY << std::endl;

};
int main() {

    InitWindow(screenWidth, screenHeight, "Coffe - Game");



    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawGameplayScreen();
        EndDrawing();
    }
    CloseWindow();

    return 0;
}


static void ChangeToScreen(int  screen)
{
    // Unload current screen

    // Init next screen
    switch (screen)
    {
    case LOGO: InitLogoScreen(); break;
    case TITLE: InitTitleScreen(); break;
    case GAMEPLAY: InitGameplayScreen(); break;
    case ENDING: InitEndingScreen(); break;
    default: break;
    }

    currentScreen = screen;
}