#include <gl\glut.h>

void display();
float get_position(float);

int main()
{
	glutCreateWindow("line");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	int i;
	for (i = 0; i <= GLUT_WINDOW_WIDTH*2; i += 8)
	{
		glBegin(GL_LINES);
		glVertex2f(-1.0, get_position(GLUT_WINDOW_WIDTH-i));
		glVertex2f(get_position(i - GLUT_WINDOW_WIDTH), -1.0);
		glEnd();
	}
	glFlush();
}

float get_position(float target)
{
	return target / GLUT_WINDOW_WIDTH;
}