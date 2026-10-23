#include <raylib.h>
#include <unistd.h>
int main(void ){

    const int window_width = 500;
    const int window_height= 300;
    const char *title = "Basic texture 3";

    // init app
    InitWindow(window_width , window_height,title);
    // loading texture
    Texture2D duck = LoadTexture("duck.png");
    SetTargetFPS(5);
    Color colors[] = { 
    LIGHTGRAY, GRAY, DARKGRAY, YELLOW, GOLD, ORANGE, PINK, 
    RED, MAROON, GREEN, LIME, DARKGREEN, SKYBLUE, BLUE, 
    DARKBLUE, PURPLE, VIOLET, DARKPURPLE, BEIGE, BROWN, 
    DARKBROWN, WHITE, BLACK, BLANK, MAGENTA, RAYWHITE 
    };
    int number_colors = sizeof(colors) / sizeof(colors[0]);
    int current_color_index = 0;
    // run app ```
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(colors[current_color_index]);
        if (current_color_index < number_colors){
          current_color_index++;
        }
        else current_color_index = 0;
        DrawTexture(duck,12,13,WHITE);
        EndDrawing();
    }
    // unload textuer 
    UnloadTexture(duck);
    // close app 
    CloseWindow() ;

return 0;}
