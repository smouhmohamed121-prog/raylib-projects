#include <stdio.h>
#include <raylib.h>

int main(void ){

    const int window_width = 500;
    const int window_height= 300;
    const char *title = "Basic texture 3";

    // init app
    InitWindow(window_width , window_height,title);
    // loading texture
    Texture2D duck = LoadTexture("duck.png");

    // run app 
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(SKYBLUE);
        ClearBackground(RED);
      
        DrawTexture(duck,12,13,WHITE);
        EndDrawing();
    }
    // unload textuer 
    UnloadTexture(duck);
    // close app 
    CloseWindow() ;

return 0;}
