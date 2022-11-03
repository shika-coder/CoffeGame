#include "raylib.h"
#include "CoffeMaschine.h"
#include "screens.h"
#include "changeToScreen.h"
#include <iostream>


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

    InitWindow(screenWidth, screenHeight, "TITLE");


    while (!WindowShouldClose()) {
        //DrawLogoScreen();
        //DrawGameplayScreen();
        ChangeToScreen(1);
    }

    return 0;
}


