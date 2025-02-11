#include "raylib.h"

int main() {
    InitWindow(800, 600, "Raylib Game Loop Example");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        const float timeStep = 1.0f / 60.0f;
        float accumulator = 0.0f;
        float speedX = 2.0f;
        float posX = 30.f;

        while (!WindowShouldClose()) {
            float deltaTime = GetFrameTime();
            accumulator += deltaTime;

        while (accumulator >= timeStep) {
            posX += speedX;
            accumulator -= timeStep;
        }

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircle((int) posX, 200 + 300, BROWN);
            EndDrawing();
    }

    CloseWindow();
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.