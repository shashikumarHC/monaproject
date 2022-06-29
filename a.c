
 #include <GL/glut.h>
#include <stdio.h>
#include<math.h>
int b=20,c=600,d=700,f=650,g=1300,h=700;
void myInit()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 1800, 0, 800);
}

void display(){
void tri(int v,int w,int x,int y,int z) //tree
    {
        glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.6,0.0);
        glVertex2f(v,w);
        glVertex2f(x,y);
        glVertex2f(z,w);
        glEnd();
    }
glBegin(GL_POLYGON); //snow
glColor3f(1.0,1.0,1.0);
glVertex2i(0,0);
glVertex2i(0,100);
glVertex2i(1800,100);
glVertex2i(1800,0);
glEnd();
glBegin(GL_POLYGON); //moon
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
           float  a=i*3.142/180;
            glVertex2f(1700+75*cos(a),700+75*sin(a));
        }
glEnd();

void snowman(int b,int c,int d)
{
    float a;
    glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+d*cos(a),c+d*sin(a));
        }
glEnd();
}
void snowmaneye(int b,int c,int d)
{
    float a;
    glBegin(GL_POLYGON);
        glColor3f(0,0,0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+d*cos(a),c+d*sin(a));
        }
glEnd();
}
void snowmaneyewhite(int b,int c,int d)
{
    float a;
    glBegin(GL_POLYGON);
        glColor3f(1,1,1);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+d*cos(a),c+d*sin(a));
        }
glEnd();
}
snowman(300,150,100); //snowman 1
snowman(300,300,75);
snowman(1500,150,100); //snowman 2
snowman(1500,300,75);
glBegin(GL_TRIANGLES); //hat
glColor3f(1,0,0);
glVertex2i(225,350);//first hat
glVertex2i(300,425);
glVertex2i(375,350);
glVertex2i(1425,350);// second hat
glVertex2i(1500,425);
glVertex2i(1575,350);
glEnd();
snowmaneye(250,310,15);//1st snow man eye
snowmaneye(350,310,15);
snowmaneyewhite(250,310,10);
snowmaneyewhite(350,310,10);
snowmaneye(1450,310,15);//1st snow man eye
snowmaneye(1550,310,15);
snowmaneyewhite(1450,310,10);
snowmaneyewhite(1550,310,10);
snowmaneyewhite(300,425,15); //snowman1 hat tip
snowmaneyewhite(1500,425,15); //snowman2 hat tip
snowmaneye(300,200,10); // design for snow man 1
snowmaneye(300,150,10);
snowmaneye(300,100,10);
snowmaneye(1500,200,10); // design for snow man 2
snowmaneye(1500,150,10);
snowmaneye(1500,100,10);
glBegin(GL_TRIANGLES); //snowman 1 nose
glColor3f(0.70,0.39,0.11);
glVertex2i(300,290);
glVertex2i(300,280);
glVertex2i(350,270);
glEnd();
glBegin(GL_TRIANGLES); //snowman 2 nose
glColor3f(0.70,0.39,0.11);
glVertex2i(1500,290);
glVertex2i(1500,280);
glVertex2i(1550,270);
glEnd();

glBegin(GL_LINE_STRIP); //snowman 1 smile
for (GLint i = 220; i < 320; i++)
{
float f=i*3.142/180;
glColor3f(0.70,0.39,0.11);
glVertex2f(300+40* cos(f),290+40* sin(f));
}
glEnd();

glBegin(GL_LINE_STRIP); //snowman 2 smile
for (GLint i = 220; i < 320; i++)
{
float f=i*3.142/180;
glColor3f(0.70,0.39,0.11);
glVertex2f(1500+40* cos(f),290+40* sin(f));
}
glEnd();

glBegin(GL_LINES); //snowman hand
glColor3f(1,1,1);
glVertex2i(270,150);//snowman 1
glVertex2i(150,300);
glVertex2i(470,150);
glVertex2i(250,300);
glVertex2i(1470,150);//snowman 2
glVertex2i(1370,300);
glVertex2i(1670,150);
glVertex2i(1450,300);
glEnd();
glBegin(GL_POLYGON); //stem
glColor3f(0.70,0.39,0.11);
glVertex2i(800,50);
glVertex2i(850,200);
glVertex2i(950,200);
glVertex2i(1000,50);
glEnd();

tri(725,200,900,400,1075);
tri(750,300,900,500,1050);
tri(775,400,900,600,1025);
glBegin(GL_TRIANGLES); //for star
glColor3f(1.0,1.0,0.0);
glVertex2i(825,525);//first tri
glVertex2i(875,650);
glVertex2i(975,650);
glVertex2i(825,650);// second tri
glVertex2i(925,650);
glVertex2i(975,525);
glVertex2i(875,650);// third tri
glVertex2i(900,750);
glVertex2i(925,650);
glEnd();
float a;
glBegin(GL_POLYGON); //light 1
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(725+25*cos(a),200+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 2
        glColor3f(1.0,1.0,0.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(1075+25*cos(a),200+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 3
        glColor3f(0.5,1.0,0.5);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(750+25*cos(a),300+25*sin(a));
        }
glEnd();

glBegin(GL_POLYGON); //light 4
        glColor3f(0.5,0.5,0.5);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(1050+25*cos(a),300+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 5
        glColor3f(0.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(775+25*cos(a),400+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 6
        glColor3f(1.0,0.0,0.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(1025+25*cos(a),400+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 7
        glColor3f(0.5,1.0,0.8);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(900+25*cos(a),400+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 8
        glColor3f(0.0,0.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(900+25*cos(a),500+25*sin(a));
        }
glEnd();
glBegin(GL_POLYGON); //light 9
        glColor3f(0.25,0.19,0.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(900+25*cos(a),300+25*sin(a));
        }
glEnd();

glFlush();
}



int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1800, 800);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Small scale solar power plant");
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
