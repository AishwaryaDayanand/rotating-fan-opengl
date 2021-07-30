#include <GL/glut.h>  
float angle = 0.0f;
int a=0;
int p=0;
int n=0;
int r=0;
int l=0;
int c=1;
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.5,0.6,0.6 ,1.0); 
   glEnable(GL_DEPTH_TEST);
}
void display() {   
   glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
   glLoadIdentity();
   
  glPushMatrix();
	glTranslatef(0.0,5.0,-40.0);
	glColor3f(1.0, 1.0, 1.0);
	glutWireTorus(1.0, 3.0, 5,10);
	glColor3f(1.0, 1.0, 1.0);
	glutWireTorus(1.0, 2.0, 5,10);
	glutWireTorus(1.0, 5.0, 5,40);
	glutWireTorus(1.0, 7.0, 5,40);
	glutWireTorus(1.0, 9.0, 5,40);
	glutWireTorus(1.0, 11.0, 5,40);
	
	
	glPopMatrix();
   glEnable(GL_LINE_SMOOTH);
	
	glPushMatrix();
	
	glColor3f(1.0, 0.0, 0.0);
	glTranslatef(0.0,1.0,-8.0);
	if(r==1){
	glRotatef(30, 0.0, 1.0, 0.0);
	}
	else if(l==1){
	glRotatef(-30, 0.0, 1.0, 0.0);
	}
	else if(c==1){
	glRotatef(0.0, 0.0, 1.0, 0.0);
	}
	glRotatef(angle, 0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(0.0,2.0,0.0);
	glVertex3f(-1.0,2.0,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(-2.231,-0.134,0.0);
	glVertex3f(-1.32,-1.8659,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(1.2320,-1.8659,0.0);
	glVertex3f(2.231,-0.134,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(1.0,2.0,0.0);
	glVertex3f(0.0,2.0,0.0);
	glEnd();
	glColor3f(0.0, 1.0, 0.0);
	//p2
   glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(0.0,2.0,0.2);
	glVertex3f(-1.0,2.0,0.2);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(-2.231,-0.134,0.2);
	glVertex3f(-1.32,-1.8659,0.2);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(1.2320,-1.8659,0.2);
	glVertex3f(2.231,-0.134,0.2);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(1.0,2.0,0.2);
	glVertex3f(0.0,2.0,0.2);
	glEnd();
	//p3
	 glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(0.0,2.0,0.2);
	glVertex3f(-1.0,2.0,0.2);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(-2.231,-0.134,0.2);
	glVertex3f(-1.32,-1.8659,0.2);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(1.2320,-1.8659,0.2);
	glVertex3f(2.231,-0.134,0.2);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(1.0,2.0,0.2);
	glVertex3f(1.0,2.0,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(2.231,-0.134,0.0);
	glVertex3f(1.2320,-1.8659,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(-1.32,-1.8659,0.0);
	glVertex3f(-2.231,-0.134,0.0);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(-1.0,2.0,0.0);
	glVertex3f(0.0,2.0,0.0);
	glVertex3f(0.0,2.0,0.2);
	glEnd();
	glPopMatrix();	
	glDisable(GL_LINE_SMOOTH);
	// stand
	glPushMatrix();
	glTranslatef(0.0,1.0,-8);
	glRotatef(30.0,0.0,1.0,0.0);
	glBegin(GL_QUADS);
	//FRONT
	glColor3f(0.7,0.4,0.0);
    glVertex3f(0.25,0.0,0.0);
    glVertex3f(-0.25,0.0,0.0);
    glVertex3f(-1.0,-3.5,0.0);
    glVertex3f(1.0,-3.5,0.0);
    //back
    glColor3f(0.7,0.6,0.5);
    glVertex3f(0.25,0.0,-0.25);
    glVertex3f(0.1,-3.5,-1.0);
    glVertex3f(-1.0,-3.5,-1.0);
    glVertex3f(-0.25,0.0,-0.25);
    //right
    glColor3f(0.0,0.0,0.0);
    glVertex3f(0.25,0.0,0.0);
    glVertex3f(0.25,0.0,-0.25);
    glVertex3f(1.0,-3.5,-1.0);
    glVertex3f(1.0,-3.50,0.0);
    //left
   glColor3f(0.0,0.0,0.0);
    glVertex3f(-0.25,0.0,0.0);
    glVertex3f(-0.25,0.0,-0.25);
    glVertex3f(-1.0,-3.5,-1.0);
    glVertex3f(-1.0,-3.50,0.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-0.25,0.0,-0.250);
    glVertex3f(0.25,0.0,0.0);
    glVertex3f(0.250,0.0,-0.250);
    glVertex3f(-0.25,0.0,0.0);
    //bottom
    glColor3f(1.0,0.0,1.0);
    glVertex3f(1.0,-3.50,0.0);
    glVertex3f(1.0,-3.5,-1.0);
    glVertex3f(-1.0,-3.5,-1.0);
    glVertex3f(-1.0,-3.5,0.0);
	glEnd();
glPopMatrix();
  glutSwapBuffers();  
  if(p==0 && n==1){
  angle -= 0.5f;
  }
  else{
  angle +=0.50f;
  }
}



void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
 
   // Set the viewport to cover the new window
   glViewport(0, 0,(GLsizei) width, (GLsizei) height);
 
   glMatrixMode(GL_PROJECTION);  
   glLoadIdentity();             
   gluPerspective(60,1,2.0,50.0);
   glMatrixMode(GL_MODELVIEW); 
}
 
 
 void my_keyboard(unsigned char key, int x, int y)
{
	switch (key) {

		case 's':
                {
                    if(a==0)
                {
                a=1;
		            glutIdleFunc(display);
		             
                }

         else
         {
          a=0;
              glutIdleFunc(NULL);
             
         }
         }
         break;
			case 'p':
			{
                    if(p==0)
                {
		            glutIdleFunc(display);
		             n=1;
                }

         else
         {
              glutIdleFunc(display);
              p=0;
              n=1;
         }
         }
		break;	
            case 'n':
               {
                    if(p==0)
                {
		            glutIdleFunc(display);
		             n=0;
		             p=1;
                }

         else
         {
              glutIdleFunc(display);
              p=1;
              n=0;
         }
         }
		break;
		case 'r':
		{
		 glutIdleFunc(display);
		 r=1;
		 l=0;
		 c=0;
		}
		break;
		case 'l':
		{
		 glutIdleFunc(display);
		 r=0;
		 l=1;
		 c=0;
		}
		break;
		case 'c':
		{
		 glutIdleFunc(display);
		 r=0;
		 l=0;
		 c=1;
		}
		break;
		

		
	  default:
			break;
	}
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);                 // Initialize GLUT
   glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
   glutCreateWindow("Rotating fan"); // Create a window with the given title
   glutInitWindowPosition(10, 50); // Position the window's initial top-left corner
   // Set the window's initial width & height
   glutInitWindowSize(1600, 1600);
   glutDisplayFunc(display); // Register display callback handler for window re-paint
   glutReshapeFunc(reshape);
   initGL();    
    glutKeyboardFunc(my_keyboard);
   glutMainLoop();           // Enter the infinitely event-processing loop
   return 0;
}