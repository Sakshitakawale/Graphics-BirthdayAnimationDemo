#include"LetterD.h"

void displayLetterD(void)
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f,1.0f);
    // Left vertical line
    glVertex2f(-0.1f,0.5f);
    glVertex2f(-0.2f,0.5f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.1f,-0.5f);
    glEnd();

    // Right Rounded part
    float outerR = 0.5f;
    float innerR = 0.4f;
    float cx = -0.1f;   // center x
    float cy = 0.0f;    // center y

    for (float angle = -PI/2; angle < PI/2; angle += 0.001f)
    {
        float a1 = angle;
        float a2 = angle + 0.01f;

        glBegin(GL_QUADS);

        // Outer arc points
        glVertex2f(cx + outerR * cos(a1), cy + outerR * sin(a1));
        glVertex2f(cx + outerR * cos(a2), cy + outerR * sin(a2));

        // Inner arc points
        glVertex2f(cx + innerR * cos(a2), cy + innerR * sin(a2));
        glVertex2f(cx + innerR * cos(a1), cy + innerR * sin(a1));

        glEnd();
    }
}

