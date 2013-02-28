#include<glut.h>
void init (void){
	glColor3f(0.0,0.0,1.0);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);		
	gluOrtho2D(-5.0,8.0,-5.0,8.0);//keyboardAssign
	glOrtho(-1,1,-1,1,-1,1);//ModelView
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-5.0,5.0,-5.0,5.0);//keyboardAssign
	glLoadIdentity();
	gluOrtho2D(0.0,830.0,0.0,1080.0);
}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);//KeyboardAssign
	glPushMatrix();//KeyboardAssign
	glEnd();//KeyboardAssign
	
	glBegin(GL_POLYGON);
	glColor3f(0.10,0.20,0.23);
	glVertex2i(48,58);
	glVertex2i(780,60);                    // si puen
	glVertex2i(780,1020);
	glVertex2i(48,1020);
	glEnd();
///////////////////
	glBegin(GL_POLYGON);
	glColor3f(1.5,1.3,0.7);
	glVertex2i(600,350);
	glVertex2i(400,650);
	glVertex2i(550,680);
	glVertex2i(750,400);                   // tieng norn
	glEnd();
	////////////
	glBegin(GL_POLYGON);
	glColor3f(1.3,0.6,0.8);
	glVertex2i(460,580);
	glVertex2i(405,660);
	glVertex2i(540,680);
	glVertex2i(560,670);
	glVertex2i(568,660); 
	glVertex2i(580,640); 
	glVertex2i(585,620);  
	glVertex2i(585,610);                   // morn
	glEnd();
	/////////////
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(400,650);
	glVertex2i(550,680);                   // LAIY tieng norn 1
	glEnd();
	/////////////
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,680);
	glVertex2i(750,400);                   // LAIY tieng norn 2
	glEnd();
	/////////////

	glBegin(GL_POLYGON);         // karng khop tieng
	glColor3f(0.68,0.5,0.40);
	glVertex2i(600,350);
	glVertex2i(600,300);
	glVertex2i(400,600);
	glVertex2i(400,650);

	glEnd();

	////////////////////

	glBegin(GL_POLYGON);         // kar khop tieng roup 1
	glColor3f(0.68,0.5,0.40);
	glVertex2i(600,300);
	glVertex2i(585,322);
	glVertex2i(585,260);
	glVertex2i(600,240);

	glEnd();

	////////////////////

	glBegin(GL_POLYGON);         // kar khop tieng roup 2
	glColor3f(0.68,0.5,0.40);
	glVertex2i(600,300);
	glVertex2i(612,305);
	glVertex2i(612,240);
	glVertex2i(600,240);

	glEnd();

	////////////////////

	glBegin(GL_LINES);         // kar khop tieng roup 3
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,300);
	glVertex2i(600,240);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // kar khop tieng roup 4
	glColor3f(0.0,0.0,0.0);
	glVertex2i(612,240);
	glVertex2i(600,240);

	glEnd();
	///////////////////

	
	glBegin(GL_LINES);         // kar khop tieng roup 5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(612,240);
	glVertex2i(612,305);

	glEnd();
	/////////////

	glBegin(GL_LINES);         // kar khop tieng roup 6
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,300);
	glVertex2i(612,302);
	glEnd();

	//////////////////


	glBegin(GL_POLYGON);         // kar khop tieng roup kua 1
	//glColor3f(0.98,0.04,0.70);
	glColor3f(0.68,0.5,0.40);
	glVertex2i(750,350);
	glVertex2i(750,280);
	glVertex2i(740,280);
	glVertex2i(740,348);
	glEnd();

	/////////////////

	glBegin(GL_POLYGON);         // kar khop tieng roup kua 2
	glColor3f(0.68,0.5,0.40);
	glVertex2i(740,348);
	glVertex2i(725,340);
	glVertex2i(725,300);
	glVertex2i(740,280);
	glEnd();

	/////////////////
    
	glBegin(GL_LINES);         // kar khop tieng roup kua 3
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,350);
	glVertex2i(750,280);
	glEnd();

	/////////////////

	glBegin(GL_LINES);         // kar khop tieng roup kua 4
	glColor3f(0.0,0.0,0.0);
	glVertex2i(740,280);
	glVertex2i(740,348);
	glEnd();

	////////////////

	glBegin(GL_LINES);         // kar khop tieng roup kua 5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,348);
	glVertex2i(740,345);
	glEnd();

	/////////////////
	glBegin(GL_LINES);         // kar khop tieng roup kua 1
	glColor3f(0.0,0.0,0.0);
	glVertex2i(750,280);
	glVertex2i(740,280);
	glEnd();

	/////////////////

	glBegin(GL_POLYGON);         // kar khop tieng3
	glColor3f(0.68,0.5,0.40);
	glVertex2i(400,600);
	glVertex2i(414,580);
	glVertex2i(414,520);
	glVertex2i(400,540);

	glEnd();

	////////////////////
	glBegin(GL_POLYGON);         // kar khop tieng4
	glColor3f(0.68,0.5,0.40);
	glVertex2i(414,580);
	glVertex2i(425,560);
	glVertex2i(425,520);
	glVertex2i(414,520);
	glEnd();
	/////////////////

	glBegin(GL_LINES);         //  laiy kar khop tieng5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(414,580);
	glVertex2i(414,520);

	glEnd();
	
	/////////////////

	glBegin(GL_LINES);         //  laiy kar khop tieng6
	glColor3f(0.0,0.0,0.0);
	glVertex2i(414,580);
	glVertex2i(425,560);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // laiy kar khop tieng7
	glColor3f(0.0,0.0,0.0);
	glVertex2i(425,560);
	glVertex2i(425,520);

	glEnd();
	/////////////////

	glBegin(GL_LINES);         // laiy kar khop tieng8
	glColor3f(0.0,0.0,0.0);
	glVertex2i(425,520);
	glVertex2i(414,520);

	glEnd();
	/////////////////

	glBegin(GL_POLYGON);         // karng khop tieng1
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glVertex2i(400,630);
	glVertex2i(400,650);

	glEnd();
	////////////////////
	glBegin(GL_LINES);           // LAIY SIEN TIENG
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(400,650);
	glEnd();

	////////////////
	////////////////////
	glBegin(GL_POLYGON);         // TUENG tieng
	//glColor3f(0.98,0.04,0.70);
	glColor3f(0.60,0.30,0.60);
	glVertex2i(400,650);
	glVertex2i(400,680);
	glVertex2i(550,710);
	glVertex2i(550,680);


	glEnd();
	///////////////////////////////
	glBegin(GL_LINES);         // LAIY TUENG tieng
	//glColor3f(0.98,0.04,0.70);
	glVertex2i(400,650);
	glVertex2i(400,670);
	glEnd();

	glBegin(GL_POLYGON);         // karng khop tieng2
	glColor3f(0.68,0.5,0.40);
	glVertex2i(600,350);
	glVertex2i(600,300);
	glVertex2i(750,350);
	glVertex2i(750,400);
	glEnd();
	//////////////////////
    glBegin(GL_POLYGON);         // karng khop tieng3
	glColor3f(1.0,1.0,1.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glVertex2i(750,380);
	glVertex2i(750,400);
	glEnd();
	/////////////////////

	  glBegin(GL_LINES);         // LAIY TIENG 2
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(750,400);
	glEnd();

	//////////

	  glBegin(GL_LINES);         // karng khop tieng
	glColor3f(0.0,0.0,0.0);
	glVertex2i(600,350);
	glVertex2i(600,330);
	glEnd();
	/////////////////////
glBegin(GL_POLYGON);         // sien baeg  tieng 1
	glColor3f(0.10,0.65,0.50);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glVertex2i(780,1020);
	glVertex2i(780,400);
	glEnd();
	///////////////////////////////
	glBegin(GL_POLYGON);         //khorp pong yiam 
	glColor3f(0.50,0.30,0.30);
	glVertex2i(650,710);
	glVertex2i(650,1020);
	glVertex2i(780,940);
	glVertex2i(780,550);
	glEnd();
	//////////////////////////////////
	glBegin(GL_POLYGON);         //pong yiam xai
	glColor3f(0.60,0.30,0.30);
	glVertex2i(660,720);
	glVertex2i(660,1000);
	glVertex2i(705,970);
	glVertex2i(705,663);
	glEnd();
	//////////////////////////////////
	glBegin(GL_POLYGON);         //pong yiam khuas
	glColor3f(0.60,0.30,0.30);
	glVertex2i(715,650);
	glVertex2i(715,965);
	glVertex2i(770,930);
	glVertex2i(770,580);
	glEnd();
	//////////////////////////////////
		glBegin(GL_POLYGON);         //Sein beng pong yiam 
	glColor3f(0.50,0.30,0.30);
	glVertex2i(705,663);
	glVertex2i(705,970);
	glVertex2i(715,965);
	glVertex2i(715,650);
	glEnd();
	//////////////////////////////////

	glBegin(GL_POLYGON);         // sien baeg  tieng 2
	glColor3f(0.10,0.65,0.50);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glVertex2i(50,1020);
	glVertex2i(50,600);
	glEnd();
	///////////////////////////////

	glBegin(GL_LINES);         // sien baeg  tieng 5
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(50,600);
	glEnd();
	///////////////////////////////////////
	glBegin(GL_POLYGON);         // legs of the table
	glColor3f(0.10,0.55,0.40);
	glVertex2i(140,530);
	glVertex2i(100,610);
	glVertex2i(100,780);
	glVertex2i(140,700);
	glEnd();
		glBegin(GL_LINE_LOOP);         // Line legs
	glColor3f(0.0,0.0,0.0);
	glVertex2i(140,530);
	glVertex2i(100,610);
	glVertex2i(100,780);
	glVertex2i(140,700);
	glEnd();
	///////////////////////////////

	glBegin(GL_POLYGON);         // legs of the table
	glColor3f(0.10,0.55,0.40);
	glVertex2i(340,740);
	glVertex2i(340,570);
	glVertex2i(300,650);
	glVertex2i(300,732);
	glEnd();
		glBegin(GL_LINE_LOOP);         // line legs of the table
	glColor3f(0.0,0.0,0.0);
	glVertex2i(340,740);
	glVertex2i(340,570);
	glVertex2i(300,650);
	glVertex2i(300,732);
	glEnd();
	/////////////////////////////////
	//glBegin(GL_POLYGON);         // table computer
	//glColor3f(0.68,0.5,0.40);
	//glVertex2i(340,740);
	//glVertex2i(300,810);
	//glVertex2i(98,780);
	//glVertex2i(138,700);
	//glEnd();
		///////////////////////////////
	glBegin(GL_LINE_LOOP);         // sien table computer
	glColor3f(0.0,0.0,0.0);
	glVertex2i(340,740);
	glVertex2i(300,810);
	glVertex2i(98,780);
	glVertex2i(138,700);
	glEnd();

	////////////////////////////////
		glBegin(GL_POLYGON);         // khorp to
	glColor3f(0.68,0.5,0.40);
	glVertex2i(340,740);
	glVertex2i(340,720);
	glVertex2i(138,680);
	glVertex2i(138,700);
	glEnd();
	glBegin(GL_LINE_LOOP);         //sien khorp to
	glColor3f(0.0,0.0,0.0);
	glVertex2i(340,740);
	glVertex2i(340,720);
	glVertex2i(138,680);
	glVertex2i(138,700);
	glEnd();
			////////////////////////
	glBegin(GL_POLYGON);
	glColor3f(0.68,0.20,0.50);
	glVertex2i(215,750);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(163,740);
	glEnd();
	/////
	glBegin(GL_POLYGON);         // computer black part
	glColor3f(0.0,0.0,0.0);
	glVertex2i(204,758);
	glVertex2i(183,790);
	glVertex2i(147,780);
	glVertex2i(165,750);
	glEnd();
	glBegin(GL_LINE_LOOP);         // line computer
	glColor3f(0.0,0.0,0.0);
	glVertex2i(215,750);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(163,740);
	glEnd();
	glBegin(GL_POLYGON);         // computer
	glColor3f(0.68,0.20,0.50);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(140,840);
	glVertex2i(190,850);
	glEnd();
		glBegin(GL_POLYGON);         // computer black park
	glColor3f(0.68,0.88,0.20);
	glVertex2i(187,795);
	glVertex2i(143,785);
	glVertex2i(143,835);
	glVertex2i(187,845);
	glEnd();
	glBegin(GL_LINE_LOOP);         // line computer
	glColor3f(0.0,0.0,0.0);
	glVertex2i(190,790);
	glVertex2i(140,780);
	glVertex2i(140,840);
	glVertex2i(190,850);
	glEnd();
    glBegin(GL_POLYGON);         // book
	glColor3f(1.0,1.0,1.0);
	glVertex2i(315,750);
	glVertex2i(290,790);
	glVertex2i(240,780);
	glVertex2i(263,740);
	glEnd();
    /////////////////////////////////
	glBegin(GL_LINES);         // sien baeg  tieng 3
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(550,1020);
	glEnd();
	///////////////////////////////

	glBegin(GL_LINES);         // sien baeg  tieng 4
	glColor3f(0.0,0.0,0.0);
	glVertex2i(550,710);
	glVertex2i(780,400);
	glEnd();
	glPopMatrix();//KeyboardAssign
	glutSwapBuffers();//KeyboardAssign
	
glFlush();
}
void Keyboard(unsigned char key,int x,int y)
	{
		switch (key)
		{
		case 'r':
			glutReshapeWindow(400,300);
			glutPostRedisplay();
			break;
				case 'f':
			glutReshapeWindow(1200,700);
			glutPostRedisplay();
			break;
		}
	}


void main(int argc,char** argv)
{
		glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(50,20);
	glutInitWindowSize(1000,680);
	glutCreateWindow("My Bedroom");
	init();
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(Keyboard);
	
	glutMainLoop();
}
