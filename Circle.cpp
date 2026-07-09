#include"Circle.h"

#define M_PI 3.14

void displayCircle(float w)
{
	//circle 2

	glBegin(GL_POLYGON);
	{
		for (int i = 0; i < 360; i++)
		{
			float ang = (float)(i * 3.142 / 180);
			float x = 0.5f * sinf(ang);
			float y = 0.5f * cosf(ang);

			glColor3f(w,w,w);

			glVertex3f(x, y, 0.0f);

			i = i + 0;
		}
	}
	glEnd();
}



