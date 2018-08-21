#ifndef CC_SPRITE
#define CC_SPRITE

#include "GLFW/glfw3.h"
#include "texture.h"

#include <string>
#include <iostream>
using namespace std;


class Sprite{
public:
    Sprite();
    Sprite(Texture _texture);
    Sprite(string imagePath);
    Sprite(string imagePath, float _xPos, float _yPos);

    
    void Update();
    void Render();

    void SetPos(float x, float y);
private:
    Texture texture;
    float xPos;
    float yPos;
};



#endif
