#include <gl\glut.h>

GLenum src = GL_SRC_ALPHA, dest = GL_ONE_MINUS_SRC_ALPHA;

void display();

int main()
{
	glutCreateWindow("blending");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

void display()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glEnable(GL_BLEND);
	glBlendFunc(src, dest);

	glColor3f(0.0, 0.0, 1.0);
	glRectf(-0.5, 0.5, 0.5, 0.0);
	
	glColor4f(0.0, 1.0, 0.0, 0.5);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}