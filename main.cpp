#include "Engine/Engine.h"
#include <iostream>
#include "Engine/Graphics/sprite.h"
#include "Engine/IO/mouse.h"

using namespace std;

int main(){
    cout << "Hello World!" << endl;
    
    Engine engine;
    engine.Initialize("Color Condos");

    Sprite testSprite = Sprite("Assets/Art/Hat_man1.png", 100, 100);
    
    while(true){
	engine.Update();
	testSprite.Update();

	testSprite.SetPos((float)Mouse::GetMouseX(), (float)Mouse::GetMouseY());
	
	engine.BeginRender();
	testSprite.Render();
	engine.EndRender();
	
    }
}
