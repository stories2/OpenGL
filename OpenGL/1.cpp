#include <gl/glut.h>


void display();

int main()
{
	glutCreateWindow("GL TEST");
	glutDisplayFunc(display);//콜백
	glutMainLoop();//무한 반복

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);//색깔 초기화
	glBegin(GL_POLYGON);

	glVertex3f(0.0, 0.5, 0.0);//상단 가운데
	glVertex3f(-0.5,-0.5, 0.0);//우측 하단
	glVertex3f(0.5, -0.5, 0.0);//좌측 하단

	glEnd();
	glFlush();
}