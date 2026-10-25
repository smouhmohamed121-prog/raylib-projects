#include <raylib.h>
#include <unistd.h>
typedef struct Sprite{

  Texture2D texture;
  Rectangle dest_rect;

} Sprite;
void move_player (Sprite *player);
int main(void ){

    const int window_width = 500;
    const int window_height= 300;
    const char *title = "Basic texture 3";

    // init app
    InitWindow(window_width , window_height,title);
    // loading texture
    Texture2D duck = LoadTexture("duck.png");
    if (duck.id == 0) {
      TraceLog(LOG_ERROR, "FATAL: Could not load duck.png!");
    }
    Sprite player = (Sprite){
      .texture = duck,
      .dest_rect = (Rectangle){
        .x = 10.0,
        .y = 100.0,
        .height = 100.0,
        .width = 100.0,
      }
   };
    SetTargetFPS(60);
    // run app ```
    while (!WindowShouldClose()){
      // Update player 
        move_player(&player);
        BeginDrawing();
        ClearBackground(SKYBLUE);
      //    DrawTexture(duck,12,13,RAYWHITE);
        DrawTexturePro(player.texture,(Rectangle){0,0,96,96},player.dest_rect,(Vector2) {0,0}, 0,RAYWHITE); 
        //DrawTexture(player.texture, (int)player.dest_rect.x, (int)player.dest_rect.y, RAYWHITE);
        EndDrawing();
    }
    // unload textuer 
    UnloadTexture(duck);
    // close app 
    CloseWindow() ;

return 0;}


void move_player (Sprite *player){
  if (IsKeyDown(KEY_D)){
    player->dest_rect.x += 100.0 * GetFrameTime();
  }
  if (IsKeyDown(KEY_A)){
    player->dest_rect.x -= 100.0 * GetFrameTime();
  }

}
