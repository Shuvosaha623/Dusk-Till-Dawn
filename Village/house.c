#include <windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i;


GLfloat cx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0,ssc=-55,sscs=0,w=1,e=50,r=50,aa=0.0,b=0.749,cc=1.0,s1=0.0, t1=0.749, r1=1.0,
s2=0.0, t2=0.749, r2=1.0,s3=0.0,t3=0.749,r3=1.0,s4=0.0,t4=0.749,r4=1.0,s5=0.0,t5=0.749,r5=1.0,s6=0.0,t6=0.749,r6=1.0,l=0.0,k=0.9,j=0.0;
char text[] = "SCHOOL";



void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}

void bus()
{

     glPushMatrix();
        glColor3f(0, 0, 1);
        glBegin(GL_POLYGON);
        glVertex2f(10.0,-9.5);
        glVertex2f(14.0,-2.0);
        glVertex2f(22.0,-2.0);
        glVertex2f(25.5,-5.25);
        glVertex2f(29.0,-6.5);
        glVertex2f(29.0,-8.5);
        glVertex2f(10.0,-8.5);
        glEnd();
        glPopMatrix();
        //Window
        glPushMatrix();
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(14.0,-5.5);
        glVertex2f(15.0,-4.5);
        glVertex2f(18.0,-2.5);
        glVertex2f(18.0,-5.5);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(18.5,-2.5);
        glVertex2f(18.5,-5.5);
        glVertex2f(24.5,-5.5);
        glVertex2f(21.5,-2.5);
        glEnd();
        glPopMatrix();
        //Light
        glPushMatrix();
        glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(29.0,-7.2);
        glVertex2f(29.5,-7.2);
        glVertex2f(29.5,-8.0);
        glVertex2f(29.0,-8.0);
        glEnd();
        glPopMatrix();
        //Handle
        glPushMatrix();
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(19.0,-6.7);
        glVertex2f(20.8,-6.7);
        glVertex2f(20.8,-6.11);
        glVertex2f(19.0,-6.11);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3f(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(14.0,-6.7);
        glVertex2f(15.8,-6.7);
        glVertex2f(15.8,-6.11);
        glVertex2f(14.0,-6.11);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(15,-10,0);
        circle(2);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(23,-10,0);
        circle(2);
        glPopMatrix();

}

void cloudB()

{
    //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();

    //glColor3f (1, 1 ,1);
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

}

void a()                                        //mini Cloud

{
    //left

    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();

    //right

    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();

    //top left

    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();

    //top right

    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();

    //middle

    glPushMatrix();
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

}


void c()                                        //One Single Cloud
{
    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(35,10,0);
    a();
    glPopMatrix();


    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(28,16,0);
    a();
    glPopMatrix();

    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(20,10,0);
    a();
    glPopMatrix();
}

void cloud()                                     // Three Cloud
{
    glPushMatrix();
    glTranslatef(-15.0,30.0,0.0);
    glScalef(0.7,0.7,0.0);
    c();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(20.0,25.0,0.0);
    glScalef(0.7,0.7,0.0);
    c();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-60.0,25.0,0.0);
    glScalef(0.7,0.7,0.0);
    c();
    glPopMatrix();
}





void rect()
{
    glRectf(-16.0, -16.0, 16.0, 16.0);
}
GLfloat ss=0.0;
void day()
{
    glBegin(GL_POLYGON);                        // blue sky
    glColor3f(sr,sg,sb);
    glVertex3f(-50,-3,0.0);
    glVertex3f(-50,50,0.0);
    glVertex3f(80,50,0.0);
    glVertex3f(80,-3,0.0);
    glEnd();

    glColor3f(aa, b, cc);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(7.5, 15.3);
		glVertex2f(7.0, 14.5);
		glVertex2f(8.0, 14.5);
		glVertex2f(7.5, 14.2);
		glVertex2f(7.0, 15.0);
		glVertex2f(8.0, 15.0);
		glEnd();

     glColor3f(s1, t1, r1);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(-15.5, 35.3);
		glVertex2f(-15.0, 34.5);
		glVertex2f(-16.0, 34.5);
		glVertex2f(-15.5, 34.2);
		glVertex2f(-15.0, 35.0);
		glVertex2f(-16.0, 35.0);
		glEnd();

     glColor3f(s2, t2, r2);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(1.5, 45.3);
		glVertex2f(1.0, 44.5);
		glVertex2f(2.0, 44.5);
		glVertex2f(1.5, 44.2);
		glVertex2f(1.0, 45.0);
		glVertex2f(2.0, 45.0);
		glEnd();

       glColor3f(s3, t3, r3);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(-35.5, 25.3);
		glVertex2f(-35.0, 24.5);
		glVertex2f(-36.0, 24.5);
		glVertex2f(-35.5, 24.2);
		glVertex2f(-35.0, 25.0);
		glVertex2f(-36.0, 25.0);
		glEnd();

    glColor3f(s4, t4, r4);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(-45.5, 45.3);
		glVertex2f(-45.0, 44.5);
		glVertex2f(-46.0, 44.5);
		glVertex2f(-45.5, 44.2);
		glVertex2f(-45.0, 45.0);
		glVertex2f(-46.0, 45.0);
		glEnd();

    glColor3f(s5, t5, r5);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(45.5, 45.3);
		glVertex2f(45.0, 44.5);
		glVertex2f(46.0, 44.5);
		glVertex2f(45.5, 44.2);
		glVertex2f(45.0, 45.0);
		glVertex2f(46.0, 45.0);
		glEnd();

	glColor3f(s6, t6, r6);             //star
		glBegin(GL_TRIANGLES);
		glVertex2f(35.5, 25.3);
		glVertex2f(35.0, 24.5);
		glVertex2f(36.0, 24.5);
		glVertex2f(35.5, 24.2);
		glVertex2f(35.0, 25.0);
		glVertex2f(36.0, 25.0);
		glEnd();



    glPushMatrix();                             //sun
    glTranslatef(ss,0.0,0.0);
    glTranslatef(-20.0,40.0,0.0);
    glScalef(1.0,1.5,0.0);
    glColor3f(1.0,1.0,0.0);
    circle(3);
    glPopMatrix();
}
void ground()
{

    glColor3f(0.8,0.498039,0.196078);
    glPushMatrix();
    glTranslatef(-70,-42,0);
    glBegin(GL_POLYGON);

    glVertex3f (-10, 0, 0.0);
    glVertex3f (-10,10, 0.0);
    glVertex3f (600,10, 0.0);
    glVertex3f (600,0, 0.0);

    glEnd();
}
void night ()                                    //black sky
{
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-50,-3,0.0);
    glVertex3f(-50,50,0.0);
    glVertex3f(80,50,0.0);
    glVertex3f(80,-3,0.0);

    glEnd();
}
void moon()                                     //moon
{
    glPushMatrix();
    glTranslatef(mn,0.0,0.0);
    glTranslatef(20.0,35.0,0.0);
    glScalef(1.0,1.5,0.0);
    glColor3f(1.0,1.0,1.0);
    circle(3.5);
    glPopMatrix();

    glutPostRedisplay();
}

void triangle(void)
{
    glColor3f (0.137255,0.556863,0.137255);
    glBegin(GL_POLYGON);

    glVertex3f (0, 0, 0.0);
    glVertex3f (9, 13, 0.0);
    glVertex3f (18, 0, 0.0);

    glEnd();
}

void grass()
{

    glPushMatrix();
    glColor3f (0.8,0.196078,0.6);
    glTranslatef(38,16,0);
    glScalef(.1,.1,0);
    //cloud();
    glPopMatrix();

}
void tree2()
{
    glPushMatrix();
    glTranslatef(3,8,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.5,14,0);
    glScalef(.9,.9,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.5,20,0);
    glScalef(.8,.8,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7,26,0);
    glScalef(.5,.5,0);
    triangle();
    glPopMatrix();

    //gora

    glPushMatrix();
    glBegin(GL_POLYGON);

    glColor3f(0.502,0.000,0.000);
    glVertex3f (10, 4, 0.0);
    glVertex3f (10, 8, 0.0);
    glVertex3f (14, 8, 0.0);
    glVertex3f (14, 4, 0.0);

    glEnd();
    glPopMatrix();

}
void tree()                             //green leaves
{
    glPushMatrix();
    glTranslatef(35,10,0);
    a();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(28,16,0);
    a();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(20,10,0);
    a();
    glPopMatrix();
}
void treebody()                         //tree body
{
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(0,0,0);
    glVertex3f(2.5,2,0);
    glVertex3f(4.0,-2,0);
    glVertex3f(1,-4,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,2,0);
    glVertex3f(9,2,0);
    glVertex3f(8,-2,0);
    glVertex3f(4,-2,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1,-4,0);
    glVertex3f(4,-2,0);
    glVertex3f(8,-2,0);
    glVertex3f(7,-7,0);
    glVertex3f(1.5,-7,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-7,0);
    glVertex3f(7,-7,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(2,-10,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(2,-10,0);
    glVertex3f(6.5,-10,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(1.5,-13,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(1.5,-13,0);
    glVertex3f(6.8,-13,0);
    glVertex3f(7,-18,0);
    glVertex3f(.5,-18,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(7,-18,0);
    glVertex3f(3,-27,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(.5,-18,0);
    glVertex3f(2.5,-23,0);
    glVertex3f(-1,-25,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f (0.502, 0.000, 0.000);
    glVertex3f(7,-18,0);
    glVertex3f(8,-28,0);
    glVertex3f(4,-22,0);
    glEnd();

}
//////////////////////
///***HOME Start***////
//////////////////////
void home1()
{
    //1st Home
    //1
    glColor3ub(128,0,64);
    glBegin(GL_POLYGON);
    glVertex2d(3,14);
    glVertex2d(3,11);
    glVertex2d(10,8);
    glVertex2d(10,12);
    glVertex2d(6,18);
    glEnd();
    //2
    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);
    glVertex2d(10,8);
    glVertex2d(10,12);
    glVertex2d(20,12);
    glVertex2d(20,8);
    glEnd();
    //3
    glColor3ub(249,100,0);
    glBegin(GL_POLYGON);
    glVertex2d(10,12);
    glVertex2d(6,18);
    glVertex2d(17,18);
    glVertex2d(21,12);
    glEnd();
    //4
    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);
    glVertex2d(5,11);
    glVertex2d(5,12);
    glVertex2d(8,11);
    glVertex2d(8,10);
    glEnd();
    //5

    glColor3ub(w,e,r);
    glBegin(GL_POLYGON);
    glVertex2d(14,8);
    glVertex2d(14,10);
    glVertex2d(17,10);
    glVertex2d(17,8);
    glEnd();


}
void Sprint( float x, float y, char *st)
{
    int l,i;


    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.0,0.0,0.7);
    glRasterPos2f(-28.1,12); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
}
void house()
{
    glColor3ub(128,128,0);
    glBegin(GL_POLYGON);
    glVertex2d(33,23);
    glVertex2d(44,23);
    glVertex2d(44,30);
    glVertex2d(33,30);
    glEnd();

    glColor3ub(128,64,0);
    glBegin(GL_POLYGON);
    glVertex2d(31,30);
    glVertex2d(46,30);
    glVertex2d(38.5,38);
    glEnd();



     glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(34.0,35.0);
        glVertex2f(44.0,35.0);
        glVertex2f(44.0,30.0);
        glVertex2f(34.0,30.0);
        glEnd();
        glPopMatrix();

        Sprint(.7,0,text);

}
///HOME END///
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    day();
    glPopMatrix();

    ///ground///
    glPushMatrix();
    glTranslatef(0.0,-35.0,0.0);
    glScalef(3.5,3.0,0.0);
    glColor3f(l, k, j);
    rect();
    glPopMatrix();



    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(cx,17.0,0.0);
    cloudB();
    glPopMatrix();

    glPushMatrix();
    glColor3f (1,1,1);
    glTranslatef(cx,20.0,0.0);
    cloudB();
    glPopMatrix();



//tree1
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(-49.0,9.5,0.0);
    glScalef(0.4,0.5,0.0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-40.4,15.4,0.0);
    glScalef(0.4,0.5,0.0);
    treebody();
    glPopMatrix();
///

///
    glPushMatrix();
    moon();
    glPopMatrix();

///
    glPushMatrix();
    glTranslatef(cx,0.0,0.0);
    glScalef(.8,1,0);
    cloud();
    glPopMatrix();
    ///***///
///home 2///
    glPushMatrix();
    glTranslatef(-65.0,-20.0,0.0);
    house();
    glPopMatrix();
///***///
///home 1///
    glPushMatrix();
    glTranslatef(-45.0,-10.0,0.0);
    home1();
    glPopMatrix();
///home 2///
    glPushMatrix();
    glTranslatef(20.0,-15.0,0.0);
    home1();
    glPopMatrix();
///***///
///tree typeA 1///
    glPushMatrix();
    glTranslatef(-5.0,-5.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();
    ///***///
///tree typeB 1///
    glPushMatrix();
    glTranslatef(35.0,-5.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();
    ///***///
///tree typeC 1///
    glPushMatrix();
    glTranslatef(30.0,-15.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();
///***///



///tree2///
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(-44.0,-1,0.0);
    glScalef(0.4,0.5,0.0);
    tree();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-35.0,5.0,0.0);
    glScalef(0.4,0.5,0.0);
    treebody();
    glPopMatrix();
///***///
///********home 4********///
    glPushMatrix();
    glTranslatef(-10.0,-10.0,0.0);
    home1();
    glPopMatrix();
    glPopMatrix();
///***///
///********road********///
    glPushMatrix();
    glTranslatef(-10.0,15.0,0.0);
    ground();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10.0,20.0,0.0);
    ground();
    glPopMatrix();
    glPopMatrix();
///************///
///BUS///
    glPushMatrix();
    glTranslatef(ssc, -10, 0);
    glScalef(.8, .8, 0);
    bus();
    glPopMatrix();
///***///

///BUS2///
    glPushMatrix();
    glTranslatef(ssc, -10, 0);
    glScalef(.8, .8, 0);
    bus();
    glPopMatrix();
    ///***///

    ///tree3///
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(22.0,-32.5,0.0);
    glScalef(0.4,0.5,0.0);
    tree();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(30.5,-26.5,0.0);
    glScalef(0.4,0.5,0.0);
    treebody();
    glPopMatrix();
    ///***///



    ///tree typeD 1///
    glPushMatrix();
    glTranslatef(-10.0,-50.0,0.0);
    glScalef(.5,1,0);
    tree2();
    glPopMatrix();
    ///***///
    glFlush();
}
void init(void)
{
    glClearColor (0, 0.749, 1, 0);
    glOrtho(-50.0,50.0, -50.0, 50.0, -1.0, 1.0);
}
void spinDisplay()
{
    cx = cx + .01;
    if(cx>70)
        cx = -70;

    glutPostRedisplay();
}

void updatebus (int v)
    {


        if(sscs>1 || sscs<0)
        {
            sscs = 0.0;
        }

        ssc+=sscs;
            if(ssc>=45.0)
            {
                ssc=-69;
            }


        glutPostRedisplay();
        glutTimerFunc(15,updatebus,0);

    }
void mouse(int key, int state, int x, int y)
{
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(spinDisplay);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }
}
void keyDisplayAnimationDay()
{
    str=500.0;
    sr=0.0;
    sg=0.749;
    sb=1.0;

    ss = 0.0;

    mn = 500.0;
    w=1;
    e=50;
    r=50;

    aa=0.0;b=0.749;cc=1.0;
    s1=0.0;t1=0.749;r1=1.0;
    s2=0.0;t2=0.749;r2=1.0;
    s3=0.0;t3=0.749;r3=1.0;
    s4=0.0;t4=0.749;r4=1.0;
    s5=0.0;t5=0.749;r5=1.0;
    s6=0.0;t6=0.749;r6=1.0;

    l=0.0,k=0.9,j=0.0;
    glutPostRedisplay();
}
void keyDisplayAnimationNight()
{
    str = 0.0;
    sr=0.0;
    sg=0.0;
    sb=0.0;

    ss = 500.0;
    mn = 0.0;

    w=255;
    e=255;
    r=255;

    aa=1.0;b=1.0;cc=1.0;
    s1=1.0;t1=1.0;r1=1.0;
    s2=1.0;t2=1.0;r2=1.0;
    s3=1.0;t3=1.0;r3=1.0;
    s4=1.0;t4=1.0;r4=1.0;
    s5=1.0;t5=1.0;r5=1.0;
    s6=1.0;t6=1.0;r6=1.0;

    l=0.0,k=0.5,j=0.0;


    glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'd':
        keyDisplayAnimationDay();
        break;

    case 'n':
        //night();
        keyDisplayAnimationNight();
        break;

    default:
        break;
    }
}


void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_RIGHT:
          sscs+=0.05f;
          updatebus(0);
          break;

      case GLUT_KEY_LEFT:
          sscs-=0.05;
          break;


    }
}


int main()
{
    printf(">><< Press N for nightmood & Press D for day mood >><<\n\n");
    printf("Click Mouse Left/Right Button for cloud movement\n\n");
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1350, 690);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Dusk till dawn");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);
    glutMainLoop();
    return 0;
}
