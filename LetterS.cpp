#include "LetterS.h"

void displayLetterS(void)
{
    // code
    glLineWidth(0.03f*400);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.2f,0.5f,0.0f);
    glVertex3f(0.0f,0.5f,0.0f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    for (int i = 90;i < 270;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.2f * cos(angle);
        float y = 0.25f * sin(angle);

        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(x, y+0.25f, 0.0f);
    }
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex3f(0.0f,-0.5f,0.0f);
    glVertex3f(-0.2f,-0.5f,0.0f);
    glEnd();

    glRotatef(180,0.0f,0.0f,1.0f);
    glBegin(GL_LINE_STRIP);
    for (int i = 90;i < 270;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.2f * cos(angle);
        float y = 0.25f * sin(angle);

        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(x+0.01f, y+0.25f, 0.0f);
    }
    glEnd();
}