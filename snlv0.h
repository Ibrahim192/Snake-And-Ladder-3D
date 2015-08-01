#ifndef snvl0
#define snvl0
#include<GL/glut.h>
#define maxx 10
#define maxy 10
#define dx 70
#define dy 70
#define x0 350
#define y2 30
#define speed 2
GLfloat x[maxx+1]={0},y[maxy+1]={0};
extern void rect();
extern void Cylinder_draw();
extern void cyl();


class pawns
{
	private:
		float p1,p2,p3,p4,q1,q2,q3,q4,oy,m,c,col1;
		int add,up,tmp,t,flag;
	public:
		pawns(GLfloat,GLfloat,GLfloat,GLint tmp);
		void distance(int);
		void updatey();
		void disp();
		void init(int r);
		void check();
		int check100();
		void tryy(int i);
		void try2(int i);
		
		
};
#endif
