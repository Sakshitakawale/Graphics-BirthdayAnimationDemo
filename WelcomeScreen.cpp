#include<GL/freeglut.h>
#include<iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
//custom headers
#include "Gun.h"
#include "Circle.h"
#include "JamesBond.h"
#include "LetterY.h"
#include "LetterA.h"
#include "LetterS.h"
#include "LetterH.h"
#include "LetterP.h"
#include "LetterB.h"
#include "LetterI.h"
#include "LetterR.h"
#include "LetterT.h"
#include "LetterD.h"
#include "Bond_007.h"
#include "Cake.h"
#include "Balloon.h"

//sound header
#include "sound.h"

//translate bullet x variable
float trBulletX = -0.4f;

//scale James Bond x and y variables
float scJamesBondX = 0.0f;
float scJamesBondY = 0.0f;
//following circle color
float fw1 = 0.0f;
float fw2 = 0.0f;
//main/initial circle color
float mw = 1.0f;
//gun color
float gColor = 1.0f;
//following circle x 
float fx = 0.0f;
//screen1
int screen = 1;
//james bond color
float bColor = 1.0f;
//balloon Y
float balloonY = -1.5f;
//birthday letter 
float bX = 0.1f;
//HAPPY animation
float trHappyX = -1.0f;
//BIRTHDAY animation
float trBirthdayX = 1.0f;
//YASH animation
float trYashX = 0.3f;
//007 animation
float tr007X = 0.3f;

bool bIsFullScreen = false;
bool bIsCircleRightMotion = false;
bool bIsBulletAnimFinished = false;
bool bIsFollowingCircleDisappear_1 = false;
bool bIsFollowingCircleDisappear_2 = false;
bool bIsJamesBondRendered = false;
bool bIsLetterAnimationRendered = false;

void myUpdate();
void displayYash();
void displayHappy();
void displayBirthday();
void display007();
void displayBdayCake();
void displayBalloons();

int main(int argc, char* argv[])
{
    //function declarations
    void initialize(void);
    void uninitialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);

    // code
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Scenery by Sakshi");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    //Flow should not come here
    return(0);
}

void initialize(void)
{
    // code
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    //song
    PlaySound(MAKEINTRESOURCE(SONG), GetModuleHandle(NULL), SND_ASYNC | SND_RESOURCE);
}

void resize(int width, int height)
{
    // code
    if (height <= 0)
        height = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    //cout << width << "\n" << height << endl;
}

void display(void)
{
    // code
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);


    switch(screen)
    {
        case 1:
        {
            //following circle
            glLoadIdentity();
            // glTranslatef(-0.5f,0.0f,0.0f);
            glTranslatef(fx,0.0f,0.0f);
            glScalef(0.12f,0.12f,1.0f);
            displayCircle(fw1);
            
            glLoadIdentity();
            // glTranslatef(-0.5f,0.0f,0.0f);
            glTranslatef(fx+0.5f,0.0f,0.0f);
            glScalef(0.12f,0.12f,1.0f);
            displayCircle(fw2);

            //initial circle
            glLoadIdentity();
            glTranslatef(trBulletX,0.0f,0.0f);
            glScalef(0.12f,0.12f,1.0f);
            displayCircle(mw);

            //display gun
            glLoadIdentity();
            glTranslatef(-0.75f,0.0f,0.0f);
            glScalef(0.5f,0.5f,0.0f);
            displayGun(gColor);

            //display bond
            if(bIsBulletAnimFinished == true)
            {
                glLoadIdentity();
                glTranslatef(0.0f,0.0f,0.0f);
                glScalef(scJamesBondX,scJamesBondY,0.0f);
                displayJamesBond(bColor);
            }
        }
        break;
        case 2:
        {
            //Display Happy
            displayHappy();

            //display BIRTHDAY
            displayBirthday();

            //display YASH
            displayYash();

            //display 007
            display007();

            //display cake
            displayBdayCake();

            //display balloons
            displayBalloons();
        }
        break;
        default:
        break;
    }

    glutSwapBuffers();

    //update
    myUpdate();
    glutPostRedisplay();
}

void displayHappy()
{
    //display letter H
    glLoadIdentity();
    glTranslatef(trHappyX-0.9f, 0.5f, 0.0f);
    glScalef(1.0f, 1.0f, 1.0f);
    displayLetterH();

    //display letter A
    glLoadIdentity();
    glTranslatef(trHappyX-0.73f, 0.5f, 0.0f);
    glScalef(0.2f, 0.2f, 1.0f);
    displayLetterA();

    //display letter P
    glLoadIdentity();
    glTranslatef(trHappyX-0.58f,0.5f,0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterP();

    //display letter P
    glLoadIdentity();
    glTranslatef(trHappyX-0.48f,0.5f,0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterP();

    //display letter Y
    glLoadIdentity();
    glTranslatef(trHappyX-0.35f, 0.5f, 0.0f);
    glScalef(0.22f, 0.22f, 1.0f);
    displayLetterY();
}

void displayBirthday()
{
    //display letter B
    glLoadIdentity();
    glTranslatef(0.0f-trBirthdayX, 0.5f, 0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterB();

    //display letter I
    glLoadIdentity();
    glTranslatef((0.2f-bX)-trBirthdayX, 0.5f, 0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterI();

    //display letter R
    glLoadIdentity();
    glTranslatef((0.3f-bX)-trBirthdayX, 0.5f, 0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterR();

    //display letter T
    glLoadIdentity();
    glTranslatef((0.43f-bX)-trBirthdayX, 0.5f, 0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterT();

    //display letter H
    glLoadIdentity();
    glTranslatef((0.55f-bX)-trBirthdayX, 0.5f, 0.0f);
    glScalef(1.0f, 1.0f, 1.0f);
    displayLetterH();

    //display letter D
    glLoadIdentity();
    glTranslatef((0.68f-bX)-trBirthdayX, 0.5f, 0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterD();

    //display letter A
    glLoadIdentity();
    glTranslatef((0.85f-bX)-trBirthdayX, 0.5f, 0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterA();

    //display letter Y
    glLoadIdentity();
    glTranslatef((1.0f-bX)-trBirthdayX, 0.51f, 0.0f);
    glScalef(0.22f,0.22f,1.0f);
    displayLetterY();
}

void displayYash()
{
    //display letter Y
    glLoadIdentity();
    glTranslatef(trYashX-0.5f, 0.01f, 0.0f);
    glScalef(0.22f,0.22f,1.0f);
    displayLetterY();

    // //display letter A
    glLoadIdentity();
    glTranslatef(trYashX-0.35f,0.0f,0.0f);
    glScalef(0.2f,0.2f,1.0f);
    displayLetterA();

    //display letter S
    glLoadIdentity();
    glTranslatef(trYashX-0.2f,0.0f,0.0f);
    glScalef(0.18f,0.18f,1.0f);
    displayLetterS();

    //display letter H
    glLoadIdentity();
    glTranslatef(trYashX-0.05f,0.0f,0.0f);
    glScalef(1.0f,1.0f,1.0f);
    displayLetterH();
}

void display007()
{
    //display 0
    glLoadIdentity();
    glTranslatef(tr007X+0.15f,0.0f,0.0f);
    glScalef(0.4f,0.4f,1.0f);
    glRotatef(-10.0f, 0.0f, 0.0f, 1.0f);
    displayEllipse();

    //display 0
    glLoadIdentity();
    glTranslatef(tr007X+0.37f,0.0f,0.0f);
    glScalef(0.4f,0.4f,1.0f);
    glRotatef(-10.0f, 0.0f, 0.0f, 1.0f);
    displayEllipse();

    //display 7
    glLoadIdentity();
    glTranslatef(tr007X+0.55f,-0.02f,0.0f);
    glScalef(0.4f,0.4f,1.0f);
    displaySeven();
}

void displayBdayCake()
{
    glLoadIdentity();   
    glTranslatef(0.0f,-0.5f,0.0f);
    glScalef(0.5f,0.5f,1.0f);
    displayCake();
}

void displayBalloons()
{
    //from left side
    //1st balloon
    glLoadIdentity();
    glTranslatef(-0.8f,balloonY,0.0f);
    glScalef(0.5f,0.5f,1.0f);
    displayBalloon(0.02f, 0.5f, 0.96f);

    //2nd balloon
    glLoadIdentity();
    glTranslatef(-0.4f,balloonY,0.0f);
    glScalef(0.5f,0.5f,1.0f);
    displayBalloon(1.0f,0.0f,0.0f);

    //3rd balloon
    glLoadIdentity();
    glTranslatef(0.4f,balloonY,0.0f);
    glScalef(0.5f,0.5f,1.0f);
    displayBalloon(1.0f,0.0f,0.0f);

    //4th balloon
    glLoadIdentity();
    glTranslatef(0.8f,balloonY,0.0f);
    glScalef(0.5f,0.5f,1.0f);
    displayBalloon(0.02f, 0.5f, 0.96f);
}

void myUpdate()
{
    switch(screen)
    {
        case 1:
        {
            //Bullet motion
            if(bIsCircleRightMotion==false && trBulletX <= 1.5f)
            {
                trBulletX = trBulletX + 0.0005f;
            }
            else
            {
                bIsCircleRightMotion = true;
                if(bIsCircleRightMotion==true && trBulletX >=0.0f)
                {
                    trBulletX = trBulletX - 0.0005f;
                }
                else
                {
                    bIsBulletAnimFinished = true;
                    mw = 0.0f;
                }
            }

            //disapper gun
            if(bIsCircleRightMotion == true && gColor<=1.0f)
            {
                gColor = gColor - 0.001f;
            }

            //following circle appearence animation
            if(trBulletX>=0.0f)
            {
                if(bIsFollowingCircleDisappear_1==false && fw1<=1.0f)
                {
                    fw1 = fw1 + 0.001f;
                }
                else
                {
                    bIsFollowingCircleDisappear_1 = true;
                    if(bIsFollowingCircleDisappear_1==true && fw1>=0.0f && trBulletX>=0.0f)
                    {
                        fw1 = fw1 - 0.001f;
                    }
                }
            }

            if(trBulletX>=0.5f)
            {
                if(bIsFollowingCircleDisappear_2==false && fw2<=1.0f)
                {
                    fw2 = fw2 + 0.001f;
                }
                else
                {
                    bIsFollowingCircleDisappear_2 = true;
                    if(bIsFollowingCircleDisappear_2==true && fw2>=0.0f && trBulletX>=0.5f)
                    {
                        fw2 = fw2 - 0.001f;
                    }
                }
            }



            //James Bond scale up
            if(bIsBulletAnimFinished == true && scJamesBondX<=0.5f && scJamesBondY<=0.5f)
            {
                scJamesBondX = scJamesBondX + 0.0001f;
                scJamesBondY = scJamesBondY + 0.0001f;
            }
            else
            {
                //todo
                if(scJamesBondX>=0.5F)
                {
                    bColor = 0.0f; //blackout
                    bIsJamesBondRendered = true;
                    screen = 2;
                }
            }
        }
        break;
        case 2:
        {
            if(trHappyX<=0.0f)
            {
                trHappyX = trHappyX + 0.0001f;
            }
            if(trBirthdayX>=0.0f)
            {
                trBirthdayX = trBirthdayX - 0.0001f;
            }
            if(trYashX>=0.0f)
            {
                trYashX = trYashX - 0.0001f;
            }
            if(tr007X>=0.0f)
            {
                tr007X = tr007X - 0.0001f;
            }

            if(trBirthdayX<=0.0f)
            {
                bIsLetterAnimationRendered = true;
                 
                if(balloonY < 2.0f)
                {
                    balloonY = balloonY + 0.0001f;   
                }
            }
        }
        break;
        default:
        break;
    }
}

void keyboard(unsigned char key, int x, int y)
{
    // code
    switch (key)
    {
    case 27:
        glutLeaveMainLoop();
        break;
    case 'F':
    case 'f':
        if (bIsFullScreen == false)
        {
            glutFullScreen();
            bIsFullScreen = true;
        }
        else
        {
            glutLeaveFullScreen();
            bIsFullScreen = false;
        }
        break;
    default:
        break;
    }
}

void mouse(int button, int state, int x, int y)
{
    // code
    switch (button)
    {
    case GLUT_RIGHT_BUTTON:
        glutLeaveMainLoop();
        break;
    default:
        break;
    }
}

void uninitialize(void)
{
    // code
    PlaySound(NULL, 0, 0);
}
