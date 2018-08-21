#ifndef CC_Engine
#define CC_Engine


#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>



class Engine{
public:
    static int SCREEN_HEIGHT;
    static int SCREEN_WIDTH;
    
    bool Initialize(char* windowTitle);
    void Update();
    void BeginRender();
    void EndRender();
    
    Engine();
    ~Engine();
private:
    static GLFWwindow* window;
};


#endif
