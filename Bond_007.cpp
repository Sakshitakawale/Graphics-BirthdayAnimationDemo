#include"Bond_007.h"

const float PI = 3.14159265f;
void displayEllipse()
{
    glBegin(GL_TRIANGLE_STRIP);

    for(int i = 0; i <= 100; i++)
    {
        float angle = 2.0f * PI * i / 100;

        float c = cos(angle);
        float s = sin(angle);

        // Outer ellipse
        glVertex2f(
            0.20f * c,
            0.40f * s
        );

        // Inner ellipse
        glVertex2f(
            0.06f * c,
            0.30f * s
        );
    }

    glEnd();
}

void displaySeven()
{
    // Top bar
    // glPushMatrix();
    // glTranslatef(x, 0.0f, 0.0f);
    
    glBegin(GL_QUADS);
    glVertex2f(-0.15f, 0.30f);
    glVertex2f(-0.15f, 0.40f);
    glVertex2f( 0.18f, 0.40f);
    glVertex2f( 0.165f, 0.30f);
    // glVertex2f(-0.2f, 0.30f);
    glEnd();
    // glPopMatrix();

    // Left Short Line
    // glPushMatrix();
    // glTranslatef(x-0.1f, 0.0f, 0.0f);
    // glRotatef(-12.0f, 0.0f, 0.0f, 1.0f);

    // glBegin(GL_QUADS);
    // glVertex2f(-0.23f, 0.36f);
    // glVertex2f( -0.13f, 0.35f);
    // glVertex2f( -0.15f, 0.16f);
    // glVertex2f(-0.23f, 0.14f);
    // glEnd();
    // glPopMatrix();

    // // Right Long Line
    // glPushMatrix();
    // glTranslatef(x-0.2f, 0.0f, 0.0f);
    // glRotatef(-18.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_QUADS);
    glVertex2f(0.25f, 0.40f);
    glVertex2f(0.15f, 0.40f);
    glVertex2f(0.0f, -0.30f);
    glVertex2f(0.1f, -0.30f);
    glEnd();
    // glPopMatrix();
}




