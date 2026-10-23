#include <raylib.h>
#include <unistd.h>
void move_player (Sprite *player);
typedef struct Sprite{

  Texture2D texture;
  Rectangle dest_rect;

} Sprite;

int main(void ){

    const int window_width = 500;
    const int window_height= 300;
    const char *title = "Basic texture 3";

    // init app
    InitWindow(window_width , window_height,title);
    // loading texture
    Texture2D duck = LoadTexture("duck.png");
    Sprite player = (Sprite){
      .texture = duck,
      .dest_rect = (Rectangle){
        .x = 10.0,
        .y = 100.0,
        .height = 100.0,
        .width = 100.0,
      }
   };
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
    //    DrawTexture(duck,12,13,RAYWHITE);
        DrawTexturePro(player.texture,{0,0,16,16},player.dest_rect, {0,0}, 0,RAYWHITE); 
        EndDrawing();
    }
    // unload textuer 
    UnloadTexture(duck);
    // close app 
    CloseWindow() ;

return 0;}


void move_player (Sprite *player){
  if (IsKeyDown(key_D)){
    player->dest_rect.x += 10.0;
  }
}
