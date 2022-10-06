#include "raylib.h"
#include "screens.h"
#include <iostream>

#define NUM_FRAMES  1


void DrawLogoScreen(void) {
    Texture2D button = LoadTexture("resources/start_screen/Start_Button.png");

    float frameHeight = (float)button.height / NUM_FRAMES;
    Rectangle sourceRec = { 0, 0, (float)button.width, frameHeight };

    Rectangle btnBounds = { 800 / 2.0f - button.width / 2.0f, 300 / 2.0f - button.height / NUM_FRAMES / 2.0f, (float)button.width, frameHeight };

    int btnState = 0;
    bool btnAction = false;

    Vector2 mousePoint = { 0.0f, 0.0f };



    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        mousePoint = GetMousePosition();
        btnAction = false;

        std::cout << btnState << std::endl;

        // Check button state
        if (CheckCollisionPointRec(mousePoint, btnBounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
                btnState = 2;
            }
            else btnState = 1;
            if (btnState == 2) {
               
            }

            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;

        // Calculate button frame rectangle to draw depending on button state
        sourceRec.y = btnState * frameHeight;
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RED);

        DrawTextureRec(button, sourceRec, { 15, 100 }, WHITE);

        EndDrawing();
    }
}

