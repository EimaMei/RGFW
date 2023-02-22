#define RGF_IMPLEMENTATION

#include "RGF.h"

int main(){
    RGF_window w = RGF_createWindow("name", 500, 500, 500, 500, NULL);

    if (w.display == NULL)
        return 0;

    while (1){
        RGF_checkEvents(&w); 
        RGF_clear(&w, 255, 255, 255, 255);

        glBegin(GL_POLYGON);
            glColor3f(1, 0, 0); glVertex2f(-0.6, -0.75);
            glColor3f(0, 1, 0); glVertex2f(0.6, -0.75);
            glColor3f(0, 0, 1); glVertex2f(0, 0.75);
        glEnd();

        if (w.event.type == RGF_quit)
            break;
    }

    RGF_closeWindow(&w);
}