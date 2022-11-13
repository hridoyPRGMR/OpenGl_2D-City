#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
# define PI 3.14159265358979323846

/*press 's' to start animation*/

void init()
{
    glClearColor(0.4,0.2,0,0.5);
    glMatrixMode(GL_PROJECTION);
}


void circle(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void sky()
{

    glBegin(GL_QUADS);
    glColor3f(0.76, 0.98, 1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glColor3f(0.37, 0.95, 1);
    glVertex2f(1,1);
    glVertex2f(-1,1);

    glEnd();
}

void sun()
{

    glColor3f(0.98, 0.83, 0);
    circle(2,2,3);

}

void ground()
{

    glBegin(GL_QUADS);
    glColor3f(0.43, 0.98, 0.47);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glColor3f(0.71, 1, 0.73);
    glVertex2f(1,1);
    glVertex2f(-1,1);

    glEnd();
}


void cloud()
{

    glColor3f(1,1,1);
    circle(.415,.58,.05);
    circle(.48,.6,.08);
    circle(.57,.582,.06);
    circle(.63,.58,.04);

    //CLOUD LEFT

    circle(-.325,.585,.04);
    circle(-.4,.6,.07);
    circle(-.49,.592,.05);
    circle(-.54,.58,.03);
}

void quad()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.98, 0.59, 0.44);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}


void quad2()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.98, 0.98, 0.98);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}

void buildingQuad()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.18, 0.54, 0.38);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}


void buildingQuad2()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.4, 0.08, 0.42);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}

void road()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.1,0.1,0.1);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(1.4,4);
    glVertex2f(-1.4,4);

    glEnd();
    glPopMatrix();

    glEnd();
    glPopMatrix();

}


void leftBuilding()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.8, 0.8, 0.8);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}


void floor()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.63, 1, 0);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}

void leftBuilding2()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.98, 0.59, 0.44);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

}

void rightBuilding()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();


}

void footpath()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.5);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();


}

void backGroudBuilding()
{


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.75, 0.75, 0.75);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();


}

void line()
{

    glPushMatrix();
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex2f(2, 3);
    glVertex2f(2,-4);
    glEnd();
    glPopMatrix();

}

void line2()
{

    glPushMatrix();
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex2f(-2, 0.5);
    glVertex2f(-1.78,0.5);
    glEnd();
    glPopMatrix();
}

void window()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.6, 0.6, 0.6);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();

    //windowLine
    glPushMatrix();
    glTranslatef(-4.5,2.6,0);
    glScalef(2.2,0.405,0);
    line();
    glPopMatrix();

}

void window4X()
{

    glPushMatrix();
    glTranslatef(-2.33,3.2,0);
    glScalef(0.13,0.2,0);
    window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.33,1.8,0);
    glScalef(0.13,0.2,0);
    window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.33,0.4,0);
    glScalef(0.13,0.2,0);
    window();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-2.33,-1.0,0);
    glScalef(0.13,0.2,0);
    window();
    glPopMatrix();

}

void window2()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.5, 0.5, 0.6);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(2,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-3.7,2.7,0);
    glScalef(2.2,0.43,0);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5.1,2.7,0);
    glScalef(2.2,0.43,0);
    line();
    glPopMatrix();



}

//window6X

void window6X()
{

    glPushMatrix();
    glTranslatef(-3.6,6.7,0);
    glScalef(0.27,0.27,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.6,5.3,0);
    glScalef(0.27,0.27,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.6,3.9,0);
    glScalef(0.27,0.27,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.6,2.5,0);
    glScalef(0.27,0.27,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.6,1.1,0);
    glScalef(0.27,0.27,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.6,-0.3,0);
    glScalef(0.27,0.27,0);
    window2();
    glPopMatrix();

}

void longWindow()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.46, 0.44, 0.44);

    glVertex2f(-2,1);
    glVertex2f(-1.78,1);
    glVertex2f(-1.78,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.003,2,0);
    glScalef(1,1,0);
    line2();
    glPopMatrix();

}

void longWindow2()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.8, 0.8, 0.8);

    glVertex2f(-2,1);
    glVertex2f(-1.78,1);
    glVertex2f(-1.78,4);
    glVertex2f(-2,4);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.003,2,0);
    glScalef(1,1,0);
    line2();
    glPopMatrix();

}


void longWindow4X()
{

    glPushMatrix();
    glTranslatef(-3.1,3.7,0);
    glScalef(0.9,1,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.7,2.2,0);
    glScalef(0.9,1,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.1,-0.7,0);
    glScalef(0.9,1,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.7,-2.2,0);
    glScalef(0.9,1,0);
    longWindow();
    glPopMatrix();


}

void longWindow4X2()
{

    glPushMatrix();
    glTranslatef(-3.1,3.7,0);
    glScalef(0.9,1,0);
    longWindow2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.7,2.2,0);
    glScalef(0.9,1,0);
    longWindow2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.1,-0.7,0);
    glScalef(0.9,1,0);
    longWindow2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.7,-2.2,0);
    glScalef(0.9,1,0);
    longWindow2();
    glPopMatrix();


}

void longWindow8X()
{


    glPushMatrix();
    glTranslatef(6.95,-0.5,0);
    glScalef(0.8,0.8,0);
    longWindow4X2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.85,-0.5,0);
    glScalef(0.8,0.8,0);
    longWindow4X2();
    glPopMatrix();

}

//mid Building Window
void midBuildingWindow()
{


    glPushMatrix();
    glTranslatef(-1.3,1.2,0);
    glScalef(0.15,0.15,0);
    window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.01,1,0);
    glScalef(0.23,0.23,0);
    window2();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.3,1.2,0);
    glScalef(0.15,0.15,0);
    window();
    glPopMatrix();

}


void fontPiller()
{

    glPushMatrix();
    glTranslatef(1,-3.1,0);
    glScalef(0.06,1.3,0);
    backGroudBuilding();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-1,-3.1,0);
    glScalef(0.06,1.3,0);
    backGroudBuilding();
    glPopMatrix();

}
//for floor
void bekaQuads()
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f (0.96, 0.86, 0.7);

    glVertex2f(-2,1);
    glVertex2f(2,1);
    glVertex2f(1.7,4);
    glVertex2f(-1.7,4);

    glEnd();
    glPopMatrix();


}

void stairs()
{

    glPushMatrix();
    glTranslatef(0,-2.3,0);
    glScalef(1,0.4,0);
    bekaQuads();
    glPopMatrix();

}



void university()
{


    //backGroudBuilding
    glPushMatrix();
    glTranslatef(0.3,-1,0);
    glScalef(2.2,2.3,0);
    backGroudBuilding();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.067,7.7,0);
    glScalef(1.4,0.13,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.067,6.4,0);
    glScalef(1.4,0.15,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.067,5.1,0);
    glScalef(1.4,0.15,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.067,3.8,0);
    glScalef(1.4,0.15,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.067,0.45,0);
    glScalef(1.4,0.15,0);
    quad2();
    glPopMatrix();

    //long piller
    glPushMatrix();
    glTranslatef(-2,2,0);
    glScalef(0.07,1.5,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1,2,0);
    glScalef(0.07,1.5,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,2,0);
    glScalef(0.07,1.5,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1,2,0);
    glScalef(0.07,1.5,0);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2,2,0);
    glScalef(0.07,1.5,0);
    quad2();
    glPopMatrix();

    //floor
    glPushMatrix();
    glTranslatef(0,-2,0);
    glScalef(1,0.65,0);
    floor();
    glPopMatrix();

    //stair
    stairs();



    //font piller
    fontPiller();

    quad();




    //leftBuilding1
    glPushMatrix();
    glTranslatef(-2.3,-4.2,0);
    glScalef(0.2,2.2,0);
    leftBuilding();
    glPopMatrix();

    //line
    glPushMatrix();
    glTranslatef(-2.3,1.4,0);
    glScalef(0.2,0.85,0);
    line();
    glPopMatrix();


    //left building2
    glPushMatrix();
    glTranslatef(-3.9,-5.4,0);
    glScalef(0.6,3.4,0);
    leftBuilding2();
    glPopMatrix();



    //line
    glPushMatrix();
    glTranslatef(-3.1,1.7,0);
    glScalef(0.2,0.94,0);
    line();
    glPopMatrix();

    //right building



    glPushMatrix();
    glTranslatef(3.7,-4.7,0);
    glScalef(0.5,2.7,0);
    rightBuilding();
    glPopMatrix();

    //line
    glPushMatrix();
    glTranslatef(2.1,3.77,0);
    glScalef(0.3,1.45,0);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.3,-4.2,0);
    glScalef(0.2,2.2,0);
    leftBuilding();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.5,1.4,0);
    glScalef(0.2,0.85,0);
    line();
    glPopMatrix();

    //window4X
    window4X();

    glPushMatrix();
    glTranslatef(4.65,-0.01,0);
    glScalef(1.0,1.0,0);
    window4X();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.46,-0.6,0);
    glScalef(1.09,1.09,0);
    window6X();
    glPopMatrix();

    longWindow4X();
    //line1
    glPushMatrix();
    glTranslatef(-4.62,3.76,0);
    glScalef(0.2,1.45,0);
    line();
    glPopMatrix();

    //line2

    glPushMatrix();
    glTranslatef(9.2,5.7,0);
    glScalef(6.7,2,0);
    line2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.2,4.18,0);
    glScalef(6.7,2,0);
    line2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.2,2.65,0);
    glScalef(6.7,2,0);
    line2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.2,1.1,0);
    glScalef(6.7,2,0);
    line2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.2,-0.41,0);
    glScalef(6.7,2,0);
    line2();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(3.7,6.15,0);
    glScalef(0.4,0.4,0);
    window2();
    glPopMatrix();



    longWindow8X();

    //mid building window
    midBuildingWindow();


    glPushMatrix();
    glTranslatef(0,1,0);
    midBuildingWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,2,0);
    midBuildingWindow();
    glPopMatrix();

    //road


}

void roadSite()
{

    glPushMatrix();
    glTranslatef(0,-8,0);
    glScalef(9,0.9,1);
    road();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-7.1,0);
    glScalef(0.35,1.08,1);
    road();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-5.8,0);
    glScalef(9,0.02,1);
    quad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6.58,-4.6,0);
    glScalef(3,0.14,1);
    footpath();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6.58,-4.6,0);
    glScalef(3,0.14,1);
    footpath();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0,-7.7,0);
    glScalef(6,0.16,1);
    footpath();
    glPopMatrix();

}



void building()
{
    glPushMatrix();
    glTranslatef(-2.5,-0.5,0);
    glScalef(0.17,0.5,0);
    buildingQuad();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.88,0.47,0);
    glScalef(0.33,0.23,0);
    window4X();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.58,0.47,0);
    glScalef(0.33,0.23,0);
    window4X();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.5,-0.07,0);
    glScalef(0.05,0.07,0);
    rightBuilding();
    glPopMatrix();

}


void building2()
{

    glPushMatrix();
    glTranslatef(-2.5,-0.5,0);
    glScalef(0.17,0.5,0);
    buildingQuad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.88,0.47,0);
    glScalef(0.33,0.23,0);
    window4X();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.58,0.47,0);
    glScalef(0.33,0.23,0);
    window4X();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.5,-0.07,0);
    glScalef(0.05,0.07,0);
    rightBuilding();
    glPopMatrix();


}


void treebody()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0.0);
    glVertex2f(2.2,1);
    glVertex2f(2.7,1);
    glVertex2f(2,2.3);
    glVertex2f(2.4,2.3);
    glEnd();
    glPopMatrix();

}



void treeLeaf()
{

    glPushMatrix();
    glTranslatef(-1.5,-1.47,0);
    glScalef(0.4,0.61,0);
    treebody();
    glPopMatrix();

    //right big
    glColor3f(0.38, 0.74, 0.04);
    circle(-0.36,-0.02,.22);

    //right small
    glColor3f(0.38, 0.74, 0.04);
    circle(-0.4,-0.3f,.13);

    //left small
    glColor3f(0.38, 0.74, 0.04);
    circle(-0.895,-0.13,.15);

    //left big
    glColor3f(0.34, 0.62, 0.06);
    circle(-0.77,0.07,.2);

    //mid
    glColor3f(0.53, 0.74, 0.04);
    circle(-0.54,0.1,.22);



}




void tree()
{

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.38, 0.74, 0.04);
    glVertex2f(1,2.3);
    glVertex2f(4,2.3);
    glVertex2f(2.5,3.5);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.38, 0.74, 0.04);
    glVertex2f(1.3,2.8);
    glVertex2f(3.7,2.8);
    glVertex2f(2.5,4);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.38, 0.74, 0.04);
    glVertex2f(1.5,3.2);
    glVertex2f(3.5,3.2);
    glVertex2f(2.5,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.3,0.0);
    glVertex2f(2.2,1);
    glVertex2f(2.7,1);
    glVertex2f(2.7,2.3);
    glVertex2f(2.2,2.3);
    glEnd();
    glPopMatrix();

}





void chaka()
{

    glColor3f(1,1,1);
    circle(1,1,1);

    glPushMatrix();
    glTranslatef(1,1,0);
    glColor3f(0,0,0);
    glutWireTorus(0.1, 0.7, 15, 30);
    glPopMatrix();
}


void bus1()
{

    glPushMatrix();
    glTranslatef(0,-3,0);
    glScalef(0.7,0.6,0);
    buildingQuad2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1,-1.7,0);
    glScalef(0.3,0.2,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,-1.7,0);
    glScalef(0.35,0.2,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.1,-2.6,0);
    glScalef(0.08,0.35,0);
    window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.9,-2.73,0);
    glScalef(0.25,0.35,0);
    chaka();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6,-2.73,0);
    glScalef(0.25,0.35,0);
    chaka();
    glPopMatrix();

}

void bus2()
{

    glPushMatrix();
    glTranslatef(0,-3,0);
    glScalef(0.7,0.6,0);
    buildingQuad();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.65,-1.7,0);
    glScalef(0.27,0.18,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1,-1.7,0);
    glScalef(0.27,0.18,0);
    window2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.08,-2.6,0);
    glScalef(0.08,0.35,0);
    window();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1,-2.73,0);
    glScalef(0.25,0.35,0);
    chaka();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,-2.73,0);
    glScalef(0.25,0.35,0);
    chaka();
    glPopMatrix();


}

void thumba()
{

    glPushMatrix();
    glTranslatef(-9.5,-9,0);
    glScalef(0.5,1.5,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5.5,-9,0);
    glScalef(0.5,1.5,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.5,-9,0);
    glScalef(0.5,1.5,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.5,-9,0);
    glScalef(0.5,1.5,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6.5,-9,0);
    glScalef(0.5,1.5,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10.5,-9,0);
    glScalef(0.5,1.5,0);
    longWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-3.5,0);
    glScalef(20,0.01,0);
    footpath();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-3.8,0);
    glScalef(20,0.01,0);
    footpath();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2,-4.5,0);
    glScalef(5,5,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7,-5,0);
    glScalef(5,5,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(11,-6,0);
    glScalef(4,4,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9,-7,0);
    glScalef(5,5,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-9,-7,0);
    glScalef(4,4,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6,-7,0);
    glScalef(5,5,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4.5,-12,0);
    glScalef(1,1.3,0);
    tree();
    glPopMatrix();



}



//bus animation

GLfloat busP = 11.2f;
GLfloat busS = 0.02f;
void busUp(int value)
{
    if(busP <-15)
        busP = 15;
    busP -= busS;
    glutPostRedisplay();
    glutTimerFunc(5, busUp, 0);
}


GLfloat busP2 = -12.0f;
GLfloat busS2 = 0.06f;
void busUp2(int value)
{
    if(busP2 > 20)
        busP2 = - 20;
    busP2 += busS2;
    glutPostRedisplay();
    glutTimerFunc(20, busUp2, 0);
}

//cloud animation

GLfloat cloudM = 15.0f;
GLfloat cloudS = 0.04f;
void cloudAnimation(int value)
{

    if(cloudM < -25)
        cloudM = 25;
    cloudM -= cloudS;
    glutPostRedisplay();
    glutTimerFunc(25, cloudAnimation, 0);

}


//sun animation
GLfloat sunMx = -15.0f;
GLfloat sunSx = 0.04f;
void sunAnimationX(int value)
{
    if(sunMx > 20)
        sunMx = -15.0f;
    sunMx += sunSx;
    glutPostRedisplay();
    glutTimerFunc(70, sunAnimationX, 0);
}

GLfloat sunMy = 2.0f;
GLfloat sunSy = 0.024f;
void sunAnimationY(int value)
{
    if(sunMy > 10)
        sunMy = 2.0f;
    sunMy += sunSy;
    glutPostRedisplay();
    glutTimerFunc(140, sunAnimationY, 0);
}



void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-12, 12, -12, 12);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0,-12.5,0);
    glScalef(15,14,0);
    ground();
    glPopMatrix();

    //sky
    glPushMatrix();
    glTranslatef(0,1,0);
    glScalef(15,12,0);
    sky();
    glPopMatrix();

    //sun
    glPushMatrix();
    glTranslatef(sunMx,sunMy,0);
    glScalef(0.33,0.5,0);
    sun();
    glPopMatrix();

    //back end building
    glPushMatrix();
    glTranslatef(18,-1,0);
    glScalef(4.4,4.9,0);
    building2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(13.2,3,0);
    glScalef(4.5,5.9,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.5,3,0);
    glScalef(4.2,5.6,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7,3,0);
    glScalef(4.2,5.6,0);
    treeLeaf();
    glPopMatrix();

    //back end building
    glPushMatrix();
    glTranslatef(3,-1,0);
    glScalef(4.4,4.9,0);
    building();
    glPopMatrix();



    //university
    glPushMatrix();
    glTranslatef(0,-1,0);
    glScalef(1,1,0);
    university();
    glPopMatrix();

    roadSite();



    //site buliding

    glPushMatrix();
    glTranslatef(-8.5,-3,0);
    glScalef(0.7,1.5,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(22,-3.6,0);
    glScalef(5.1,5.6,0);
    building();
    glPopMatrix();

    //tree2 left building
    glPushMatrix();
    glTranslatef(-9,1.6,0);
    glScalef(3.7,5.1,0);
    treeLeaf();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(2,-3.6,0);
    glScalef(4.3,5.5,0);
    building2();
    glPopMatrix();

    //cloud
    glPushMatrix();
    glTranslatef(cloudM,-1.5,0);
    glScalef(16,19,0);
    cloud();
    glPopMatrix();

    //tree2
    glPushMatrix();
    glTranslatef(-4,0.8,0);
    glScalef(4,5.4,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8,0.8,0);
    glScalef(4,5.4,0);
    treeLeaf();
    glPopMatrix();





    //tree1
    glPushMatrix();
    glTranslatef(-6.5,-5,0);
    glScalef(1,1.5,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0.8,0);
    glScalef(4,5.4,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4,1.06,0);
    glScalef(3.8,5.2,0);
    treeLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2,-5,0);
    glScalef(0.8,1.5,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4,-4.7,0);
    glScalef(0.8,1.5,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,0.6,0);
    glScalef(4,5.4,0);
    treeLeaf();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(9.4,-5.5,0);
    glScalef(0.8,1.5,0);
    tree();
    glPopMatrix();

//bus
    glPushMatrix();
    glTranslatef(busP2,-2.7,0);
    glScalef(1,1,0);
    bus2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(busP,-3.7,0);
    glScalef(1,1,0);
    bus1();
    glPopMatrix();

    thumba();

    glFlush();
    glutSwapBuffers();
}

void animation(){

    glutTimerFunc(10, busUp, 0);
    glutTimerFunc(10,busUp2, 0);
    glutTimerFunc(10,cloudAnimation, 0);
    glutTimerFunc(10,sunAnimationX, 0);
    glutTimerFunc(10,sunAnimationY, 0);

}

void keyfun( unsigned char key, int x, int y )
{
    switch ( key ){
    case 's':
        animation();
        break;
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900,550);
    glutInitWindowPosition(100,150);
    glutCreateWindow ("Hridoy");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyfun);


    glutMainLoop();
    return 0;
}
