#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include<mmsystem.h>
#include <math.h>



//------------------------------  reshapeFunc  ---------------------------------
void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

//------------------------------  display   -------------------------------

void pyramid1();
void pyramid2();
void table();
void frame();
void balls();
void cubeBlocks();
void differentShapes();
void child();
void parent();
void cubeInsidePyramid();

int zRotated =0;
void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef    (0.0, 0.0, -15.0);
    glRotatef       (60.0, 0,1,0);
    glRotatef       (zRotated, 0,1,0);

    //Calling Functions
    pyramid1();
    pyramid2();
    table();
    frame();
    balls();
    cubeBlocks();
    differentShapes();
    child();
    parent();
    cubeInsidePyramid();
    //End of calling Functions


    glutSwapBuffers();
}
//--------------------------------Pyramid 1 Function---------------------------
void pyramid1(){
     glPushMatrix ();
    //glRotatef       (60.0, 0,1,0);
    //glRotatef       (zRotated, 0,1,0);

    glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);

      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);

      //Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.0f, -1.0f, -1.0f);

      //Left
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.0f, -1.0f, 1.0f);


     glEnd();   // Done drawing the pyramid
     glPopMatrix ();

}
//--------------------------------Pyramid 2 Function---------------------------
void pyramid2(){
          glPushMatrix ();
      // Drawing anther pyramid
       glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles

       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);

      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(3.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(4.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(2.0f, -1.0f, 1.0f);

      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(3.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(2.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(2.0f, -1.0f, -1.0f);


      //Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(3.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(4.0f, -1.0f, -1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(2.0f, -1.0f, -1.0f);


      //Left
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(3.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(4.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(4.0f, -1.0f, -1.0f);


     glEnd();   // Done drawing the second pyramid
     glPopMatrix ();

}
//---------------------------CubeInside drawing-------------------------------

void cubeInsidePyramid(){
    glColor3f (0,0,1);
     glPushMatrix ();
       glTranslatef    (3, -0.5, 0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1);
    glPopMatrix ();//Done Cube 2
}

//--------------------------------Table Drawing Function-----------------------
void table(){
       //Table left leg


           glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (3.5, -3.7, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.8);
    glPopMatrix ();
           glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (3.5, -3, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.8);
    glPopMatrix ();


     //Table right leg


           glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (-3.5, -3.7, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.8);
    glPopMatrix ();
           glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (-3.5, -3, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.8);
    glPopMatrix ();

//Table
           glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (3.5, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (2.5, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (1.5, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (0.5, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (-1, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (-2.5, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (-3, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();
          glColor3f (0,0,1);
    glPushMatrix ();
       glTranslatef    (-3.5, -1.8, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.5);
    glPopMatrix ();

//END OF THE TABLE
}
//--------------------------------Frame Function--------------------------------

void frame(){
    // Frame(cube)
   glPushMatrix ();
   glBegin(GL_LINE);


      glColor3f(0.0f, 0.0f, 0.0f);
      glutWireCube(10);

     glEnd();   // Done drawing the cube
    glPopMatrix ();

}
//--------------------------------Balls Drawing Function------------------------
void balls(){
    //BALLS DRAWING
     //Yellow Ball (circle)
    glColor3f (1,1,0);

    glPushMatrix ();

       glTranslatef    (-1.5, -4.0, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidSphere (1.0, 30, 60);
    glPopMatrix ();//Done drawing the circle

         //Green Ball (circle)
    glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-1.5, -4.0, 3.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidSphere (1.0, 30, 60);
    glPopMatrix ();//Done drawing the circle

         // Cute Blue Ball (circle)
    glColor3f (0,1,1);
    glPushMatrix ();
       glTranslatef    (1.5, -4.0, 2.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidSphere (1.0, 30, 60);
    glPopMatrix ();//Done drawing the circle

//END OF BALLS DRAWING
}
//--------------------------------cube Blocks function--------------------------
void cubeBlocks(){
    //3 BLOCKS DRAWING
    //Cube1
     glColor3f (1,0,1);
     glPushMatrix ();
       glTranslatef    (-2.5, -0.6, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.1);
    glPopMatrix ();//Done Cube 1

        //Cube2
     glColor3f (0.0,0.8,0.0);
     glPushMatrix ();
       glTranslatef    (-2.5, 0.4, 0.5);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.1);
    glPopMatrix ();//Done Cube 2

            //Cube3
     glColor3f (0.0,0.4,1);
     glPushMatrix ();
       glTranslatef    (-2.5, 1.5, -0.1);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.1);
    glPopMatrix ();//Done Cube 3




//END OF BLOCKS DRAWING

}
//--------------------------------Different shapes function---------------------
void differentShapes(){
    //DIFFERENT SHAPES  DRAWING
            glColor3f (1,1,0);
    glPushMatrix ();
       glTranslatef    (2, -4, -2);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
        glutSolidTorus(0.6,1,10,5);
    glPopMatrix ();//Done Drawing Torus 1

            glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (1, -4, 3.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
        glutSolidTorus(0.4,1,5,10);
    glPopMatrix ();//Done Drawing Torus 2

            glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (4, -4, 3.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
        glutSolidIcosahedron();
    glPopMatrix ();//Done Drawing

            glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (3, -4, -3.9);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
        glutSolidOctahedron();
    glPopMatrix ();//Done Drawing


//END OF DIFFERENT SHAPES DRAWING

}
//--------------------------------child Drawing Function---------------------------
void child(){
    //CHILD(INSIDE BOX)

    //Face
    glColor3f (1.0,0.85,0.67);
    glPushMatrix ();
       glTranslatef    (-2.5, 0, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidSphere (0.8, 30, 60);
    glPopMatrix ();//Done drawing the circle

        //Neck  (cube)
        glColor3f (1.0,0.85,0.67);
    glPushMatrix ();
       glTranslatef    (-2.5, -0.9, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();//Done drawing the NECK

       //Body(Cubes)
            glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-2.35, -1.6, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.4);
    glPopMatrix ();

               glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-2.35, -2.6, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(1.4);
    glPopMatrix ();//Done drawing the BODY

     //LEGS(Cubes)
               glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-1.65, -3.4, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();
                glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-1.65, -4, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();
                glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-1.65, -4.5, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();//END OF ONE LEG

                  glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-3, -3.4, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();
                glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-3, -4, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();
                glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-3, -4.5, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();//END OF ONE LEG2

    //Arms
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-3.2, -1.5, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-3.6, -1.5, -2.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-3.6, -1.5, -2.5);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-3.6, -1.5, -2.2);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-3.6, -1.5, -1.9);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-3.6, -1.5, -1.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();//End of right arm



                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-1.6, -1.5, -2.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-1.2, -1.5, -2.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
               glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-1.2, -1.5, -2.2);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                 glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-1.2, -1.5, -1.8);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();
                   glColor3f (0,1,0);
    glPushMatrix ();
       glTranslatef    (-1.2, -1.5, -1.4);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.4);
    glPopMatrix ();//End of the left arm



//END OF CHILD

}
//--------------------------------Parent Drawing Function-----------------------
void parent(){
    //OUTER HUMAN
         //Face (circle)
    glColor3f (1.0,0.85,0.67);
    glPushMatrix ();
       glTranslatef    (-6.5, 1.75, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidSphere (1.0, 30, 60);
    glPopMatrix ();//Done drawing the face


           //Neck  (cube)
        glColor3f (1.0,0.85,0.67);
    glPushMatrix ();
       glTranslatef    (-6.5, 1.0, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();
        glColor3f (1.0,0.85,0.67);
    glPushMatrix ();
       glTranslatef    (-6.5, 0.5, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();//Done drawing the Neck


         //Body
        glColor3f (0,1,1);
    glPushMatrix ();
       glTranslatef    (-6.5, -0.65, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(2);
    glPopMatrix ();

        glColor3f (0,1,1);
    glPushMatrix ();
       glTranslatef    (-6.5, -2.0, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(2);
    glPopMatrix ();

        glColor3f (0,1,1);
    glPushMatrix ();
       glTranslatef    (-6.5, -2.5, 0.0);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(2);
    glPopMatrix ();//Done drawing the Body


        //LEFT LEG(cube)
        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -3.7, 0.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();

        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -4.2, 0.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();

        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -4.7, 0.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);

        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -5.2, 0.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);

    glPopMatrix ();//Done drawing the Left leg


            //RIGHT LEG(cube)

        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -3.7, -0.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();

        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -4.2, -0.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();

        glColor3f (0,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -4.7, -0.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
        glColor3f (1,0,0);
    glPushMatrix ();
       glTranslatef    (-6.4, -5.2, -0.6);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.6);
    glPopMatrix ();//Done drawing the Right leg


    //Arms
        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-6.4, -0.7, -1.2);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-6.4, -0.7, -1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-5.9, -0.7, -1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-5.4, -0.7, -1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-4.9, -0.7, -1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();//End of the left arm

          glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-6.4, -0.7, 1.2);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

         glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-6.4, -0.7, 1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-5.9, -0.7, 1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-5.4, -0.7, 1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();

        glColor3f (1,0,1);
    glPushMatrix ();
       glTranslatef    (-4.9, -0.7, 1.7);
       //glRotatef       (60.0, 0,1,0);
       //glRotatef(zRotated,0,0,1);
       glutSolidCube(0.5);
    glPopMatrix ();//End of the Right arm

//END OF HUMAN DRAWING


}
//--------------------------------  idle Function-------------------------------

void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//---------------------------------keyboard input-------------------------------

void keyboard(unsigned char key , int x , int y )
{
    if(key == 'f'){
        glutFullScreen();
    }
    if(key == 'q'){
        exit(0);
    }

}

//----------------------------------  main  ------------------------------------

void keyboard(unsigned char key , int x , int y );
int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize     (1000, 600);
    glutInitWindowPosition (500, 200);
    glutCreateWindow       ("20100883 [3D PROJECT]");
    glOrtho(-50, 50,-50,50,-50, 50);

    glClearColor (1.0, 1.0, 1.0, 0.0);

    glutDisplayFunc (display);
    //glutSpecialFunc(keyspeed);
    glutReshapeFunc (reshapeFunc);
    glutKeyboardFunc(keyboard);
    glutIdleFunc    (idleFunc);

    glClearColor(1,1,1,1);
    texture();
    sndPlaySound("sound.wav",SND_ASYNC);

    glutMainLoop();
}

