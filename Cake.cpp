#include"Cake.h"

void displayCake(void)
{
    // code
    // glBegin(GL_QUADS);
    // glColor3f(0.5294, 0.8078, 0.9804);
    // glVertex3f(1.0f,1.0f,0.0f);
    // glVertex3f(-1.0f,1.0f,0.0f);
    // glVertex3f(-1.0f,-1.0f,0.0f);
    // glVertex3f(1.0f,-1.0f,0.0f);
    // glEnd();

    //lowest base:blue color
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(0.2f,-0.25f,0.0f);
    glVertex3f(-0.2f,-0.3f,0.0f);
    glVertex3f(-0.2f,-0.5f,0.0f);
    glVertex3f(0.2f,-0.5f,0.0f);
    glEnd();

    //middle base:orange color
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex3f(0.15f,-0.1f,0.0f);
    glVertex3f(-0.15f,-0.0f,0.0f);
    glVertex3f(-0.15f,-0.3f,0.0f);
    glVertex3f(0.15f,-0.25f,0.0f);
    glEnd();

    //high base:yellow color
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.5f,0.0f);
    glVertex3f(0.1f,0.25f,0.0f);
    glVertex3f(-0.1f,0.25f,0.0f);
    glVertex3f(-0.1f,-0.02f,0.0f);
    glVertex3f(0.1f,-0.085f,0.0f);
    glEnd();

    //cat
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.06f,0.4f,0.0f);
    glVertex3f(-0.06f,0.4f,0.0f);
    glVertex3f(-0.06f,0.25f,0.0f);
    glVertex3f(0.06f,0.25f,0.0f);
    glEnd();

    //left triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(-0.06f,0.45f,0.0f);
    glVertex3f(-0.06f,0.4f,0.0f);
    glVertex3f(-0.03f,0.4f,0.0f);
    glEnd();
   
    //right triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.06f,0.45f,0.0f);
    glVertex3f(0.03f,0.4f,0.0f);
    glVertex3f(0.06f,0.4f,0.0f);
    glEnd();

    //middle triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glVertex3f(-0.03f,0.4f,0.0f);
    glVertex3f(0.03f,0.4f,0.0f);
    glEnd();

    //lines over triangle
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(0.0f,0.55f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(-0.03f,0.55f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(0.03f,0.55f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(0.015f,0.55f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(-0.015f,0.55f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex3f(0.015f,0.55f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    //cat eyes
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f,0.0f,0.0f);
    for(int i=0;i<360;i+=1)
    {
        float angle = (float)(i * 3.14/180);
        float x = 0.015f*cosf(angle);
        float y = 0.015f*sinf(angle);
        glVertex3f(x+0.03f,y+0.35f,0.0f);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f,0.0f,0.0f);
    for(int i=0;i<360;i+=1)
    {
        float angle = (float)(i * 3.14/180);
        float x = 0.015f*cosf(angle);
        float y = 0.015f*sinf(angle);
        glVertex3f(x-0.03f,y+0.35f,0.0f);
    }
    glEnd();

    //cat's nose
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex3f(0.01f,0.33f,0.0f);
    glVertex3f(-0.01f,0.33f,0.0f);
    glVertex3f(0.0f,0.31f,0.0f);
    glEnd();

    //mouch
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.0f,0.3f,0.0f);
    glVertex3f(-0.1f,0.33f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.0f,0.3f,0.0f);
    glVertex3f(0.1f,0.33f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.0f,0.3f,0.0f);
    glVertex3f(-0.1f,0.27f,0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.0f,0.3f,0.0f);
    glVertex3f(0.1f,0.27f,0.0f);
    glEnd();

    //candle- right side
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex3f(0.18f,0.0f,0.0f);
    glVertex3f(0.16f,0.0f,0.0f);
    glVertex3f(0.16f,-0.25f,0.0f);
    glVertex3f(0.18f,-0.25f,0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.8f,0.0f);
    glVertex3f(0.17f,0.05f,0.0f);
    glVertex3f(0.16f,0.025f,0.0f);
    glVertex3f(0.17f,0.0f,0.0f);
    glVertex3f(0.18f,0.02f,0.0f);
    glEnd();

    //candle-left side
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,1.0f);
    glVertex3f(-0.11f,0.22f,0.0f);
    glVertex3f(-0.13f,0.22f,0.0f);
    glVertex3f(-0.13f,-0.01f,0.0f);
    glVertex3f(-0.11f,-0.02f,0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,0.8f,0.0f);
    glVertex3f(-0.12f,0.27f,0.0f);
    glVertex3f(-0.13f,0.24f,0.0f);
    glVertex3f(-0.12f,0.22f,0.0f);
    glVertex3f(-0.11f,0.2f,0.0f);
    glEnd();
}