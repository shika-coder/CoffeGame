#include "raylib.h"
#include "screens.h"


void DrawGameplayScreen(void) {


    //Texture2D Player = LoadTexture("resources/Player.png");
    Texture2D Theke = LoadTexture("resources/Theke.png");
    Texture2D Coffe = LoadTexture("resources/CoffeeMaschine.png");
    //Texture2D Background = LoadTexture("resources/raw2.png");
    Texture2D Start_Button = LoadTexture("resources/start_screen/Start_Button.png");
    

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Mouse x: ", 0, 0, 30, BLACK);
        DrawText("Mouse y: ", 0, 30, 30, BLACK);
        //DrawTexture(Background, 1, 1, RAYWHITE);
        DrawTexture(Coffe, 500, 230, RAYWHITE);
        DrawTexture(Theke, 1, 2, RAYWHITE);
        EndDrawing();
    };

    CloseWindow();
}