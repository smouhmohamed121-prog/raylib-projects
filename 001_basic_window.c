#include <raylib.h>
// https://www.youtube.com/watch?v=AniAoJC6QAc
int main(void){
    // Variables 
    const int window_width = 300;
    const int window_height = 300;
    const char *title = "Basic window";
    const char *text2 = "My name is Mohamed";
    const char *text = "I am awesome";
    const int fontSize = 20;

    // init app 
    InitWindow(window_width, window_height, title);
    // run app 
    while (!WindowShouldClose()){
        BeginDrawing();

        // All Drawing happes here 
        ClearBackground(SKYBLUE);
        DrawText(text2,10,20, fontSize, GOLD);       // Draw text (using default font)
        DrawText(text,10,20+fontSize, fontSize, RED);       // Draw text (using default font)

        EndDrawing();
    }
    // close app 
    CloseWindow();

return 0;}