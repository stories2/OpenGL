#include <gl\glut.h>

void display();

float display_data[] = {
	-0.25,0.5,0.0,
	-0.5,0.25,0.0,
	-0.5,-0.25,0.0,
	-0.25,-0.5,0.0,
	0.25,-0.5,0.0,
	0.5,-0.25,0.0,
	0.5,0.25,0.0,
	0.25,0.5,0.0
};

int main()
{

	glutCreateWindow("colorful");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
	int i,t=0;
	for (i = 0; i <24; i += 3)
	{
		t += 1;
		glVertex3f(display_data[i], display_data[i + 1], display_data[i + 2]);
		glColor3f((255.0 / t) / 255, (255.0 / t*2) / 255, (255.0 / t*3) / 255);
	}
	glEnd();
	glFlush();
}