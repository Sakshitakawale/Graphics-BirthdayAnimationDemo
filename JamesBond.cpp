#include "JamesBond.h"

void displayJamesBond(float w)
{
    //outer circle
    glBegin(GL_POLYGON);
    for (int i = 0;i < 360;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 1.0f * cos(angle);
        float y = 1.0f * sin(angle);

        // glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(w,w,w);
        glVertex3f(x, y, 0.0f);
    }
    glEnd();

    glColor3f(0.0, 0.0, 0.0); // black

    // Head
    glBegin(GL_POLYGON);
        glVertex2f(-0.06, 0.76);
        glVertex2f(-0.058, 0.79);
        glVertex2f(-0.055, 0.81);
        glVertex2f(-0.05, 0.86);
        glVertex2f(-0.04, 0.87);
        glVertex2f(-0.03, 0.88);
        glVertex2f(0.0, 0.89);
        glVertex2f(0.03, 0.88);
        glVertex2f(0.04, 0.87);
        glVertex2f(0.05, 0.86);
        glVertex2f(0.055, 0.81);
        glVertex2f(0.058, 0.79);
        glVertex2f(0.06, 0.76);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-0.04, 0.68);
        glVertex2f(-0.045, 0.72);
        glVertex2f(-0.05, 0.76);
        glVertex2f(0.05, 0.76);
        glVertex2f(0.045, 0.72);
        glVertex2f(0.04, 0.68);
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 90;i < 270;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.02f * cos(angle);
        float y = 0.03f * sin(angle);

        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(x-0.055, y+0.78f, 0.0f);
    }
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 270;i < 440;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.02f * cos(angle);
        float y = 0.03f * sin(angle);

        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(x+0.055, y+0.78f, 0.0f);
    }
    glEnd();

    //chest
    glBegin(GL_POLYGON);
        glVertex2f(-0.25, 0.6);
        glVertex2f(0.0, 0.7);
        glVertex2f(0.25, 0.6);
        // glVertex2f(0.05, 0.8);
        // glVertex2f(0.045, 0.76);
        // glVertex2f(0.04, 0.72);
    glEnd();

    //chest quad
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    
    glVertex3f(-0.25f, 0.6f, 0.0f);
    glVertex3f(-0.2f, 0.25f, 0.0f);
    glVertex3f(0.2f, 0.25f, 0.0f);
    glVertex3f(0.25f, 0.6f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
        // glColor3f(1.0, 1.0, 1.0);
        glColor3f(w,w,w);
        glVertex2f(-0.05, 0.68);
        glVertex2f(-0.05, 0.4);
        glVertex2f(0.05, 0.4);
        glVertex2f(0.05, 0.66);
    glEnd();

    glBegin(GL_POLYGON);
        // glColor3f(1.0, 1.0, 1.0);
         glColor3f(w,w,w);
        glVertex2f(0.12, 0.54);
        glVertex2f(0.12, 0.52);
        glVertex2f(0.18, 0.52);
        glVertex2f(0.18, 0.54);
    glEnd();

    glBegin(GL_POLYGON);
        // glColor3f(1.0, 1.0, 1.0);
         glColor3f(w,w,w);
        glVertex2f(-0.1, 0.34);
        glVertex2f(-0.1, 0.22);
        glVertex2f(-0.05, 0.22);
        glVertex2f(-0.05, 0.34);
    glEnd();
    
    //1st hand
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    
    glVertex3f(-0.03f, 0.58f, 0.0f);
    glVertex3f(-0.2f, 0.35f, 0.0f);
    glVertex3f(-0.13f, 0.25f, 0.0f);
    glVertex3f(0.05f, 0.48f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    // glColor3f(1.0f, 1.0f, 1.0f);
     glColor3f(w,w,w);
    
    glVertex3f(0.01f, 0.62f, 0.0f);
    glVertex3f(-0.03f, 0.58f, 0.0f);
    glVertex3f(0.05f, 0.48f, 0.0f);
    glVertex3f(0.08f, 0.52f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(0.08, 0.52);
        glVertex2f(0.01, 0.62);
        glVertex2f(0.06, 0.70);
        glVertex2f(0.09, 0.68);
    glEnd();

    glLineWidth(6.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f); // Red color
        glVertex2f(0.07f, 0.68f);  // Start point
        glVertex2f(0.15f, 0.8f);  // End point
    glEnd();


    //middle quad
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(-0.15, 0.25);
        glVertex2f(-0.17, 0.0);
        glVertex2f(0.17, 0.0);
        glVertex2f(0.15, 0.25);
    glEnd();

    //leg1 quad
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(-0.15, 0.0);
        glVertex2f(-0.18, -0.35);
        glVertex2f(-0.175, -0.37);
        glVertex2f(-0.17, -0.38);
        glVertex2f(-0.165, -0.38);
        glVertex2f(-0.16, -0.38);
        glVertex2f(-0.155, -0.39);
        glVertex2f(-0.15, -0.39);
        glVertex2f(-0.05, -0.3);
        glVertex2f(0.01, 0.0);
    glEnd();

    //leg1 quad part2
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(-0.15, -0.39);
        glVertex2f(0.15, -0.62);
        glVertex2f(0.2, -0.5);
        glVertex2f(0.06, -0.36);
        glVertex2f(-0.05, -0.3);
    glEnd();

    //leg1 shoe quad
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(0.15, -0.62);
        glVertex2f(0.21, -0.8);
        glVertex2f(0.27, -0.75);
        glVertex2f(0.28, -0.66);
        glVertex2f(0.32, -0.6);
        glVertex2f(0.2, -0.5);
    glEnd();

    glPushMatrix();
    glRotatef(-65.0f,0.0f,0.0f,1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0;i < 180;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.1f * cos(angle);
        float y = 0.04f * sin(angle);

        // glColor3f(1.0f, 1.0f, 1.0f);
        glColor3f(w,w,w);
        glVertex3f(x+0.695, y-0.15, 0.0f);
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glRotatef(-112.0f,0.0f,0.0f,1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0;i < 90;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.07f * cos(angle);
        float y = 0.03f * sin(angle);

        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(x+0.58, y+0.495, 0.0f);
    }
    glEnd();
    glPopMatrix();

    //leg2 quad
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, -0.7);
        glVertex2f(0.11, -0.7);
        glVertex2f(0.15, 0.0);
    glEnd();

    //leg2 shoe part 1
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(0.0, -0.7);
        glVertex2f(0.01, -0.73);
        glVertex2f(0.1, -0.73);
        glVertex2f(0.11, -0.7);
    glEnd();

    //leg2 shoe part 2
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);

        glVertex2f(0.01, -0.73);
        glVertex2f(0.0, -0.76);
        glVertex2f(0.11, -0.76);
        glVertex2f(0.1, -0.73);
    glEnd();

    //leg2 shoe part 3
    glBegin(GL_POLYGON);
    for (int i = 180;i < 360;i++)
    {
        //angle
        float angle = (float)(i * 3.14 / 180);

        float x = 0.055f * cos(angle);
        float y = 0.04f * sin(angle);

        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3f(x+0.055, y-0.76, 0.0f);
    }
    glEnd();

    // glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    
    // glVertex3f(-0.15f, 0.0f, 0.0f);
    // glVertex3f(-0.15f, -0.1f, 0.0f);
    // glVertex3f(0.15f, -0.1f, 0.0f);
    // glVertex3f(0.15f, 0.0f, 0.0f);
    // glEnd();

    //leg1 quad part 1
    // glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    
    // glVertex3f(-0.15f, -0.1f, 0.0f);
    // glVertex3f(-0.19f, -0.35f, 0.0f);
    // glVertex3f(-0.04f, -0.3f, 0.0f);
    // glVertex3f(-0.01f, -0.1f, 0.0f);
    // glEnd();

    //leg1 quad part 2
    // glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    
    // glVertex3f(-0.14f, -0.35f, 0.0f);
    // glVertex3f(0.15f, -0.5f, 0.0f);
    // glVertex3f(0.2f, -0.4f, 0.0f);
    // glVertex3f(-0.04f, -0.3f, 0.0f);
    // glEnd();

    //leg1 shoe quad
    // glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    
    // glVertex3f(0.15f, -0.5f, 0.0f);
    // glVertex3f(0.2f, -0.6f, 0.0f);
    // glVertex3f(0.25f, -0.5f, 0.0f);
    // glVertex3f(0.15f, -0.4f, 0.0f);
    // glEnd();

    //leg2 quad
    // glBegin(GL_QUADS);
    // glColor3f(0.0f, 0.0f, 0.0f);
    
    // glVertex3f(0.0f, -0.1f, 0.0f);
    // glVertex3f(0.0f, -0.6f, 0.0f);
    // glVertex3f(0.15f, -0.6f, 0.0f);
    // glVertex3f(0.15f, -0.1f, 0.0f);
    // glEnd();

    // circle of S
    // glBegin(GL_POLYGON);
    // for (int i = 90;i < 270;i++)
    // {
    //     //angle
    //     float angle = (float)(i * 3.14 / 180);

    //     float x = 0.20f * cos(angle);
    //     float y = 0.275f * sin(angle);

    //     glColor3f(1.0f, 1.0f, 1.0f);
    //     glVertex3f(x, y+0.225, 0.0f);
    // }
    // glEnd();

    // glBegin(GL_POLYGON);
    // for (int i = 90;i < 270;i++)
    // {
    //     //angle
    //     float angle = (float)(i * 3.14 / 180);

    //     float x = 0.10f * cos(angle);
    //     float y = 0.175f * sin(angle);

    //     glColor3f(0.0f, 0.0f, 0.0f);
    //     glVertex3f(x, y+0.225, 0.0f);
    // }
    // glEnd();
}

