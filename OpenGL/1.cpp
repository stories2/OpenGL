#include <gl/glut.h>


void display();

int main()
{
	glutCreateWindow("GL TEST");
	glutDisplayFunc(display);//�ݹ�
	glutMainLoop();//���� �ݺ�

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);//���� �ʱ�ȭ
	glBegin(GL_POLYGON);

	glVertex3f(0.0, 0.5, 0.0);//��� ���
	glVertex3f(-0.5,-0.5, 0.0);//���� �ϴ�
	glVertex3f(0.5, -0.5, 0.0);//���� �ϴ�

	glEnd();
	glFlush();
}