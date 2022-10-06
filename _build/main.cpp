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

}


int main() {
    
    currentScreen = 

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);


    
    

    DrawLogoScreen();
    CloseWindow();

    return 0;
}