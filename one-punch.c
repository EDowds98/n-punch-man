#include <stdio.h>
#include "raylib.h"

int main (void) {
	const int screenWidth = 800;
	const int screenHeight = 500;

	InitWindow(screenWidth, screenHeight, "N-Punch Man - How Close Are You To Becoming One Punch Man?");

	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(RAYWHITE);

			DrawText("You Are 100%\nOne Punch Man", 300, 5, 26, BLACK);
			DrawText("100 Sit-Ups", 10, 300, 24, BLACK);
			DrawText("100 Push-Ups", 200, 300, 24, BLACK);
			DrawText("100 Squats", 410, 300, 24, BLACK);
			DrawText("A 10K run", 600, 300, 24, BLACK);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}	 
