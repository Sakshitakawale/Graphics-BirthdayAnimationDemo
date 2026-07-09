#include"Balloon.h"

const float PI = 3.14159265f;
void drawCircle(float centerX, float centerY, float radius)
{
    glBegin(GL_POLYGON);

    for(float angle = 0; angle <= 2 * PI; angle += 0.05f)
    {
        float x = centerX + radius * cos(angle);
        float y = centerY + radius * sin(angle);

        glVertex2f(x, y);
    }

    glEnd();
}

void displayBalloon(float r, float g, float b)
{
    // glColor3f(0.02f, 0.5f, 0.96f);
    glColor3f(r,g,b);

    glBegin(GL_POLYGON);
    for(float angle = 0; angle <= 2 * PI; angle += 0.01f)
    {
        float x = 0.2f * cos(angle);
        float y = 0.25f * sin(angle) + 0.3f;

        glVertex2f(x, y);
    }
    glEnd();

    // glColor3f(0.02f, 0.5f, 0.96f);

    glBegin(GL_TRIANGLES);
        glVertex2f(-0.16f, 0.15f);
        glVertex2f( 0.16f, 0.15f);
        glVertex2f( 0.0f, -0.1f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_LINE_STRIP);

    float tipX = 0.0f;
    float tipY = -0.1f;

    glBegin(GL_LINE_STRIP);

    for(float y = tipY; y >= -1.0f; y -= 0.01f)
    {
        float x = tipX + 0.02f * sin(20.0f * (tipY - y));

        glVertex2f(x, y);
    }

    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);

    drawCircle(-0.08f, 0.45f, 0.03f);
    drawCircle( 0.07f, 0.40f, 0.025f);
    drawCircle(-0.05f, 0.25f, 0.02f);
    drawCircle( 0.09f, 0.22f, 0.03f);
    drawCircle( 0.00f, 0.33f, 0.025f);
}



