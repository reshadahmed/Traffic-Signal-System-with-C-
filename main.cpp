#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

GLfloat varient=true;
GLfloat positionSun=0.85f;
GLfloat positionMoon=1.2f;
int red=0,green=0,blue=0;
GLfloat positionCloud= 0.1f;
GLfloat positionCloud2= 0.1f;
GLfloat position1= 0.1f;
GLfloat position2= 0.1f;
GLfloat position3= 0.1f;
GLfloat position4= 0.1f;
GLfloat position5= 0.1f;
GLfloat position= 0.1f;


void drawQuads(float x1,float y1, float x2,float y2,float x3, float y3,float x4,float y4){

    glBegin(GL_QUADS);
      glVertex2f(x1, y1);
      glVertex2f(x2, y2);
      glVertex2f(x3, y3);
      glVertex2f(x4, y4);
   glEnd();
}

void drawTriangles(float x1,float y1, float x2,float y2,float x3, float y3){
    glBegin(GL_TRIANGLES);
    glVertex2f(x1 ,y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();
}





void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}




///Sky
void sky(int x,int y,int z){
    glBegin(GL_QUADS);
	glColor3ub(x, y, z);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.35f);
	glVertex2f(-1.0f, 0.35f);
    glEnd();
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);


   glLoadIdentity();


    glColor3f(0, 1.0, 0);
     glBegin(GL_QUADS);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

glPushMatrix();
if(varient==true){
	sky(0,204,238);
}
else{
    sky(12,20,69);
}
drawQuads(-1.0f, 0.4f,
          1.0f, 0.4f,
          1.0f, 1.0f,
          -1.0f, 1.0f);

///House-1

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.8f);
glVertex2f(-0.95f, 0.7f);
glVertex2f(-0.8f, 0.7f);
glVertex2f(-0.8f, 0.35f);
glVertex2f(-0.95f, 0.35f);

glEnd();
    if(varient==true){
        glColor3f(0.0f, 0.0f, 0.0f);
    }
    else{
        glColor3f(1.0f, 1.0f, 0.0f);
    }

///blue building window01
    glBegin(GL_QUADS);
	glVertex2f(-0.92f, 0.67f);
	glVertex2f(-0.89f, 0.67f);
	glVertex2f(-0.89f, 0.63f);
	glVertex2f(-0.92f, 0.63f);
    glEnd();
///blue building window02
    glBegin(GL_QUADS);
	glVertex2f(-0.86f, 0.67f);
	glVertex2f(-0.83f, 0.67f);
	glVertex2f(-0.83f, 0.63f);
	glVertex2f(-0.86f, 0.63f);
    glEnd();
///blue building window03
    glBegin(GL_QUADS);
	glVertex2f(-0.92f, 0.60f);
	glVertex2f(-0.89f, 0.60f);
	glVertex2f(-0.89f, 0.56f);
	glVertex2f(-0.92f, 0.56f);

    glEnd();
///blue building window04
     glBegin(GL_QUADS);
	glVertex2f(-0.86f, 0.60f);
	glVertex2f(-0.83f, 0.60f);
	glVertex2f(-0.83f, 0.56f);
	glVertex2f(-0.86f, 0.56f);

    glEnd();
    ///blue building window05
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
	glVertex2f(-0.92f, 0.53f);
	glVertex2f(-0.89f, 0.53f);
	glVertex2f(-0.89f, 0.48f);
	glVertex2f(-0.92f, 0.48f);

    glEnd();
///blue building window06

  glBegin(GL_QUADS);
	glVertex2f(-0.83f, 0.48f);
	glVertex2f(-0.86f, 0.48f);
    glVertex2f(-0.86f, 0.53f);
	glVertex2f(-0.83f, 0.53f);

 glEnd();
///blue building window07
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
	glVertex2f(-0.92f, 0.44f);
	glVertex2f(-0.89f, 0.44f);
	glVertex2f(-0.89f, 0.39f);
	glVertex2f(-0.92f, 0.39f);

    glEnd();

///blue building window08
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
	glVertex2f(-0.83f, 0.44f);
	glVertex2f(-0.86f, 0.44f);
	glVertex2f(-0.86f, 0.39f);
	glVertex2f(-0.83f, 0.39f);

    glEnd();






///Green Building


glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-1.0f, 0.6f);
	glVertex2f(-0.9f, 0.6f);       //red building
	glVertex2f(-0.9f, 0.35f);
	glVertex2f(-1.0f, 0.35f);

    glEnd();

    if(varient==true){
        glColor3f(0.0f, 0.0f, 0.0f);
    }
    else{
        glColor3f(1.0f, 1.0f, 0.0f);
    }
    glBegin(GL_QUADS);
	glVertex2f(-0.99f, 0.59f);
	glVertex2f(-0.97f, 0.59f);       //red building window01
	glVertex2f(-0.97f, 0.54f);
	glVertex2f(-0.99f, 0.54f);

    glEnd();
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
	glVertex2f(-0.94f, 0.59f);
	glVertex2f(-0.92f, 0.59f);       //red building window02
	glVertex2f(-0.92f, 0.54f);
	glVertex2f(-0.94f, 0.54f);

    glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.99f, 0.52f);
	glVertex2f(-0.97f, 0.52f);       //red building window03
	glVertex2f(-0.97f, 0.47f);
	glVertex2f(-0.99f, 0.47f);

    glEnd();
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
	glVertex2f(-0.94f, 0.52f);
	glVertex2f(-0.92f, 0.52f);       //red building window02
	glVertex2f(-0.92f, 0.47f);
	glVertex2f(-0.94f, 0.47f);

    glEnd();





     glBegin(GL_QUADS);
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.8f, 0.7f);
	glVertex2f(-0.7f, 0.7f);       //brown building01
	glVertex2f(-0.7f, 0.35f);
	glVertex2f(-0.8f, 0.35f);

    glEnd();
    if(varient==true){
        glColor3f(0.0f, 0.0f, 0.0f);
    }
    else{
        glColor3f(1.0f, 1.0f, 0.0f);
    }
     glBegin(GL_QUADS);
	glVertex2f(-0.79f, 0.67f);
	glVertex2f(-0.77f, 0.67f);       //brown building01 window01
	glVertex2f(-0.77f, 0.63f);
	glVertex2f(-0.79f, 0.63f);

    glEnd();

     glBegin(GL_QUADS);
	glVertex2f(-0.74f, 0.67f);
	glVertex2f(-0.72f, 0.67f);       //brown building01 window02
	glVertex2f(-0.72f, 0.63f);
	glVertex2f(-0.74f, 0.63f);

    glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.79f, 0.60f);
	glVertex2f(-0.77f, 0.60f);       //brown building01 window03
	glVertex2f(-0.77f, 0.56f);
	glVertex2f(-0.79f, 0.56f);

    glEnd();

     glBegin(GL_QUADS);
	glVertex2f(-0.74f, 0.60f);
	glVertex2f(-0.72f, 0.60f);       //brown building01 window04
	glVertex2f(-0.72f, 0.56f);
	glVertex2f(-0.74f, 0.56f);

    glEnd();
    glColor3f(1.0f, 1.0f, 0.0f);
     glBegin(GL_QUADS);
	glVertex2f(-0.79f, 0.53f);
	glVertex2f(-0.77f, 0.53f);       //brown building01 window05
	glVertex2f(-0.77f, 0.48f);
	glVertex2f(-0.79f, 0.48f);

    glEnd();

     glBegin(GL_QUADS);
	glVertex2f(-0.74f, 0.48f);
	glVertex2f(-0.72f, 0.48f);
    glVertex2f(-0.72f, 0.53f);
	glVertex2f(-0.74f, 0.53f);       //brown building01 window06

 glEnd();





     glBegin(GL_QUADS);
	glColor3f(0.0f, 0.7f, 0.0f);
	glVertex2f(-0.72f, 0.55f);
	glVertex2f(-0.65f, 0.55f);       //green building
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.72f, 0.35f);

    glEnd();
    if(varient==true){
        glColor3f(0.0f, 0.0f, 0.0f);
    }
    else{
        glColor3f(1.0f, 1.0f, 0.0f);
    }
     glBegin(GL_QUADS);
	glVertex2f(-0.71f, 0.52f);
	glVertex2f(-0.69f, 0.52f);       //green building window01
	glVertex2f(-0.69f, 0.46f);
	glVertex2f(-0.71f, 0.46f);

    glEnd();



        glBegin(GL_QUADS);
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.5f, 0.65f);       //brown building02
	glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.65f, 0.35f);

    glEnd();
    if(varient==true){
        glColor3f(0.0f, 0.0f, 0.0f);
    }
    else{
        glColor3f(1.0f, 1.0f, 0.0f);
    }
    glBegin(GL_QUADS);
	glVertex2f(-0.63f, 0.63f);
	glVertex2f(-0.61f, 0.63f);       //brown building02 window01
	glVertex2f(-0.61f, 0.58f);
	glVertex2f(-0.63f, 0.58f);

    glEnd();

     glBegin(GL_QUADS);
	glVertex2f(-0.59f, 0.63f);
	glVertex2f(-0.57f, 0.63f);       //brown building01 window02
	glVertex2f(-0.57f, 0.58f);
	glVertex2f(-0.59f, 0.58f);

    glEnd();

     glBegin(GL_QUADS);
	glVertex2f(-0.54f, 0.63f);
	glVertex2f(-0.52f, 0.63f);       //brown building02 window03
	glVertex2f(-0.52f, 0.58f);
	glVertex2f(-0.54f, 0.58f);

    glEnd();
    glColor3f(1.0f, 1.0f, 0.0f);
      glBegin(GL_QUADS);
	glVertex2f(-0.63f, 0.55f);
	glVertex2f(-0.61f, 0.55f);       //brown building02 window04
	glVertex2f(-0.61f, 0.50f);
	glVertex2f(-0.63f, 0.50f);

    glEnd();

       glBegin(GL_QUADS);
	glVertex2f(-0.59f, 0.55f);
	glVertex2f(-0.57f, 0.55f);       //brown building02 window05
	glVertex2f(-0.57f, 0.50f);
	glVertex2f(-0.59f, 0.50f);

    glEnd();

     glBegin(GL_QUADS);
	glVertex2f(-0.54f, 0.55f);
	glVertex2f(-0.52f, 0.55f);       //brown building02 window06
	glVertex2f(-0.52f, 0.50f);
	glVertex2f(-0.54f, 0.50f);

    glEnd();








///Mountain Shape-1

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-0.5f, 0.35f);
    glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.08f,  0.35f);

	glEnd();

///mountain 1
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-0.5f, 0.35f);
    glVertex2f(-0.4f, 0.8f);
	glVertex2f(-0.2f,  0.35f);
	glEnd();


    glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.5f, 0.35f);
	  glVertex2f(-0.4f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.2f, 0.35f);
	  glVertex2f(-0.4f, 0.8f);

	glEnd();

///mountain 4
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);

	glVertex2f(-0.02f, 0.35f);
	glVertex2f(0.2f, 0.8f);
	glVertex2f(0.5f,  0.35f);

	glEnd();


///mountain03
	 glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);

	glVertex2f(-0.2f, 0.35f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(0.1f,  0.35f);

	glEnd();

	glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(-0.2f, 0.35f);
	  glVertex2f(-0.05f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(0.1f, 0.35f);
	  glVertex2f(-0.05f, 0.8f);

	glEnd();
///mountain05
	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.7f, 0.0f);

	glVertex2f(0.1f, 0.35f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.6f,  0.35f);

	glEnd();

	glLineWidth(2);
	 glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(0.1f, 0.35f);
	  glVertex2f(0.25f, 0.8f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.8f, 0.0f);
	 glVertex2f(0.4f, 0.35f);
	  glVertex2f(0.25f, 0.8f);

	glEnd();
///Road_Vertical
	glBegin(GL_QUADS);
		glColor3ub(71,72,76);
		glVertex2f(0.2f, -1.0f);
	    glVertex2f(-0.2f, -1.0f);
	    glVertex2f(-0.15f, 0.35f);
	    glVertex2f(0.15f, 0.35f);
	glEnd();
///Road_Horizontal
	glBegin(GL_QUADS);
		glColor3ub(71,72,76);
		glVertex2f(-1.0f, -0.2f);
	    glVertex2f(-1.0f, -0.6f);
	    glVertex2f(1.0f, -0.6f);
	    glVertex2f(1.0f, -0.2f);
	glEnd();
///Road_Divider1
    glBegin(GL_QUADS);
		glColor3ub(255,255,255);
		glVertex2f(-1.0f, -0.390f);
	    glVertex2f(-1.0f, -0.410f);
	    glVertex2f(1.0f, -0.410f);
	    glVertex2f(1.0f, -0.390f);
	glEnd();
///Road_Divider2
    glBegin(GL_QUADS);
        glColor3ub(255,255,255);
		glVertex2f(0.01f, -1.0f);
	    glVertex2f(-0.01f, -1.0f);
	    glVertex2f(-0.005f, 0.35f);
	    glVertex2f(0.005f, 0.35f);
	glEnd();
///Speedbreaker_L
    glBegin(GL_QUADS);
        glColor3ub(255,255,255);
        glVertex2f(-0.30f, -0.2f);
		glVertex2f(-0.380f, -0.2f);
	    glVertex2f(-0.4f, -0.6f);
	    glVertex2f(-0.3f, -0.6f);
	glEnd();


	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.22f);
		glVertex2f(-0.380f, -0.22f);
	    glVertex2f(-0.380f, -0.24f);
	    glVertex2f(-0.3f, -0.24f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.26f);
		glVertex2f(-0.380f, -0.26f);
	    glVertex2f(-0.380f, -0.28f);
	    glVertex2f(-0.3f, -0.28f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.30f);
		glVertex2f(-0.39f, -0.30f);
	    glVertex2f(-0.39f, -0.32f);
	    glVertex2f(-0.3f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.34f);
		glVertex2f(-0.39f, -0.34f);
	    glVertex2f(-0.39f, -0.36f);
	    glVertex2f(-0.3f, -0.36f);
	glEnd();


    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.38f);
		glVertex2f(-0.39f, -0.38f);
	    glVertex2f(-0.39f, -0.40f);
	    glVertex2f(-0.3f, -0.40f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.42f);
		glVertex2f(-0.39f, -0.42f);
	    glVertex2f(-0.39f, -0.44f);
	    glVertex2f(-0.3f, -0.44f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.46f);
		glVertex2f(-0.39f, -0.46f);
	    glVertex2f(-0.39f, -0.48f);
	    glVertex2f(-0.3f, -0.48f);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.50f);
		glVertex2f(-0.4f, -0.50f);
	    glVertex2f(-0.4f, -0.52f);
	    glVertex2f(-0.3f, -0.52f);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.54f);
		glVertex2f(-0.4f, -0.54f);
	    glVertex2f(-0.4f, -0.56f);
	    glVertex2f(-0.3f, -0.56f);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.58f);
		glVertex2f(-0.4f, -0.58f);
	    glVertex2f(-0.4f, -0.6f);
	    glVertex2f(-0.3f, -0.6f);
	glEnd();


///Speedbreaker_R
    glBegin(GL_QUADS);
        glColor3ub(255,255,255);
        glVertex2f(0.3f, -0.6f);
		glVertex2f(0.4f, -0.6f);
	    glVertex2f(0.37f, -0.2f);
	    glVertex2f(0.29f, -0.2f);
	glEnd();

	glPushMatrix();
	glTranslatef(0.7,0.0,0.0);
		glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.33f, -0.22f);
		glVertex2f(-0.41f, -0.22f);
	    glVertex2f(-0.41f, -0.24f);
	    glVertex2f(-0.33f, -0.24f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.33f, -0.26f);
		glVertex2f(-0.41f, -0.26f);
	    glVertex2f(-0.41f, -0.28f);
	    glVertex2f(-0.33f, -0.28f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.32f, -0.30f);
		glVertex2f(-0.41f, -0.30f);
	    glVertex2f(-0.41f, -0.32f);
	    glVertex2f(-0.32f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.32f, -0.34f);
		glVertex2f(-0.41f, -0.34f);
	    glVertex2f(-0.41f, -0.36f);
	    glVertex2f(-0.32f, -0.36f);
	glEnd();


    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.31f, -0.38f);
		glVertex2f(-0.41f, -0.38f);
	    glVertex2f(-0.41f, -0.40f);
	    glVertex2f(-0.31f, -0.40f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.31f, -0.42f);
		glVertex2f(-0.41f, -0.42f);
	    glVertex2f(-0.41f, -0.44f);
	    glVertex2f(-0.31f, -0.44f);
	glEnd();

	glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.31f, -0.46f);
		glVertex2f(-0.4f, -0.46f);
	    glVertex2f(-0.4f, -0.48f);
	    glVertex2f(-0.31f, -0.48f);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.31f, -0.50f);
		glVertex2f(-0.4f, -0.50f);
	    glVertex2f(-0.4f, -0.52f);
	    glVertex2f(-0.31f, -0.52f);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.31f, -0.54f);
		glVertex2f(-0.4f, -0.54f);
	    glVertex2f(-0.4f, -0.56f);
	    glVertex2f(-0.31f, -0.56f);
	glEnd();

    glBegin(GL_QUADS);
        glColor3ub(0,0,0);
        glVertex2f(-0.30f, -0.58f);
		glVertex2f(-0.4f, -0.58f);
	    glVertex2f(-0.4f, -0.6f);
	    glVertex2f(-0.3f, -0.6f);
	glEnd();
	glPopMatrix();


float i,x,y;

///Sun
    glPushMatrix();
	glTranslatef(0.7,positionSun,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();



///Moon


glPushMatrix();
	glTranslatef(-0.7,positionMoon,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(169, 169, 169);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();



///Cloud

glPushMatrix();
    glTranslatef(positionCloud, 0.0, 0.0);


glPushMatrix();
	glTranslatef(0.2,0.9,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///cloud-part-2
glPushMatrix();
	glTranslatef(0.12,0.9,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();


///cloud-part-3
glPushMatrix();
	glTranslatef(0.07,0.9,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///

glPushMatrix();
	glTranslatef(0.07,0.86,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();
///

glPushMatrix();
	glTranslatef(0.18,0.86,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();
    ///
    glPushMatrix();
	glTranslatef(0.01,0.9,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();
glPopMatrix();



///Cloud Part 2

glPushMatrix();
    glTranslatef(positionCloud2, 0.0, 0.0);

glPushMatrix();
	glTranslatef(-0.7,0.9,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
glPopMatrix();





///cloud-2
glPushMatrix();
	glTranslatef(-0.6,0.9,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();


///cloud-3
glPushMatrix();
	glTranslatef(-0.6,0.85,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();
///

glPushMatrix();
	glTranslatef(-0.7,0.86,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///

glPushMatrix();
	glTranslatef(-0.5,0.90,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.07*sin(i);
			y=0.07*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

glPopMatrix();






float j,x2,y2;


	glPushMatrix();
    glTranslatef(position3,-0.6f, 0.0f);
    //glRotatef(k,position,0.0,0.1);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.16f);
	glVertex2f(-0.6f, 0.16f);     //bus1
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.4f, 0.08f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.6f, 0.2f);     //bus1
	glVertex2f(-0.6f, 0.16f);
	glVertex2f(-0.4f, 0.16f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.4f, 0.16f);     //bus1

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.6f, 0.2f);     //bus1

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.43f, 0.2f);
	glVertex2f(-0.43f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.46f, 0.2f);
	glVertex2f(-0.46f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.49f, 0.2f);
	glVertex2f(-0.49f, 0.1f);     //bus1

	glEnd();
    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.52f, 0.2f);
	glVertex2f(-0.52f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);     //bus1

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.58f, 0.2f);
	glVertex2f(-0.58f, 0.1f);     //bus1

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.6f, 0.2f);
	glVertex2f(-0.6f, 0.16f);     //bus1

	glEnd();





///Tire of the first car
glPushMatrix();
	glTranslatef(-0.58,0.08,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();

///
glPushMatrix();
	glTranslatef(-0.42,0.08,0.0);
	glBegin(GL_TRIANGLE_FAN);
		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();
glPopMatrix();






///Bus 2
glPushMatrix();
glTranslatef(position2,-0.55,0.0);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.4f, 0.29f);
	glVertex2f(0.6f, 0.29f);     //bus2
	glVertex2f(0.6f, 0.22f);
	glVertex2f(0.4f, 0.22f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.6f, 0.33f);     //bus2
	glVertex2f(0.6f, 0.29f);
	glVertex2f(0.4f, 0.29f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.4f, 0.29f);     //bus2

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.6f, 0.33f);     //bus2

	glEnd();

		glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.43f, 0.33f);
	glVertex2f(0.43f, 0.29f);     //bus2

	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.46f, 0.33f);
	glVertex2f(0.46f, 0.29f);     //bus2

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.49f, 0.33f);
	glVertex2f(0.49f, 0.29f);     //bus2

	glEnd();
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.52f, 0.33f);
	glVertex2f(0.52f, 0.29f);     //bus2

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.55f, 0.33f);
	glVertex2f(0.55f, 0.29f);     //bus2

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.58f, 0.33f);
	glVertex2f(0.58f, 0.29f);     //bus2

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.6f, 0.33f);
	glVertex2f(0.6f, 0.29f);     //bus2

	glEnd();


///Tire of the second bus
glPushMatrix();

	glTranslatef(0.58,0.22,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();

///
glPushMatrix();

	glTranslatef(0.42,0.22,0.0);

	glBegin(GL_TRIANGLE_FAN);

		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();
glPopMatrix();


///Car-3
glPushMatrix();
glTranslatef(position1,-0.55,0);
	 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(1.0f, 0.27f);
	glVertex2f(0.9f, 0.27f);     //car3
	glVertex2f(0.9f, 0.22f);
	glVertex2f(1.0f, 0.22f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, 0.31f);
	glVertex2f(0.94f, 0.31f);     //car3
	glVertex2f(0.92f, 0.27f);
	glVertex2f(0.99f, 0.27f);
	glEnd();

	 glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, 0.31f);    //car3
	glVertex2f(0.94f, 0.31f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.98f, 0.31f);    //car3
	glVertex2f(0.99f, 0.27f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.94f, 0.31f);     //car3
	glVertex2f(0.92f, 0.27f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.96f, 0.31f);     //car3
	glVertex2f(0.96f, 0.27f);
    glEnd();


///Tire of the third car
glPushMatrix();

	glTranslatef(0.98,0.22,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();
glPushMatrix();

	glTranslatef(0.92,0.22,0.0);

	glBegin(GL_TRIANGLE_FAN);

		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();
glPopMatrix();





  glPushMatrix();
   glTranslatef(position4,-0.55f, 0.0f);
//    glRotatef(k,position,0.0,0.1);

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.8f, 0.27f);
	glVertex2f(0.7f, 0.27f);//car4
	glVertex2f(0.7f, 0.22f);
	glVertex2f(0.8f, 0.22f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.78f, 0.31f);
	glVertex2f(0.74f, 0.31f);     //car4
	glVertex2f(0.72f, 0.27f);
	glVertex2f(0.79f, 0.27f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.78f, 0.31f);    //car4
	glVertex2f(0.74f, 0.31f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.78f, 0.31f);    //car4
	glVertex2f(0.79f, 0.27f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.74f, 0.31f);     //car4
	glVertex2f(0.72f, 0.27f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(0.76f, 0.31f);     //car4
	glVertex2f(0.76f, 0.27f);
    glEnd();


///Tire of the first car
glPushMatrix();
	glTranslatef(0.78,0.22,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();

///
glPushMatrix();

	glTranslatef(0.72,0.22,0.0);

	glBegin(GL_TRIANGLE_FAN);

		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();
glPopMatrix();




    glPushMatrix();
    glTranslatef(position5,-0.55f, 0.0f);
    //glRotatef(k,position,0.0,0.1);


    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-0.8f, 0.13f);
	glVertex2f(-0.7f, 0.13f);//car2
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.8f, 0.08f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.78f, 0.17f);
	glVertex2f(-0.74f, 0.17f);     //car2
	glVertex2f(-0.72f, 0.13f);
	glVertex2f(-0.79f, 0.13f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.78f, 0.17f);    //car2
	glVertex2f(-0.74f, 0.17f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.78f, 0.17f);    //car2
	glVertex2f(-0.79f, 0.13f);
    glEnd();

glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.74f, 0.17f);     //car2
	glVertex2f(-0.72f, 0.13f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.76f, 0.17f);     //car2
	glVertex2f(-0.76f, 0.13f);
    glEnd();





///Tire of the first car
glPushMatrix();

	glTranslatef(-0.78,0.08,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,0,0);
		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();

///
glPushMatrix();

	glTranslatef(-0.72,0.08,0.0);

	glBegin(GL_TRIANGLE_FAN);

		for(j=0;j<=2*3.14;j+=0.0001)
		{
			x2=0.014*sin(j);
			y2=0.014*cos(j);
			glVertex2f(x2,y2);
		}
	glEnd();
glPopMatrix();



 glPopMatrix();












///Lamp_post_RDown
    glBegin(GL_QUADS);
        glColor3ub(202,204,206);
		glVertex2f(0.205f, -0.7f);
	    glVertex2f(0.215f, -0.7f);
	    glVertex2f(0.215f, -0.45f);
	    glVertex2f(0.205f, -0.45f);
	glEnd();
	glBegin(GL_QUADS);
        glColor3ub(202,204,206);
		glVertex2f(0.180f, -0.45f);
	    glVertex2f(0.240f, -0.45f);
	    glVertex2f(0.240f, -0.3f);
	    glVertex2f(0.180f, -0.3f);
	glEnd();

///Red Light
	glBegin(GL_QUADS);
	if(red==1){
        glColor3ub(202,0,0);
	}
	else{
        glColor3ub(0,0,0);
	}

		glVertex2f(0.182f, -0.45f);
	    glVertex2f(0.238f, -0.45f);
	    glVertex2f(0.238f, -0.4f);
	    glVertex2f(0.182f, -0.4f);
	glEnd();

///Green Light
    if(green==1){
        glColor3ub(0,202,0);
	}
	else{
        glColor3ub(0,0,0);
	}
	glBegin(GL_QUADS);
		glVertex2f(0.182f, -0.4f);
	    glVertex2f(0.238f, -0.4f);
	    glVertex2f(0.238f, -0.35f);
	    glVertex2f(0.182f, -0.35f);
	glEnd();

///Blue Light
    if(blue==1){
        glColor3ub(255,255,0);
	}
	else{
        glColor3ub(0,0,0);
	}
	glBegin(GL_QUADS);
		glVertex2f(0.182f, -0.35f);
	    glVertex2f(0.238f, -0.35f);
	    glVertex2f(0.238f, -0.30f);
	    glVertex2f(0.182f, -0.30f);
	glEnd();



glPushMatrix();
glTranslatef(-0.5,0.5,0);
///Lamp_post_RDown
    glBegin(GL_QUADS);
        glColor3ub(202,204,206);
		glVertex2f(0.205f, -0.7f);
	    glVertex2f(0.215f, -0.7f);
	    glVertex2f(0.215f, -0.45f);
	    glVertex2f(0.205f, -0.45f);
	glEnd();
	glBegin(GL_QUADS);
        glColor3ub(202,204,206);
		glVertex2f(0.180f, -0.45f);
	    glVertex2f(0.240f, -0.45f);
	    glVertex2f(0.240f, -0.3f);
	    glVertex2f(0.180f, -0.3f);
	glEnd();

///Red Light
	if(red==1){
        glColor3ub(202,0,0);
	}
	else{
        glColor3ub(0,0,0);
	}
	glBegin(GL_QUADS);
		glVertex2f(0.182f, -0.45f);
	    glVertex2f(0.238f, -0.45f);
	    glVertex2f(0.238f, -0.4f);
	    glVertex2f(0.182f, -0.4f);
	glEnd();

///Green Light
if(green==1){
        glColor3ub(0,202,0);
	}
	else{
        glColor3ub(0,0,0);
	}
	glBegin(GL_QUADS);
		glVertex2f(0.182f, -0.4f);
	    glVertex2f(0.238f, -0.4f);
	    glVertex2f(0.238f, -0.35f);
	    glVertex2f(0.182f, -0.35f);
	glEnd();

///Blue Light
if(blue==1){
        glColor3ub(255,255,0);
	}
	else{
        glColor3ub(0,0,0);
	}
	glBegin(GL_QUADS);
		glVertex2f(0.182f, -0.35f);
	    glVertex2f(0.238f, -0.35f);
	    glVertex2f(0.238f, -0.30f);
	    glVertex2f(0.182f, -0.30f);
	glEnd();

glPopMatrix();




///Tree -1

glPushMatrix();
glTranslatef(0.0,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -2


glPushMatrix();
glTranslatef(0.05,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();



///Tree -3


glPushMatrix();
glTranslatef(0.1,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -4


glPushMatrix();
glTranslatef(0.15,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();







glPushMatrix();
glTranslatef(1.5,0,0);

///Tree -1

glPushMatrix();
glTranslatef(0.0,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -2


glPushMatrix();
glTranslatef(0.05,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();



///Tree -3


glPushMatrix();
glTranslatef(0.1,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -4


glPushMatrix();
glTranslatef(0.15,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();

glPopMatrix();







glPushMatrix();
glTranslatef(-0.9,-0.5,0.0);
glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.855f,  0.52f);
    glVertex2f(0.862f,  0.52f);
    glVertex2f(0.862f,  0.48f);
    glVertex2f(0.855f,  0.48f);

    glEnd();

                                       //2nd stand
    glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);
	glVertex2f(0.905f,  0.52f);
    glVertex2f(0.912f,  0.52f);
    glVertex2f(0.912f,  0.48f);
    glVertex2f(0.905f,  0.48f);
    glEnd();


                                  //3rd stand
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.90f,  0.65f);
    glVertex2f(0.90f,  0.51f);
    glVertex2f(0.895f,  0.51f);
    glVertex2f(0.895f,  0.65f);

    glEnd();
                                       //4th stand
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.94f,  0.65f);
    glVertex2f(0.94f,  0.50f);
    glVertex2f(0.935f,  0.50f);
    glVertex2f(0.935f,  0.65f);

    glEnd();



                                       //bench piller 1
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.55f);
    glVertex2f(0.84f,  0.52f);
    glVertex2f(0.91f,  0.52f);
    glVertex2f(0.96f,  0.55f);

    glEnd();
                                    //piller 2
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.56f);
    glVertex2f(0.95f,  0.56f);
    glVertex2f(0.95f,  0.58f);
    glVertex2f(0.88f,  0.58f);

    glEnd();
                                    //piller 3
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.59f);
    glVertex2f(0.95f,  0.59f);
    glVertex2f(0.95f,  0.61f);
    glVertex2f(0.88f,  0.61f);

    glEnd();
                                    //piller 4
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.62f);
    glVertex2f(0.95f,  0.62f);
    glVertex2f(0.95f,  0.64f);
    glVertex2f(0.88f,  0.64f);

    glEnd();
                                         //lamppost
                                         //ground stand
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);///

	glVertex2f(0.845f,  0.55f);
    glVertex2f(0.824f,  0.55f);
    glVertex2f(0.824f,  0.57f);
    glVertex2f(0.845f,  0.57f);

    glEnd();
                                  //upperstand
  	glBegin(GL_QUADS);
	glColor3ub(149, 171, 159);
    glVertex2f(0.84f,  0.57f);
    glVertex2f(0.832f,  0.57f);
    glVertex2f(0.832f,  0.70f);
    glVertex2f(0.84f,  0.70f);

    glEnd();
///                       //light
  	glBegin(GL_QUAD_STRIP);
  	if(varient==true){
        glColor3ub(255,255,224);
  	}
  	else{
        glColor3ub(255, 210, 61);

  	}


	glVertex2f(0.82f,  0.70f);
    glVertex2f(0.81f,  0.76f);
    glVertex2f(0.83f,  0.70f);
    glVertex2f(0.834f,  0.76f);
    glVertex2f(0.85f,  0.70f);
    glVertex2f(0.86f,  0.76f);

    glEnd();
                                //light cover
  	glBegin(GL_QUADS);
	glColor3ub(45, 150, 129);

	glVertex2f(0.807f,  0.76f);
    glVertex2f(0.863f,  0.76f);
    glVertex2f(0.84f,  0.80f);
    glVertex2f(0.827f,  0.80f);
    glEnd();

  glPopMatrix();

///Pond
glPushMatrix();
glTranslatef(-0.8f,0.15f,0.0f);
float p,o,n;

glBegin(GL_TRIANGLE_FAN);
		glColor3ub(210,170,109);
		for(p=0;p<=2*3.14;p+=0.01)
		{
			o=0.11*sin(p);
			n=0.11*cos(p);
			glVertex2f(o,n);

		}
	glEnd();
	glutSwapBuffers();
glPopMatrix();
glPushMatrix();
glTranslatef(-0.8f,0.15f,0.0f);
float d,s,t;
    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(9,195,219);
		for(t=0;t<=2*3.14;t+=0.01)
		{
			d=0.095*sin(t);
			s=0.095*cos(t);
			glVertex2f(d,s);

		}
	glEnd();
	glutSwapBuffers();
glPopMatrix();
//glFlush();

///Round Tree

glPushMatrix();


glTranslatef(-0.2,-0.45,0.0);

///Tree 1
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.71f, -0.2f);
        glVertex2f(0.73f, -0.2f);
        glVertex2f(0.73f, -0.13f);
        glVertex2f(0.71f, -0.13f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.72,-0.1,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///Tree 2
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.77f, -0.2f);
        glVertex2f(0.79f, -0.2f);
        glVertex2f(0.79f, -0.13f);
        glVertex2f(0.77f, -0.13f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.78,-0.1,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();


///Tree 2
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.82f, -0.2f);
        glVertex2f(0.84f, -0.2f);
        glVertex2f(0.84f, -0.13f);
        glVertex2f(0.82f, -0.13f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.83,-0.1,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///Tree 3
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.86f, -0.2f);
        glVertex2f(0.88f, -0.2f);
        glVertex2f(0.88f, -0.13f);
        glVertex2f(0.86f, -0.13f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.87,-0.1,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///Tree 4
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.93f, -0.2f);
        glVertex2f(0.95f, -0.2f);
        glVertex2f(0.95f, -0.13f);
        glVertex2f(0.93f, -0.13f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.94,-0.1,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

   glPopMatrix();

///Tree in horizon
glPushMatrix();
glTranslatef(0.0,-0.2,0.0);
///Tree 1
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.60f, 0.5f);
        glVertex2f(0.62f, 0.5f);
        glVertex2f(0.62f, 0.43f);
        glVertex2f(0.60f, 0.43f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.61,0.52,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();


///Tree 2
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.65f, 0.52f);
        glVertex2f(0.67f, 0.52f);
        glVertex2f(0.67f, 0.45f);
        glVertex2f(0.65f, 0.45f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.66,0.54,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
    glPopMatrix();

///Tree 3
    glPushMatrix();
    glBegin(GL_QUADS);
		glColor3ub(102, 51, 0);
		glVertex2f(0.70f, 0.55f);
        glVertex2f(0.72f, 0.55f);
        glVertex2f(0.72f, 0.48f);
        glVertex2f(0.70f, 0.48f);
	glEnd();
    glPopMatrix();
glPushMatrix();
	glTranslatef(0.71,0.57,0.0);

	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(0,100,0);
		for(i=0;i<=2*3.14;i+=0.0001)
		{
			x=0.04*sin(i);
			y=0.04*cos(i);
			glVertex2f(x,y);
		}
	glEnd();
glPopMatrix();

glPopMatrix();
///Tree_LD
//Tree1
glPushMatrix();
//glTranslatef(-0.6,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, -0.75f);
	glVertex2f(-0.91f, -0.9f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, -0.75f);
	glVertex2f(-0.91f, -0.68f);
	glVertex2f(-0.86f, -0.75f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, -0.72f);
	glVertex2f(-0.91f, -0.66f);
	glVertex2f(-0.86f, -0.72f);       //tree
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, -0.69f);
	glVertex2f(-0.91f, -0.63f);
	glVertex2f(-0.86f, -0.69f);       //tree
    glEnd();
glPopMatrix();

///Tree_LD
//Tree2
glPushMatrix();
//glTranslatef(0.05,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.85f, -0.75f);
	glVertex2f(-0.85f, -0.9f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.89f, -0.75f);
	glVertex2f(-0.85f, -0.68f);
	glVertex2f(-0.80f, -0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.89f, -0.72f);
	glVertex2f(-0.85f, -0.66f);
	glVertex2f(-0.80f, -0.72f);       //tree
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.89f, -0.69f);
	glVertex2f(-0.85f, -0.63f);
	glVertex2f(-0.80f, -0.69f);       //tree
    glEnd();
glPopMatrix();
///Tree_LD
//Tree2
glPushMatrix();
//glTranslatef(0.05,-0.85,0);
glLineWidth(10);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.79f, -0.75f);
	glVertex2f(-0.79f, -0.9f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.83f, -0.75f);
	glVertex2f(-0.79f, -0.68f);
	glVertex2f(-0.74f, -0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.83f, -0.72f);
	glVertex2f(-0.79f, -0.66f);
	glVertex2f(-0.74f, -0.72f);       //tree
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.83f, -0.69f);
	glVertex2f(-0.79f, -0.63f);
	glVertex2f(-0.74f, -0.69f);       //tree
    glEnd();
glPopMatrix();





glPushMatrix();
glTranslatef(-1.5,-0.5,0.0);
glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.855f,  0.52f);
    glVertex2f(0.862f,  0.52f);
    glVertex2f(0.862f,  0.48f);
    glVertex2f(0.855f,  0.48f);

    glEnd();

                                       //2nd stand
    glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);
	glVertex2f(0.905f,  0.52f);
    glVertex2f(0.912f,  0.52f);
    glVertex2f(0.912f,  0.48f);
    glVertex2f(0.905f,  0.48f);
    glEnd();


                                  //3rd stand
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.90f,  0.65f);
    glVertex2f(0.90f,  0.51f);
    glVertex2f(0.895f,  0.51f);
    glVertex2f(0.895f,  0.65f);

    glEnd();
                                       //4th stand
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);

	glVertex2f(0.94f,  0.65f);
    glVertex2f(0.94f,  0.50f);
    glVertex2f(0.935f,  0.50f);
    glVertex2f(0.935f,  0.65f);

    glEnd();



                                       //bench piller 1
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.55f);
    glVertex2f(0.84f,  0.52f);
    glVertex2f(0.91f,  0.52f);
    glVertex2f(0.96f,  0.55f);

    glEnd();
                                    //piller 2
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.56f);
    glVertex2f(0.95f,  0.56f);
    glVertex2f(0.95f,  0.58f);
    glVertex2f(0.88f,  0.58f);

    glEnd();
                                    //piller 3
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.59f);
    glVertex2f(0.95f,  0.59f);
    glVertex2f(0.95f,  0.61f);
    glVertex2f(0.88f,  0.61f);

    glEnd();
                                    //piller 4
    glBegin(GL_QUADS);
	glColor3ub(235, 197, 12);

	glVertex2f(0.88f,  0.62f);
    glVertex2f(0.95f,  0.62f);
    glVertex2f(0.95f,  0.64f);
    glVertex2f(0.88f,  0.64f);

    glEnd();
glPopMatrix();








glPopMatrix();


   glFlush();
}


GLfloat sunSpeed = 0.05f;
GLfloat moonSpeed = 0.05f;
void update5(int value) {
if(value==1){
    if(positionSun > 1.2f || positionMoon < 0.85f){
        positionSun = 1.2f;
        positionMoon = 0.85f;
    }
    else{
        positionSun += sunSpeed;
        positionMoon -= moonSpeed;
        glutPostRedisplay();
        glutTimerFunc(200, update5, 1);
    }

}
else{
    if(positionSun < 0.85f || positionMoon > 1.2f){
        positionSun = 0.85f;
        positionMoon = 1.2f;
    }
    else{
        positionSun -= sunSpeed;
        positionMoon += moonSpeed;
        glutPostRedisplay();
        glutTimerFunc(200, update5, 0);
    }






}



    glBegin(GL_QUADS);
	glVertex2f(-0.54f, 0.55f);
	glVertex2f(-0.52f, 0.55f);
	glVertex2f(-0.52f, 0.50f);
	glVertex2f(-0.54f, 0.50f);

    glEnd();



}
GLfloat cloudSpeed=0.02f;
void update6(int value) {

    if(positionCloud > 1.0f)
        positionCloud = -1.2f;

    positionCloud += cloudSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, update6, 0);
}

void update7(int value) {

    if(positionCloud2 > 1.65f)
        positionCloud2 = -0.7f;

    positionCloud2 += cloudSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, update7, 0);
}
GLfloat busSpeed=0.1f;
void updateBus1(int value) {

    if(position3 > 1.65f)
        position3 = -1.2f;

    position3 += busSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, updateBus1, 0);
}

void updateBus2(int value) {

    if(position2 < -1.5f)
        position2 = 1.2f;

    position2 -= busSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, updateBus2, 0);
}

void updateCar1(int value) {

    if(position1 < -1.5f)
        position1 = 1.2f;

    position1 -= busSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, updateCar1, 0);
}
void updateCar2(int value) {

    if(position4 < -1.5f)
        position4 = 1.2f;

    position4 -= busSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, updateCar2, 0);
}
void updateCar3(int value) {

    if(position5 > 1.2f)
        position5 = -1.2f;

    position5 += busSpeed;


	glutPostRedisplay();


	glutTimerFunc(200, updateCar3, 0);
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'r':
	red=1;
	green=0;
	blue=0;
	busSpeed=0.0f;
    break;
case 'g':
	red=0;
	green=1;
	blue=0;
	busSpeed=0.1f;
    break;
case 'b':
	red=0;
	green=0;
	blue=1;
	busSpeed-=0.04f;
    break;
case 'n':
    varient=false;
    update5(1);
    break;
case 'd':
	varient=true;
	update5(0);
    break;



glutPostRedisplay();


	}
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
//   glutMouseFunc(handleMouse);
   //glutTimerFunc(1000, enemyUpdate, 0);
   glutTimerFunc(1000, update6, 0);
   glutTimerFunc(1000, update7, 0);
   glutTimerFunc(1000, updateBus1, 0);
   glutTimerFunc(1000, updateBus2, 0);
   glutTimerFunc(1000, updateCar1, 0);
   glutTimerFunc(1000, updateCar2, 0);
   glutTimerFunc(1000, updateCar3, 0);
   glutMainLoop();
   return 0;
}
