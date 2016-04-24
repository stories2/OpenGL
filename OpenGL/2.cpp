#include <gl\glut.h>

void display();
void init();

int main()
{
	glutCreateWindow("background color change");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void display()
{
	init();
	
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);

	glEnd();
	glFlush();
}

void init()
{
	glClearColor(0.0, 1.0, 1.0, 1.0);//R,G,B,A
	glClear(GL_COLOR_BUFFER_BIT);//색깔 초기화
}