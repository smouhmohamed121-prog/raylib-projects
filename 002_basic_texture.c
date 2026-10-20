
#include <raylib.h>
// https://www.youtube.com/watch?v=AniAoJC6QAc
int main(void){
    // Variables 
    const int window_width = 800;
    const int window_height = 500;
    const char *title = "Basic texture";
    const char *text = "this is Goku";
    // init app 
    InitWindow(window_width, window_height, title);

    //todo Loading things 

    Texture2D player_idl_texture = LoadTexture("duck.png");

    
    // run app 
    while (!WindowShouldClose()){
        BeginDrawing();

        // All Drawing happes here 
        ClearBackground(SKYBLUE);

       DrawTexture(player_idl_texture,12 ,15,WHITE);
        //Vector2 position = {10.0,12,0};
       //DrawTextureEx(player_idl_texture,position, 0.0f, 0.1f, WHITE);
        
        EndDrawing();
    }
    // Unload things 
    UnloadTexture(player_idl_texture);
    // close app 
    CloseWindow();
return 0;}