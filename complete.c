#include<stdio.h>

#include<GL/glut.h>
#include<math.h>

#define HANDL 85
#define HANDH 75
#define BODYLENGTH 140
#define GYMHANDL 55
#define GYMHANDH 115
#define HEAD 50 
#define HATRECTBREADTH HEAD-20
#define HATRECTLENGTH  HEAD+5
#define HATLENGTH HEAD+50
#define HAIRLENGTH 80
#define HORN 50
#define HORNH 50
#define HORNL 50

#define GUNLENGTH 60
#define GUNHEIGHT 50

#define POLELENGTH 180 //Act1
#define BOARDWIDTH 80
#define BOARDHEIGHT 80
#define BUSSTARTX -1700
#define BUSSTARTY 0      



float startvillainx;  // Starting co-ordinated for bullet in act5
float startvillainy;
float starthatmanx;
float starthatmany;
//Protypes
//************
void act0();
void act_1();
void creditsroll();
void credits(int x,int y);
void ladyskeleton1(float xfix,float yfix);
void hatmanskeleton1(float xfix,float yfix);
void drawFilledCircle(float xcoordinate,float ycoordinate,float radius);
void act5hatman3(float xfix,float yfix);
void act5scene6(); 
void act5scene3();
void act5scene5();
void act5hatman3raisinghand(float xfix,float yfix,int a);
void act5lady3(float xfix,float yfix);
void act5villain3(float xfix,float yfix);
void act5villain3raisinghand(float xfix,float yfix,int a);
void act5(void);
void act5lady5(float  xfix,float yfix);
void drawC(float xcoordinate,float ycoordinate,float radius);
void herolegs(int xfix,int yfix);
void gymherolegs(int xfix,int yfix);
void vijdumb(int i,int j);
void herowtliftin(int i);
//void MidpointCircle(float x,float y,float radius);
void drawpoint(float x,float y);
void circlepoints(float x,float y);
//void circle(float x,float y,float radius);
void drawCircle(float xcoordinate,float ycoordinate,float radius);
//********
void drawrectangle(float xmin,float ymin,float xmax,float ymax);
//*****
void drawsimpleline(float x1,float y1,float x2,float y2);
//****
void curlyhairs(float startx,float starty);
//*****
void hatmanskeleton(float xfix,float yfix);
void skeleton(float xfix,float yfix);
void ladyskeleton(float xfix,float yfix);
void drawintro();

void bentvillian(int xfix ,int yfix,int i);

void villian
_leg(int xfix,int yfix);
void drawrectangle1(float xmin,float ymin,float xmax,float ymax);


// Hand (General)
void hand(float xfix,float yfix);
void hat(float xfix,float yfix);
void herohand(float xfix,float yfix);
void legs(float xfix,float yfix);
//******

void drawSemiCircle(float xcoordinate,float ycoordinate,float radius);
void wastetime();
 void love(float lovex,float lovey);
void drawFilledSemiCircle0180(float xcoordinate,float ycoordinate,float radius);
const float DEG2RAD = 3.14159/180;

void act1lady1(float xfix,float yfix);
void act2();
void heart(int k,int m);
void heart(int k,int m)
{
  int i,w;
  glClear(GL_COLOR_BUFFER_BIT);
  drawSemiCircle(300+k,300+m,15);
  drawSemiCircle(329+k,300+m,15);//here x= prevsemicirclex x+29
  for(i=0,w=57;i<56;i++,w--){
  drawsimpleline(285+i+k,300+m,310+k,255+m);//y1=x1+15,,,x2=y2+45,,
  drawsimpleline(345+k,300+m,310+k+w,255+m);
  glFinish();
   }
}

void drawSemiCircle(float xcoordinate,float ycoordinate,float radius)
{
   int i;
   float degInRad;;
   glBegin(GL_POLYGON);

   for (i=180;i<=360;i++) // o and 180
   {
      degInRad = i*DEG2RAD;
      glVertex2f((cos(degInRad)*radius)+xcoordinate,(sin(degInRad)*radius)+ycoordinate);
   }

   glEnd();
}

void wastetime()
 {
    int i,j;

    for(i=0;i<20000;i++)
      {
         for(j=0;j<50;j++)
          {
             //for(k=0;k<20000;k++);
	  }
      }
 }
void love(float lovex,float lovey)
   {

      //int i,j;
      drawFilledSemiCircle0180(lovex+15,lovey,15);
      drawFilledSemiCircle0180(lovex+45,lovey,15);
      glBegin(GL_POLYGON);

      glVertex2f(lovex,lovey);
      glVertex2f(lovex+30,lovey-45);
      glVertex2f(lovex+60,lovey);
      glEnd();
     // glFinish();
   }
void drawFilledSemiCircle0180(float xcoordinate,float ycoordinate,float radius)
{
   int i;
   float degInRad;;
   glBegin(GL_POLYGON);

   for (i=0;i<=180;i++)
   {
      degInRad = i*DEG2RAD;
      glVertex2f((cos(degInRad)*radius)+xcoordinate,(sin(degInRad)*radius)+ycoordinate);
   }

   glEnd();
}

void act1lady1(float xfix,float yfix)
 {
    ladyskeleton(xfix,yfix);
    hand(xfix,yfix);
    legs(xfix,yfix);
 }


//**************************************
//Draw simple point
void drawpoint(float x,float y)
 {
    glBegin(GL_POINTS);
    glVertex2d(x,y);
    glEnd();
  }


//***************************************
// Draw simple line
void drawsimpleline(float x1,float y1,float x2,float y2)
 {
   glBegin(GL_LINES); 

   glVertex2d(x1,y1);
   glVertex2d(x2,y2);
   glEnd();
 }
//**************************************
// Draw rectangle

void drawrectangle(float xmin,float ymin,float xmax,float ymax)
 {
   glBegin(GL_LINE_LOOP);
   glVertex2d(xmin,ymin);
   glVertex2d(xmax,ymin);
   glVertex2d(xmax,ymax);
   glVertex2d(xmin,ymax);
   glEnd();
 }
//************************

//dumbell tip stone
void drawrectangle1(float xmin,float ymin,float xmax,float ymax)
 {
   glBegin(GL_POLYGON);
   glVertex2d(xmin,ymin);
   glVertex2d(xmax,ymin);
   glVertex2d(xmax,ymax);
   glVertex2d(xmin,ymax);
   glEnd();
 }
// Curly hairs
void curlyhairs(float startx,float starty)
 {
    /*int i,j;
    glBegin(GL_POINTS);
    
    for(i=startx;i<HAIRLENGTH;i++)
     {
       glVertex2d(startx+i,*/
  
    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx+HAIRLENGTH,starty-15);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx+HAIRLENGTH,starty-25);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx+HAIRLENGTH,starty-35);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx+HAIRLENGTH,starty-45);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx+HAIRLENGTH,starty-55);
    glEnd();
   
    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx-HAIRLENGTH,starty-15);
    glEnd();
    
    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx-HAIRLENGTH,starty-25);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx-HAIRLENGTH,starty-35);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx-HAIRLENGTH,starty-45);
    glEnd();

    glBegin(GL_LINE);
    glVertex2d(startx,starty);
    glVertex2d(startx-HAIRLENGTH,starty-55);
    glEnd();
 }


void hat(float xfix,float yfix)
{
 drawsimpleline(xfix-(HATLENGTH),yfix+BODYLENGTH+(2*HEAD),xfix+(HATLENGTH),yfix+BODYLENGTH+(2*HEAD));// x1,y1,x2,y2
   
 drawrectangle((xfix-(HATRECTLENGTH/2)),(yfix+BODYLENGTH+(2*HEAD)),(xfix+(HATRECTLENGTH/2)),(yfix+BODYLENGTH+(2*HEAD)+HATRECTBREADTH)); //xmin,ymin,xmax,ymax


}

void villian_leg(int xfix,int yfix)
{
  drawsimpleline(xfix,yfix,xfix+GYMHANDL,yfix-GYMHANDH); //Right leg
  drawsimpleline(xfix-GYMHANDL,yfix-GYMHANDH,xfix,yfix);  // Left leg
}
//*******************************************************
 //ACT 1 starts here
void act1(void)
 {
  int i,j;
  for(i=-600;i<1500;i++)
  {
    for(j=0;j<2000;j++);
    //glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    // Hat man
    hatmanskeleton(-290+i,-300+100); // fix -80 0
    //hands(right)
    drawsimpleline(-290+i,-200+100,-350+i,-250+100);
    drawsimpleline(-350+i,-250+100,-290+i,-290+100);
    //(left)
    drawsimpleline(-290+i,-200+100,-250+i,-260+100);
    drawsimpleline(-250+i,-260+100,-180+i,-220+100);
    //board
    //  drawsimpleline(-180,-220,-180,-200);
    drawrectangle(-180+i,-220+100,270+i,90+100);
    //welcome
    
    drawsimpleline(-160+i,0+100,-140+i,-60+100);
    drawsimpleline(-140+i,-60+100,-120+i,-30+100);
    drawsimpleline(-120+i,-30+100,-100+i,-60+100);
    drawsimpleline(-100+i,-60+100,-80+i,0+100);
    //E
    drawsimpleline(-60+i,0+100,-30+i,0+100);
    drawsimpleline(-60+i,0+100,-60+i,-60+100);
    drawsimpleline(-60+i,-60+100,-30+i,-60+100);
    drawsimpleline(-60+i,-30+100,-45+i,-30+100);
    //L
    drawsimpleline(-10+i,0+100,-10+i,-60+100);
    drawsimpleline(-10+i,-60+100,20+i,-60+100);
    //C
    //  drawC(40+i,0+100,30);
    drawsimpleline(30+i,0+100,60+i,0+100);
    drawsimpleline(30+i,0+100,30+i,-60+100);
    drawsimpleline(30+i,-60+100,60+i,-60+100);
    //O
    drawCircle(100+i,-30+100,30);
    //M
    drawsimpleline(130+i,-60+100,150+i,0+100);
    drawsimpleline(150+i,0+100,160+i,-30+100);
    drawsimpleline(160+i,-30+100,170+i,0+100);
    drawsimpleline(170+i,0+100,190+i,-60+100);
    //E		
    drawsimpleline(210+i,0+100,240+i,0+100);
    drawsimpleline(210+i,0+100,210+i,-60+100);
    drawsimpleline(210+i,-60+100,240+i,-60+100);
    drawsimpleline(210+i,-30+100,225+i,-30+100);
		
    //design
    drawCircle(80+(i*1.2),-100+100,10);
    // drawCircle(310-(i*1.2),-100+100,10);
	
    //legs
    drawsimpleline(-290+i,-300+100,-230+i,-370+100);
    drawsimpleline(-230+i,-370+100,-270+i,-430+100);
    //bike
    drawCircle(-450+i,-450+100,50);
    drawCircle(-70+i,-450+100,50);
    drawsimpleline(-70+i,-450+100,-150+i,-170);
    drawsimpleline(-450+i,-450+100,-400+i,-200);
    drawsimpleline(-430+i,-200,-140+i,-200);
   
    drawsimpleline(-450+i,-450+100,-220+i,-450+100);
    drawsimpleline(-220+i,-450+100,-150+i,-300+100);
    glFinish();
	
  }
  for(i=0;i<200000;i++){};
}

   //act1 ends
   //**********************************************
   //act2 balcony starts here
void act2balcony(void)
 { 
   int i=0;
   for(i=0;i<400;i++)
  { 
     int j;
     for(j=0;j<1000;j++);
     //glClearColor(1.0,1.0,1.0,1.0);
     glClear(GL_COLOR_BUFFER_BIT);
     // Hat man
     hatmanskeleton(-390+i,-300+i); // fix -80 0
     hat(-390+i,-300+i);
     //legs(right)
     drawsimpleline(-370+i,-380+i,-320+i,-330+i);
     drawsimpleline(-390+i,-300+i,-320+i,-330+i);
     //legs(right)
     drawsimpleline(-390+i,-300+i,-340+i,-340+i);
     drawsimpleline(-390+i,-380+i,-340+i,-340+i);
     //hands(right)
     drawsimpleline(-390+i,-200+i,-350+i,-270+i);
     drawsimpleline(-350+i,-270+i,-330+i,-200+i);
     //(left)
     drawsimpleline(-390+i,-200+i,-350+i,-260+i);
     drawsimpleline(-350+i,-260+i,-330+i,-200+i);
     //stick
     drawsimpleline(300,-360,-330+i,-200+i);
     //tree
     drawsimpleline(500,-360,500,470);
     drawsimpleline(470,-360,470,470);
     //trunk
     drawsimpleline(470,200,200,300);
     drawsimpleline(470,210,200,310);
     // Lady
     ladyskeleton(800,50);
     //balcony
     drawsimpleline(950,-20,550,-20);
     drawsimpleline(550,120,550,-20);
     drawsimpleline(600,120,600,-20);
     drawsimpleline(650,120,650,-20);
     drawsimpleline(700,120,700,-20);
     drawsimpleline(750,120,750,-20);
     drawsimpleline(800,120,800,-20);
     drawsimpleline(850,120,850,-20);
     drawsimpleline(900,120,900,-20);
     drawsimpleline(550,120,950,120);
     drawsimpleline(950,-400,950,500);
     //Villain
    //skeleton(680,-50);
 
     glFinish();
  }
  i=0;
  int j;
for(i=0;i<70;i++)
{for(j=0;j<1000;j++);
   glClear(GL_COLOR_BUFFER_BIT);
   // Hat man
   hatmanskeleton(80+i,200); // fix -80 0
   hat(80+i,200);
  //legs(right)
  drawsimpleline(80+i,200,130+i,160);
   drawsimpleline(130+i,160,130+i,90);
   //legs(left)
   drawsimpleline(80+i,200,110+i,150);
  drawsimpleline(110+i,150,80+i,100);
   //hands(right)
    drawsimpleline(100+i,230,80+i,290);
   drawsimpleline(100+i,230,110+i,280);
   //(left)
    drawsimpleline(90+i,230,80+i,290);
	 drawsimpleline(90+i,230,140+i,240);
   //stick broken
    drawsimpleline(300,-360,420,-100);
	 drawsimpleline(420,-100,140,250);
   //tree
    drawsimpleline(500,-360,500,470);
     drawsimpleline(470,-360,470,470);
	 //trunk
	 drawsimpleline(470,200,200,300);
	 drawsimpleline(470,210,200,310);
   // Lady
   ladyskeleton(800,50);
   //balcony
   drawsimpleline(950,-20,550,-20);
   drawsimpleline(550,120,550,-20);
   drawsimpleline(600,120,600,-20);
   drawsimpleline(650,120,650,-20);
   drawsimpleline(700,120,700,-20);
   drawsimpleline(750,120,750,-20);
   drawsimpleline(800,120,800,-20);
   drawsimpleline(850,120,850,-20);
   drawsimpleline(900,120,900,-20);
   drawsimpleline(550,120,950,120);
   drawsimpleline(950,-400,950,500);
   //Villain
   //skeleton(680,-50);
 
   glFinish();
 }
  int k;
  printf("%d",i);
  i=130;
  k=180;
  int m=-250;
  //int n=100;
  for(i=110,k=200;k>0;)
  {
   if(k>90)
   { 
    k--;
   }
   else
   {
    k=k-2;
   }
   if(k>90)
   {
     i=i--;
   }
   // else
   // {
   //	   n--;
   //}
  for(j=0;j<1000;j++);
  //glClearColor(1.0,1.0,1.0,1.0);
  glClear(GL_COLOR_BUFFER_BIT);
  // Hat man 150 200
  hatmanskeleton1(280-i,20+k); // fix -80 0
  
  //legs(right)
  drawsimpleline(280-i,20+k,310-i,-40+k);
  drawsimpleline(310-i,-40+k,280-i,-100+k);
  //legs(left)
  drawsimpleline(280-i,20+k,290-i,-40+k);
  drawsimpleline(290-i,-40+k,270-i,-90+k);
  //hands(right)
  drawsimpleline(280-i,120+k,340-i,170+k);
  drawsimpleline(340-i,170+k,350-i,250+k);
  //(left)
  drawsimpleline(280-i,120+k,260-i,60+k);
  drawsimpleline(260-i,60+k,300-i,30+k);
  //stick broken
  drawsimpleline(300,-360,550,-350+i);
  drawsimpleline(550,-350+i,-60,-300+i);
  //tree
  drawsimpleline(500,-360,500,470);
  drawsimpleline(470,-360,470,470);
  //trunk
  drawsimpleline(470,200,200,300);
  drawsimpleline(470,210,200,310);
  //drop hat
  drawsimpleline(190,-50-m,210,100-m);
  drawsimpleline(170,0-m,180,70-m);
  drawsimpleline(180,70-m,210,70-m);
  drawsimpleline(170,0-m,200,-10-m);
  m+=5;
  // Lady
  ladyskeleton(800,50);
  //balcony
  drawsimpleline(950,-20,550,-20);
  drawsimpleline(550,120,550,-20);
  drawsimpleline(600,120,600,-20);
  drawsimpleline(650,120,650,-20);
  drawsimpleline(700,120,700,-20);
  drawsimpleline(750,120,750,-20);
  drawsimpleline(800,120,800,-20);
  drawsimpleline(850,120,850,-20);
  drawsimpleline(900,120,900,-20);
  drawsimpleline(550,120,950,120);
  drawsimpleline(950,-400,950,500);
  //Villain
  //skeleton(680,-50);
 
  glFinish();
  }
}

//Act 3 starts here
//************************************************************************
void act3(void)
{
 int i=0,j,flag=0,rep=0;
 //hero an villian weight lifting*****4
 
 while(rep<2)
   {
	rep=rep+1;
	flag = 0;
        while(flag!=1000)
          {
          	for(j=0;j<6000;j++);//hero *************
		for(i=0;i<100;i++)
		   {
		     herowtliftin(i);
		     flag++;
		   }
		  for(i=100;i>0;i--)
		   {
		     herowtliftin(i);
		     flag++;
		   }//****************
		  }
		//villian dumbells*************
		flag = 0;
	        while(flag!=2000){
		for(i=0;i<100;i++)
		  {	
			flag++;
		        j=0;
	 		vijdumb(i,j);
		  }  
		for(i=100;i>0;i--)
		  {	
			flag++;
			j=0;
	 		vijdumb(i,j);
		  }   
		for(j=0;j<100;j++)
		  {	
			i=0;
	                flag++;
	 		vijdumb(i,j);
		  } 
		for(j=100;j>0;j--)
		  {	
			i=0;
			flag++;
	 		vijdumb(i,j);
		}  
	}//**********
}//*******************************4
// dumbell fall******************5

	for(i=0;i<100;i++){
		for(j=0;j<6000;j++);
	        glClear(GL_COLOR_BUFFER_BIT);
	        // Hat man
		hatmanskeleton(80,0); // fix -80 0
		gymherolegs(80,0);
		//herohans left
		drawsimpleline(80,80,60,10);
		drawsimpleline(60,10,40,-30);
		//right
	        drawsimpleline(80,80,100,10);
	        drawsimpleline(100,10,120,-30);
	        //dumbell
	        drawsimpleline(0,-30,170,-30);
	        //tip stone
	        drawrectangle1(-10,-50,10,-10);
	        drawrectangle1(160,-50,180,-10);
	        //villian hans
	        drawsimpleline(400,80,380,10);
	        drawsimpleline(380,10,360,-30);

	        //right
	        drawsimpleline(400,80,420,10);
	        drawsimpleline(420,10,440,-30);
	        //Villain
	        skeleton(400,0);
	        villian_leg(400,0);
	        //dumbells
	        drawsimpleline(330,-30-i,380,-30-i);
	        drawsimpleline(420,-30-i,470,-30-i);

	        //vil tip stone
	        drawrectangle1(320,-50-i,330,-10-i);
	        drawrectangle1(370,-50-i,380,-10-i);
	        drawrectangle1(410,-50-i,420,-10-i);
	        drawrectangle1(460,-50-i,470,-10-i);
	    
		 
	       glFinish();
            }//******************************5
            //body show*************************6
          int k,l;
          for(l=0,j=0;l<70;l++)
            {
	      for(k=0;k<5000;k++);
	      glClear(GL_COLOR_BUFFER_BIT);
	    // Hat man
            hatmanskeleton(80,0); // fix -80 0
            gymherolegs(80,0);
            //heros left
           drawsimpleline(80,80,60,10);
           drawsimpleline(60,10,40,-30);
           //write
           drawsimpleline(80,80,100,10);
           drawsimpleline(100,10,120,-30);
           //
           //dumb bells
	   drawsimpleline(0,-30,170,-30);  
	   //tip stone
	   drawrectangle1(-10,-50,10,-10);
	   drawrectangle1(160,-50,180,-10);
	   //Villain
	   skeleton(400,0);
	   villian_leg(400,0);
	   //dumbells
	   drawsimpleline(330,-30-i,380,-30-i);
	   drawsimpleline(420,-30-i,470,-30-i);

	   //vil tip stone

	   drawrectangle1(320,-50-i,330,-10-i);
	   drawrectangle1(370,-50-i,380,-10-i);
	   drawrectangle1(410,-50-i,420,-10-i);
	   drawrectangle1(460,-50-i,470,-10-i);
		 //show off

	   if(j<30)
	     {
	       j++;
	     }
	   // left hand
	  drawsimpleline(400,80,380-l,10);
	  drawsimpleline(380-l,10,360+j,-30);
	  //right
	  drawsimpleline(400,80,420+l,10);
	  drawsimpleline(420+l,10,440-j,-30);
	  glFinish();
           }
   //*********************************6
   //hit******************************7
   int m,z;
   for(m=0;m<8000;m++);
   for(z=0;z<100;z++)
    {
      for(m=0;m<5000;m++);
          glClear(GL_COLOR_BUFFER_BIT);
	  // Hat man
	  hatmanskeleton(80,0); // fix -80 0
	  gymherolegs(80,0);
	  //hero hans right
	  drawsimpleline(80,80,60,10);
	  drawsimpleline(60,10,60+z,-30);
	  //left
	  drawsimpleline(80,80,100,10);
	  drawsimpleline(100,10,60+z,-30);
	  //dumbell      
	  drawsimpleline(-130+(z*5),-50,60+z,-30); 

	  //tip stone
	  drawrectangle1(-140+(z*5),-70,-120+(z*5),-30);
	  drawrectangle1(50+z,-50,40+z,-10);
	  //villian!!!
	  skeleton(400,0);
	  villian_leg(400,0);
	  //dumbells
	  drawsimpleline(330,-30-i,380,-30-i);
	  drawsimpleline(420,-30-i,470,-30-i);
	  // vil stone tip
	  drawrectangle1(320,-50-i,330,-10-i);
	  drawrectangle1(370,-50-i,380,-10-i);
	  drawrectangle1(410,-50-i,420,-10-i);
	  drawrectangle1(460,-50-i,470,-10-i);
	  //left hand
	  drawsimpleline(400,80,380-l,10);
	  drawsimpleline(380-l,10,360+j,-30);
	  //right
	  drawsimpleline(400,80,420+l,10);
	  drawsimpleline(420+l,10,440-j,-30);
	  glFinish();
}//*******************************7
//fly away************************8
//int i,j;
for(i=0;i<700;i++)
 {
   for(j=0;j<5000;j++);
   glClear(GL_COLOR_BUFFER_BIT);
   // Hat man
   hatmanskeleton(80,0); // fix -80 0
   gymherolegs(80,0);
   //hero hans right
   drawsimpleline(80,80,60,10);
   drawsimpleline(60,10,60+100,-30);
   //left
   drawsimpleline(80,80,100,10);
   drawsimpleline(100,10,60+100,-30);
   //dumbell      0,-30,170,-30
   drawsimpleline(-130+(100*5),-50,60+100,-30); 
   //tip stone
   drawrectangle1(-140+(z*5),-70,-120+(z*5),-30);
   drawrectangle1(50+z,-50,40+z,-10);
   //dumbells
   drawsimpleline(330,-30-100,380,-30-100);
   drawsimpleline(420,-30-100,470,-30-100);

   // vil stone tip
   drawrectangle1(320,-50-100,330,-10-100);
   drawrectangle1(370,-50-100,380,-10-100);
   drawrectangle1(410,-50-100,420,-10-100);
   drawrectangle1(460,-50-100,470,-10-100);
   //villian flying
   bentvillian(400,0,i);
   glFinish();
}
   }
//********************************8

//ACT 3 ENDS



//********************************************************************
//act6 starts**********************************************************************

   void act6(void)
 {
  int i,j;
  for(i=-600;i<1500;i++)
  {
	  for(j=0;j<2000;j++);
   //glClearColor(1.0,1.0,1.0,1.0);

   glClear(GL_COLOR_BUFFER_BIT);
   // Hat man
   hatmanskeleton(-230+i,-300+100); // fix -80 0
   //hands(right)
   drawsimpleline(-230+i,-200+100,-130+i,-130+100);
   drawsimpleline(-130+i,-130+100,-100+i,-70+100);

   //hands(left)
   drawsimpleline(-230+i,-200+100,-150+i,-280+100);
   //legs
   drawsimpleline(-230+i,-300+100,-170+i,-370+100);
   drawsimpleline(-170+i,-370+100,-210+i,-430+100);

   skeleton(-360+i,-300+100);

   //hands
   drawsimpleline(-360+i,-200+100,-440+i,-130+100);
   drawsimpleline(-440+i,-130+100,-470+i,-70+100);
   //legs
   drawsimpleline(-360+i,-300+100,-300+i,-370+100);
   drawsimpleline(-300+i,-370+100,-340+i,-430+100);

   //bike
   drawCircle(-450+i,-450+100,50);
   drawCircle(-70+i,-450+100,50);
   drawsimpleline(-70+i,-450+100,-150+i,-170);
   drawsimpleline(-450+i,-450+100,-400+i,-200);
   drawsimpleline(-430+i,-200,-140+i,-200);
   
   drawsimpleline(-450+i,-450+100,-220+i,-450+100);
   drawsimpleline(-220+i,-450+100,-150+i,-300+100);
   glFinish();
  }
 }
//************
//act6  ends

void bentvillian(int xfix ,int yfix,int i)
 {
   // glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_LINES);   //Body
   glColor3f(1.0,1.0,1.0);
   
   // Fix (-10,0)
   glVertex2d(xfix+70+i,yfix+(i/11));
   glVertex2d(xfix+i,yfix+BODYLENGTH+(i/11));
   glEnd();

   //legs left
   drawsimpleline(470+i,0+(i/11),400+i,-50+(i/11));
   drawsimpleline(400+i,-50+(i/11),370+i,-130+(i/11));
   //right
   drawsimpleline(470+i,0+(i/11),420+i,-60+(i/11));
   drawsimpleline(420+i,-60+(i/11),400+i,-130+(i/11));
   //hands right
   drawsimpleline(430+i,90+(i/11),320+i,-30+(i/11));
   drawsimpleline(430+i,90+(i/11),350+i,-40+(i/11));

   drawCircle(xfix+i,yfix+BODYLENGTH+HEAD+(i/11),HEAD); 
   //hat
   drawsimpleline(xfix-(HATLENGTH)+i,yfix+BODYLENGTH+(2*HEAD)+(i/11),xfix+(HATLENGTH)+i,yfix+BODYLENGTH+(2*HEAD)+(i/11));// x1,y1,x2,y2
   
   drawsimpleline(xfix+i,yfix+BODYLENGTH+(2*HEAD)+(i/11),xfix+i,yfix+BODYLENGTH+(2*HEAD)+HORN+(i/11));
   drawsimpleline(xfix-HORNL+i,yfix+BODYLENGTH+(2*HEAD)+(i/11)+HORNH,xfix+i,yfix+BODYLENGTH+(2*HEAD)+(i/11));
   drawsimpleline(xfix+i,yfix+BODYLENGTH+(2*HEAD)+(i/11),xfix+HORNL+i,yfix+BODYLENGTH+(2*HEAD)+HORNH+(i/11));
   glFinish();
 }
//Hat man skeleton

void vijdumb(int i,int j)
 {
   glClear(GL_COLOR_BUFFER_BIT);
   // Hat man
   hatmanskeleton(80,0); // fix -80 0
   gymherolegs(80,0);

   //herohans
   drawsimpleline(80,80,60,10);
   drawsimpleline(60,10,40,-30);
   //right
   drawsimpleline(80,80,100,10);
   drawsimpleline(100,10,120,-30);
   //
   //dumbell
   drawsimpleline(0,-30,170,-30);
   //hero tip stone
   drawrectangle1(-10,-50,10,-10);
   drawrectangle1(160,-50,180,-10);

   //villian hans
   drawsimpleline(400,80,380,10);
   drawsimpleline(380,10,360,-30+i);
   //right
   drawsimpleline(400,80,420,10);
   drawsimpleline(420,10,440,-30+j);
   //
   //dumbell
   drawsimpleline(330,-30+i,380,-30+i);
   drawsimpleline(420,-30+j,470,-30+j);
   //vil tip stone

   drawrectangle1(320,-50+i,330,-10+i);
   drawrectangle1(370,-50+i,380,-10+i);
   drawrectangle1(410,-50+j,420,-10+j);
   drawrectangle1(460,-50+j,470,-10+j);


   // Lady
   //ladyskeleton(180,0);
   
   //Villain
   
   
   
   skeleton(400,0);
   villian_leg(400,0);

   //hans
   // drawsimpleline(-290+i,-200+100,-350+i,-250+100);
   // drawsimpleline(-350+i,-250+100,-290+i,-290+100);

 
   glFinish();
   

}


void herowtliftin(int i)
  {
   int j;
   for(j=0;j<800;j++);
	  
   glClear(GL_COLOR_BUFFER_BIT);
   // Hat man
   hatmanskeleton(80,0); // fix -80 0
   gymherolegs(80,0);
   //herohans
   drawsimpleline(80,80,60,10);
   drawsimpleline(60,10,40,-30+i);
   //right
   drawsimpleline(80,80,100,10);
   drawsimpleline(100,10,120,-30+i);
   //dumbell
   drawsimpleline(0,-30+i,170,-30+i);
   //tip stone
   drawrectangle1(-10,-50+i,10,-10+i);
   drawrectangle1(160,-50+i,180,-10+i);
   //Villain
   skeleton(400,0);
   villian_leg(400,0);
   //hans
   drawsimpleline(400,80,380,10);
   drawsimpleline(380,10,360,-30);
   //right
   drawsimpleline(400,80,420,10);
   drawsimpleline(420,10,440,-30);
   //dumbell
   drawsimpleline(330,-30,380,-30);
   drawsimpleline(420,-30,470,-30);

   //vil tip stone

    drawrectangle1(320,-50,330,-10);
	 drawrectangle1(370,-50,380,-10);
    drawrectangle1(410,-50,420,-10);
	 drawrectangle1(460,-50,470,-10);
   //hans
	// drawsimpleline(-290+i,-200+100,-350+i,-250+100);
   // drawsimpleline(-350+i,-250+100,-290+i,-290+100);
   glFinish();
}

void hatmanskeleton(float xfix,float yfix)
 {
   glBegin(GL_LINES);   //Body
   glColor3f(1.0,1.0,1.0);

   // Fix (-10,0)
   glVertex2d(xfix,yfix);


   glVertex2d(xfix,yfix+BODYLENGTH);
   glEnd();
   
   drawCircle(xfix,yfix+BODYLENGTH+HEAD,HEAD);
   //circle(xfix,yfix+BODYLENGTH+(2*HEAD),HEAD);
   drawsimpleline(xfix-(HATLENGTH),yfix+BODYLENGTH+(2*HEAD),xfix+(HATLENGTH),yfix+BODYLENGTH+(2*HEAD));// x1,y1,x2,y2
   
   drawrectangle((xfix-(HATRECTLENGTH/2)),(yfix+BODYLENGTH+(2*HEAD)),(xfix+(HATRECTLENGTH/2)),(yfix+BODYLENGTH+(2*HEAD)+HATRECTBREADTH)); //xmin,ymin,xmax,ymax

   //drawsimpleline(xfix,yfix,xfix+GYMHANDL,yfix-GYMHANDH); //Right leg
   //drawsimpleline(xfix-GYMHANDL,yfix-GYMHANDH,xfix,yfix);  // Left leg
   // fuunction call xfix,yfix instead of (10.0,0.0) 
}
//***********************
void gymherolegs(int xfix,int yfix)
{
   drawsimpleline(xfix,yfix,xfix+GYMHANDL,yfix-GYMHANDH); //Right leg
   drawsimpleline(xfix-GYMHANDL,yfix-GYMHANDH,xfix,yfix);  // Left leg
}

void herolegs(int xfix,int yfix)
{
   drawsimpleline(xfix,yfix,xfix+HANDL,yfix-HANDH); //Right leg
   drawsimpleline(xfix-HANDL,yfix-HANDH,xfix,yfix);  // Left leg

}
 
void drawCircle(float xcoordinate,float ycoordinate,float radius)
{  
   int i;
   float degInRad;;
   glBegin(GL_LINE_LOOP);
   
   for (i=0;i<=360;i++)
   {
      degInRad = i*DEG2RAD;
      glVertex2f((cos(degInRad)*radius)+xcoordinate,(sin(degInRad)*radius)+ycoordinate);
   }
 
   glEnd();
}


//"C"  code
void drawC(float xcoordinate,float ycoordinate,float radius)
{  
   int i;
   float degInRad;;
   glBegin(GL_LINE_LOOP);
   
   for (i=270;i<=360;i++)
   {
      degInRad = i*DEG2RAD;
      glVertex2f((cos(degInRad)*radius)+xcoordinate,(sin(degInRad)*radius)+ycoordinate);
   }

    for (i=0;i<=90;i++)
   {
      degInRad = i*DEG2RAD;
      glVertex2f((cos(degInRad)*radius)+xcoordinate,(sin(degInRad)*radius)+ycoordinate);
   }
 
 
   glEnd();
}
   //********************
   //Other skeleton
void skeleton(float xfix,float yfix)
 {
   glBegin(GL_LINES);   //Body
   glColor3f(1.0,1.0,1.0);

   // Fix (-10,0)
   glVertex2d(xfix,yfix);
   glVertex2d(xfix,yfix+BODYLENGTH);
   glEnd();
   
   drawCircle(xfix,yfix+BODYLENGTH+HEAD,HEAD);
   //   drawsimpleline(xfix,yfix,xfix+HANDL,yfix-HANDH); //Right leg
   //  drawsimpleline(xfix-HANDL,yfix-HANDH,xfix,yfix);  // Left leg
   // drawsimpleline(xfix,BODYLENGTH/2,xfix+HANDL,BODYLENGTH/2-HANDH); // Right hand
   // drawsimpleline(xfix-HANDL,BODYLENGTH/2-HANDH,xfix,BODYLENGTH/2); // Left hand
   drawsimpleline(xfix-(HATLENGTH),yfix+BODYLENGTH+(2*HEAD),xfix+(HATLENGTH),yfix+BODYLENGTH+(2*HEAD));// x1,y1,x2,y2
   
   drawsimpleline(xfix,yfix+BODYLENGTH+(2*HEAD),xfix,yfix+BODYLENGTH+(2*HEAD)+HORN);
   drawsimpleline(xfix-HORNL,yfix+BODYLENGTH+(2*HEAD)+HORNH,xfix,yfix+BODYLENGTH+(2*HEAD));
   drawsimpleline(xfix,yfix+BODYLENGTH+(2*HEAD),xfix+HORNL,yfix+BODYLENGTH+(2*HEAD)+HORNH);

 }
//******
//Lady SKeleton
void ladyskeleton(float xfix,float yfix)
 {
   glBegin(GL_LINES);   //Body
   glColor3f(1.0,1.0,1.0);

   // Fix (-10,0)
   glVertex2d(xfix,yfix);
   glVertex2d(xfix,yfix+BODYLENGTH);
   glEnd();
   
   drawCircle(xfix,yfix+BODYLENGTH+HEAD,HEAD);
   drawsimpleline(xfix,yfix,xfix+HANDL,yfix-HANDH); //Right leg
   drawsimpleline(xfix-HANDL,yfix-HANDH,xfix,yfix);  // Left leg
   drawsimpleline(xfix,BODYLENGTH/2,xfix+HANDL,BODYLENGTH/2-HANDH); // Right hand
   drawsimpleline(xfix-HANDL,BODYLENGTH/2-HANDH,xfix,BODYLENGTH/2); // Left hand
   curlyhairs(xfix,yfix+BODYLENGTH+(2*HEAD));
 }
  
void credits(int x,int y);
void creditsroll()
{
    glClear(GL_COLOR_BUFFER_BIT);
    int i,j,k;
    //    act0();
    //char *font ="GLUT_STROKE_ROMAN";
    //len = (int) strlen(string);
    //
    //len1 = (int) strlen(inspired);
    for(i=-1000;i<2000;i++)
     {	
        for(j=0;j<500000;j++);
        credits(0,i);
        if(i==0)
         {
           for(j=0;j<300000;j++)
            {
              for(k=0;k<3000;k++);
            }
         }
        if(i==750)
         {
           for(j=0;j<300000;j++)
            {
              for(k=0;k<3000;k++);
            }
         }
     }

    
    glFlush();

}

void credits(int x,int y)
 {
    int len,i,len1,j;
    char inspired[]= "Inspired by XKCD\0";
    char string[]=  "Created and Coded by\0";
    char names[]= "Karthik and Madhu\0";
    char string1[]= "As a part of Computer Graphics Course\0";
    char string2[]= "@ NMAMIT";
    glClear(GL_COLOR_BUFFER_BIT);
    for(j=0;j<300000;j++);
	for(j=0;j<5000;j++);
    glRasterPos2f(x+100,y);
    for (i = 0;inspired[i]!='\0'; i++)
       {
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, inspired[i]);
       }
    glRasterPos2f(x,y-750);
    for (i = 0;string[i]!='\0'; i++) 
       {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
       }
    glRasterPos2f(x+200,y-800);
    for (i = 0;names[i]!='\0'; i++)
       {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, names[i]);
       }
    glRasterPos2f(x,y-850);
    for (i = 0;string1[i]!='\0'; i++)
       {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
       }
    glRasterPos2f(x+200,y-900);
    for (i = 0;string2[i]!='\0'; i++)
       {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string2[i]);
       }

    glFlush();
}

void act_1()//minus 1
{
    int i,j,k;
    char string4[]="We'll Meet Again\0";
    glClear(GL_COLOR_BUFFER_BIT);
 		
    glRasterPos2f(100,0);
    for(i = 0;string4[i]!='\0'; i++)
	{
          glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string4[i]);
        } 
    glFinish();
    for(j=0;j<300000;j++)
     { 
      for(k=0;k<3000;k++);
     }
  
    glFlush();
}
// Display function here
void disp(void)
 { 
    int j,k;
	
	// int w;
	// for(w=0;w<500000;w++);
    glClear(GL_COLOR_BUFFER_BIT);
 
    act1();
    act_1();  
    act0();
    for(j=0;j<300000;j++)
     { 
       for(k=0;k<2000;k++);
     }   
    act2();
    
    act2balcony();
    for(j=0;j<300000;j++)
     { 
       for(k=0;k<2000;k++);
     }  
    act3();
    act5();
    act6();
    creditsroll();
 }
 void MyInit()
{
  glClearColor(0,0,0,1);  // Black
  glLineWidth(2.0);
  gluOrtho2D(-500,1000,-500,500);
}
 
int main(int argc,char *argv[])
  {
     
     glutInit(&argc,argv);
     glutInitWindowSize(640,480);
     glutInitWindowPosition(200,100);
     glutCreateWindow("LETS MEET AGAIN");
     glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
     glutDisplayFunc(disp);
     MyInit();
     glutMainLoop();

     return 0;
  } 

void drawintro()
{
 glClear(GL_COLOR_BUFFER_BIT);
     hatmanskeleton(-80,0);
    legs(-80,0);
     hand(-80,0);
     ladyskeleton(290,0);
     legs(290,0);
     hand(290,0);
	      skeleton(670,0);
     legs(670,0);
     hand(670,0);
	 glFlush();

}

void act0()
 {
     int i,j,k;
     char string2[]="Hatman as Protagonist\0";
     char string1[]="Spiky as Antagonist\0";
     char string[]= "Lady Attractive\0";
     char string3[]= "Featuring\0";
     drawintro();
     for(j=0;j<30000;j++)
       { 
         for(k=0;k<3000;k++);
       }
    
     glRasterPos2f(-220,400);
     for (i = 0;string3[i]!='\0'; i++) {
     glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string3[i]);
     }   
     for(j=0;j<300000;j++)
       { 
          for(k=0;k<3000;k++);
       }
     glRasterPos2f(-220,-100);
     for (i = 0;string2[i]!='\0'; i++) {
     glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string2[i]);
       } 
     for(j=0;j<300000;j++)
       { 
       for(k=0;k<3000;k++);
       }
     glRasterPos2f(210,-100);
     for (i = 0;string2[i]!='\0'; i++)
      {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string[i]);
      }  
 
 
     glRasterPos2f(570,-100);
     for (i = 0;string2[i]!='\0'; i++) 
      {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string1[i]);
 
      } 
     glFinish();
   
 }
/*int main(int argc,char *argv[])
  {
     
     glutInit(&argc,argv);
     glutInitWindowSize(640,480);
     glutyInitWindowPosition(200,100);
     glutCreateWindow("RECTANGLE");
     glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
     glutDisplayFunc(creditsroll);
     MyInit();
     glutMainLoop();

     return 0;
  }  
*/
//maddys code************************************************************

void act2()
 {
        int i,j,k;
         //draw bus stop

        glClear(GL_COLOR_BUFFER_BIT);
        drawsimpleline(-500,0-HANDH,1000,0-HANDH); // Road
        drawsimpleline(700,0-HANDH,700,0+POLELENGTH);
                                        // Pole of board

        drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH);  // Rhombus for busstop board
        drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH+(2*BOARDHEIGHT));
        drawsimpleline(700,0+POLELENGTH+(2*BOARDHEIGHT),700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
        drawsimpleline(700,0+POLELENGTH,700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);


        act1lady1(380,0);


        //Hero comes here
        for(i=-600;i<250;i++)
        {
            for(j=0;j<20000;j++);
            //glClearColor(1.0,1.0,1.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT);

            drawsimpleline(-500,0-HANDH,1000,0-HANDH);

            if(i<(380-HANDH)||i>(380+HANDH))
              {
                               // Pole of board
                act1lady1(380,0);
              }

           // Hat man
           hatmanskeleton(-230+i,-300+100+200+150);
           hat(-230+i,-300+100+200+150);// fix -80 0
           //hands(right)
           drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
           // drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
           //(left)
           // drawsimpleline(-290+i,-200+100,-250+i,-260+100);
           // drawsimpleline(-250+i,-260+100,-180+i,-220+100);
           // board
           // drawsimpleline(-180,-220,-180,-200);
           // drawrectangle(-180+i,-220+100,250+i,90+100);
           //legs
	   	 /*  if(i==249){
	   		   int z,y;
	   		   for(z=0;z<100;z++){
           drawsimpleline(-230+i,-300+100+200+150,-170+i-z,-370+100+200+150);
           drawsimpleline(-170+i-z,-370+100+200+150,-210+i,-430+100+200+150-z);
			   }
		   break;}
		   */
           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
           //skeleton(-360+i,-300+100);

           //hands
           // drawsimpleline(-360+i,-200+100,-440+i,-130+100);
           //drawsimpleline(-440+i,-130+100,-470+i,-70+100);
           //legs
           //drawsimpleline(-360+i,-300+100,-300+i,-370+100);
           //drawsimpleline(-300+i,-370+100,-340+i,-430+100);

           //bike
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           //printf("%d",-450+100+200+150-HANDH);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           glFinish();
        }
           hatmanskeleton(-230+i,-300+100+200+150);
           hat(-230+i,-300+100+200+150);
		   //hans
           drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
           //drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
		   //legs
           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
		   //bike
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           glFinish();



         for(j=0;j<30000;j++)
         {
             for(k=0;k<20000;k++);
         }

         for(j=0;j<300;j++)
          {
              for(k=0;k<500;k++);
              glClear(GL_COLOR_BUFFER_BIT);
              drawsimpleline(-500,0-HANDH,1000,0-HANDH);
              love(-230+i+j,200+j);

              act1lady1(380,0);

              hatmanskeleton(-230+i,-300+100+200+150);
              hat(-230+i,-300+100+200+150);
			  //hans
              drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
              //drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
              drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
              drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
              drawCircle(-450+i,-450+100+200+150,75);
              drawCircle(-70+i,-450+100+200+150,75);
              drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
              drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
              drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

              drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
              drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
              glFinish();

          }

        while(i<2000)
         {
             for(j=0;j<100;j++);
            //glClearColor(1.0,1.0,1.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT);

            drawsimpleline(-500,0-HANDH,1000,0-HANDH);

            if(i<(380-HANDH)||i>(380+350+HANDH))
              {
                               // Pole of board
                act1lady1(380,0);
              }

           // Hat man
           hatmanskeleton(-230+i,-300+100+200+150);
           hat(-230+i,-300+100+200+150); // fix -80 0
           //hands(right)
           drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
           // drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
           //(left)
           //  drawsimpleline(-290+i,-200+100,-250+i,-260+100);
           // drawsimpleline(-250+i,-260+100,-180+i,-220+100);
           //board
           //  drawsimpleline(-180,-220,-180,-200);
           // drawrectangle(-180+i,-220+100,250+i,90+100);
           //legs
           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);

           //skeleton(-360+i,-300+100);

           //hands
           // drawsimpleline(-360+i,-200+100,-440+i,-130+100);
           //drawsimpleline(-440+i,-130+100,-470+i,-70+100);
           //legs
           //drawsimpleline(-360+i,-300+100,-300+i,-370+100);
           //drawsimpleline(-300+i,-370+100,-340+i,-430+100);

           //bike
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           //printf("%d",-450+100+200+150-HANDH);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           glFinish();
           i++;

         }


        //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        //Villain comes here
        for(i=-600;i<250;i++)
        {
            for(j=0;j<20000;j++);
            //glClearColor(1.0,1.0,1.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT);

            drawsimpleline(-500,0-HANDH,1000,0-HANDH);

            if(i<(380-HANDH)||i>(380+HANDH))
              {
                               // Pole of board
                act1lady1(380,0);
              }

           // Hat man
           skeleton(-230+i,-300+100+200+150);
           //hat(-230+i,-300+100+200+150);// fix -80 0
           //hands(right)
           drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
           //  drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
           //(left)
           //  drawsimpleline(-290+i,-200+100,-250+i,-260+100);
           // drawsimpleline(-250+i,-260+100,-180+i,-220+100);
           //board
           //  drawsimpleline(-180,-220,-180,-200);
           // drawrectangle(-180+i,-220+100,250+i,90+100);
           //legs
           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);

           //skeleton(-360+i,-300+100);

           //hands
           // drawsimpleline(-360+i,-200+100,-440+i,-130+100);
           //drawsimpleline(-440+i,-130+100,-470+i,-70+100);
           //legs
           //drawsimpleline(-360+i,-300+100,-300+i,-370+100);
           //drawsimpleline(-300+i,-370+100,-340+i,-430+100);

           //bike
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           //printf("%d",-450+100+200+150-HANDH);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           glFinish();
        }
           skeleton(-230+i,-300+100+200+150);
	   drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
           // drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           glFinish();

            for(j=0;j<30000;j++)
            {
             for(k=0;k<20000;k++);
            }

          printf("%d\n",-230+i);

           for(j=0;j<300;j++)
            {
              for(k=0;k<500;k++);
              glClear(GL_COLOR_BUFFER_BIT);
              drawsimpleline(-500,0-HANDH,1000,0-HANDH);

              love(-230+i+j,200+j);
              act1lady1(380,0);

              skeleton(-230+i,-300+100+200+150);
	      //hans
	      drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
              //legs
	      drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
              drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
              drawCircle(-450+i,-450+100+200+150,75);
              drawCircle(-70+i,-450+100+200+150,75);
              drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
              drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
              drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

              drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
              drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
              glFinish();
            }
         printf("%d\n",-230+i+j);

         while(i<2000)
         {
             for(j=0;j<100;j++);
            //glClearColor(1.0,1.0,1.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT);

            drawsimpleline(-500,0-HANDH,1000,0-HANDH);

            if(i<(380-HANDH)||i>(380+350+HANDH))
              {
                // Pole of board
                act1lady1(380,0);
              }

           // Hat man
           skeleton(-230+i,-300+100+200+150);
           //hat(-230+i,-300+100+200+150); // fix -80 0
           //hands(right)
           drawsimpleline(-230+i,-80+100+200,-140+i,-130+100+200);
           //  drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
           //(left)
           //  drawsimpleline(-290+i,-200+100,-250+i,-260+100);
           // drawsimpleline(-250+i,-260+100,-180+i,-220+100);
           //board
           //  drawsimpleline(-180,-220,-180,-200);
           // drawrectangle(-180+i,-220+100,250+i,90+100);
           //legs
           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);

           //skeleton(-360+i,-300+100);

           //hands
           // drawsimpleline(-360+i,-200+100,-440+i,-130+100);
           //drawsimpleline(-440+i,-130+100,-470+i,-70+100);
           //legs
           //drawsimpleline(-360+i,-300+100,-300+i,-370+100);
           //drawsimpleline(-300+i,-370+100,-340+i,-430+100);

           //bike
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           //printf("%d",-450+100+200+150-HANDH);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           glFinish();
           i++;

         }
        //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!




        //draw bus
	//bus skeleton
	drawrectangle(BUSSTARTX,BUSSTARTY-HANDH/2,BUSSTARTX+750,BUSSTARTY+400-HANDH/2); //bus
	drawSemiCircle(BUSSTARTX+165,BUSSTARTY,HANDH);   //back tyre
        drawSemiCircle(BUSSTARTX+640,BUSSTARTY,HANDH);   // front tyre
        //Advanced bus drawings
        //glEnd();

        //glBegin(GL_POLYGON);
        //drawrectangle(BUSSTARTX+750-HANDL,BUSSTARTY-HANDH/2,BUSSTARTX+750,BUSSTARTY+400-HANDH/2); // COvering rectangle in the front
        //glEnd();


        drawsimpleline(BUSSTARTX,BUSSTARTY+300,BUSSTARTX+750,BUSSTARTY+300);
        drawsimpleline(BUSSTARTX,BUSSTARTY+225,BUSSTARTX+750,BUSSTARTY+225);




 //}

        for(k=0;k<750;k=k+160)        // Bus rails
         {
            drawsimpleline(BUSSTARTX+k,BUSSTARTY+300,BUSSTARTX+k,BUSSTARTY+225);
         }
        drawrectangle(BUSSTARTX+750,20,BUSSTARTX+750+10,40); //Headlights
        drawrectangle(BUSSTARTX+750,45,BUSSTARTX+750+10,65);

        drawsimpleline(-1400,40,-1400,70);//N
	drawsimpleline(-1400,70,-1350,40);
        drawsimpleline(-1350,40,-1350,70);

        for(i=0;BUSSTARTX+i+750<614;i++)
         {
            for(j=0;j<5000;j++);

            glClear(GL_COLOR_BUFFER_BIT);
            drawrectangle(BUSSTARTX+i,BUSSTARTY,BUSSTARTX+i+750,BUSSTARTY+400); // bus

            drawsimpleline(700,0-HANDH,700,0+POLELENGTH);
            if(BUSSTARTX+i+750<(380-HANDH))
              {
                               // Pole of board
                act1lady1(380,0);
              }
            else
              {
                legs(380,0);
              }
            if(BUSSTARTX+i+750<700) // 750 length of the bus
              {

                drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH);  // Rhombus for busstop board
                drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH+(2*BOARDHEIGHT));
                drawsimpleline(700,0+POLELENGTH+(2*BOARDHEIGHT),700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
                drawsimpleline(700,0+POLELENGTH,700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
              }


            drawsimpleline(-500,0-HANDH,1000,0-HANDH); // Road

            drawsimpleline(BUSSTARTX+i,BUSSTARTY+300,BUSSTARTX+i+750,BUSSTARTY+300);   //Advanced bus drawings
            drawsimpleline(BUSSTARTX+i,BUSSTARTY+225,BUSSTARTX+i+750,BUSSTARTY+225);
            for(k=0;k<750;k=k+160)
             {
                drawsimpleline(BUSSTARTX+i+k,BUSSTARTY+300,BUSSTARTX+i+k,BUSSTARTY+225);
             }
            drawrectangle(BUSSTARTX+i+750,20,BUSSTARTX+750+i+10,40); //Headlights
            drawrectangle(BUSSTARTX+i+750,45,BUSSTARTX+750+i+10,65);

            drawsimpleline(BUSSTARTX+i+100,40,BUSSTARTX+i+100,70);//N
	        drawsimpleline(BUSSTARTX+i+100,70,BUSSTARTX+i+150,40);
            drawsimpleline(BUSSTARTX+i+150,40,BUSSTARTX+i+150,70);

            drawsimpleline(BUSSTARTX+i+150+10,40,BUSSTARTX+i+150+10,70);//E
            drawsimpleline(BUSSTARTX+i+150+10,40,BUSSTARTX+i+150+50,40);
            drawsimpleline(BUSSTARTX+i+150+10,55,BUSSTARTX+i+150+50,55);
            drawsimpleline(BUSSTARTX+i+150+10,70,BUSSTARTX+i+150+50,70);

            drawsimpleline(BUSSTARTX+i+150+50+10,70,BUSSTARTX+i+150+50+10+50,70);//T
            drawsimpleline(BUSSTARTX+i+150+50+35,40,BUSSTARTX+i+150+50+35,70);

            drawSemiCircle(BUSSTARTX+i+165,BUSSTARTY,HANDH);   //back tyre
            drawSemiCircle(BUSSTARTX+i+640,BUSSTARTY,HANDH);   // front tyre
            //glClear(GL_COLOR_BUFFER_BIT);
            glFinish();
         }
        printf("%d",i);

        drawrectangle(BUSSTARTX+i,BUSSTARTY,BUSSTARTX+i+750,BUSSTARTY+400);
        legs(380,0);//act1lady1(380,0);
        //drawsimpleline(700,0-HANDH,700,0+POLELENGTH);
                                        // Pole of board
        //drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH);  // Rhombus for busstop board
        //drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH+(2*BOARDHEIGHT));
        //drawsimpleline(700,0+POLELENGTH+(2*BOARDHEIGHT),700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
        //drawsimpleline(700,0+POLELENGTH,700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
        drawsimpleline(-500,0-HANDH,1000,0-HANDH);  //Road
        drawSemiCircle(BUSSTARTX+i+165,BUSSTARTY,HANDH);   //back tyre
        drawSemiCircle(BUSSTARTX+i+640,BUSSTARTY,HANDH);   // front tyre

        drawsimpleline(BUSSTARTX+i,BUSSTARTY+300,BUSSTARTX+i+750,BUSSTARTY+300);  //Advanced bus drawings
        drawsimpleline(BUSSTARTX+i,BUSSTARTY+225,BUSSTARTX+i+750,BUSSTARTY+225);
        for(k=0;k<750;k=k+160)//BUSSTARTX+i+
             {
                drawsimpleline(BUSSTARTX+i+k,BUSSTARTY+300,BUSSTARTX+i+k,BUSSTARTY+225);
             }
        drawrectangle(BUSSTARTX+i+750,20,BUSSTARTX+750+i+10,40); //Headlights
        drawrectangle(BUSSTARTX+i+750,45,BUSSTARTX+750+i+10,65);

        //sleep(1); // Wait for the lady to board the bus
     //   wastetime();
        for(j=0;j<30000;j++) //Delay
         { for(k=0;k<3000;k++); //Delay
         }
        while(BUSSTARTX+i<1500)//1500
          {
            for(j=0;j<10000;j++);

            glClear(GL_COLOR_BUFFER_BIT);
            drawrectangle(BUSSTARTX+i,BUSSTARTY,BUSSTARTX+i+750,BUSSTARTY+400); // bus
            i++;
            if(BUSSTARTX+i>700)
              {
             	 drawsimpleline(700,0-HANDH,700,0+POLELENGTH);
                                        // Pole of board
                 drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH);  // Rhombus for busstop board
                 drawsimpleline(700-BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT,700,0+POLELENGTH+(2*BOARDHEIGHT));
                 drawsimpleline(700,0+POLELENGTH+(2*BOARDHEIGHT),700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
                 drawsimpleline(700,0+POLELENGTH,700+BOARDWIDTH,0+POLELENGTH+BOARDHEIGHT);
              }

            drawsimpleline(-500,0-HANDH,1000,0-HANDH); // Road

            drawSemiCircle(BUSSTARTX+i+165,BUSSTARTY,HANDH);   //back tyre
            drawSemiCircle(BUSSTARTX+i+640,BUSSTARTY,HANDH);   // front tyre
            drawsimpleline(BUSSTARTX+i,BUSSTARTY+300,BUSSTARTX+i+750,BUSSTARTY+300);  //Advanced bus drawings
            drawsimpleline(BUSSTARTX+i,BUSSTARTY+225,BUSSTARTX+i+750,BUSSTARTY+225);
            for(k=0;k<750;k=k+160)//BUSSTARTX+i+
             {
                drawsimpleline(BUSSTARTX+i+k,BUSSTARTY+300,BUSSTARTX+i+k,BUSSTARTY+225);
             }
             drawrectangle(BUSSTARTX+750+i,20,BUSSTARTX+750+i+10,40); //Headlights
             drawrectangle(BUSSTARTX+750+i,45,BUSSTARTX+750+i+10,65);

             drawsimpleline(BUSSTARTX+i+100,40,BUSSTARTX+i+100,70);//N
	        drawsimpleline(BUSSTARTX+i+100,70,BUSSTARTX+i+150,40);
            drawsimpleline(BUSSTARTX+i+150,40,BUSSTARTX+i+150,70);

            drawsimpleline(BUSSTARTX+i+150+10,40,BUSSTARTX+i+150+10,70);//E
            drawsimpleline(BUSSTARTX+i+150+10,40,BUSSTARTX+i+150+50,40);
            drawsimpleline(BUSSTARTX+i+150+10,55,BUSSTARTX+i+150+50,55);
            drawsimpleline(BUSSTARTX+i+150+10,70,BUSSTARTX+i+150+50,70);

            drawsimpleline(BUSSTARTX+i+150+50+10,70,BUSSTARTX+i+150+50+10+50,70);//T
            drawsimpleline(BUSSTARTX+i+150+50+35,40,BUSSTARTX+i+150+50+35,70);

            glFinish();
          }

        drawrectangle(BUSSTARTX+i,BUSSTARTY,BUSSTARTX+i+750,BUSSTARTY+400); // bus
        drawsimpleline(-500,0-HANDH,1000,0-HANDH); // Road

        drawSemiCircle(BUSSTARTX+i+165,BUSSTARTY,HANDH);   //back tyre
        drawSemiCircle(BUSSTARTX+i+640,BUSSTARTY,HANDH);   // front tyre
        drawsimpleline(BUSSTARTX+i,BUSSTARTY+300,BUSSTARTX+i+750,BUSSTARTY+300);  //Advanced bus drawings
        drawsimpleline(BUSSTARTX+i,BUSSTARTY+225,BUSSTARTX+i+750,BUSSTARTY+225);
        for(k=0;k<750;k=k+160)
             {
                drawsimpleline(BUSSTARTX+i+k,BUSSTARTY+300,BUSSTARTX+i+k,BUSSTARTY+225);
             }
        drawrectangle(BUSSTARTX+750+i,20,BUSSTARTX+750+i+10,40); //Headlights
        drawrectangle(BUSSTARTX+750+i,45,BUSSTARTX+750+i+10,65);

       glFinish();

}
// Draw hand
void hand(float xfix,float yfix)
 {
   drawsimpleline(xfix,BODYLENGTH/2,xfix+HANDL,BODYLENGTH/2-HANDH); // Right hand
   drawsimpleline(xfix-HANDL,BODYLENGTH/2-HANDH,xfix,BODYLENGTH/2); // Left hand
 }

//*****************

//heroes hand
void herohand(float xfix,float yfix)
{
   drawsimpleline(xfix,yfix+(BODYLENGTH/2),xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH); // Right hand
   drawsimpleline(xfix-HANDL,yfix+(BODYLENGTH/2-HANDH),xfix,yfix+(BODYLENGTH/2)); // Left hand
}

void legs(float xfix,float yfix)
{
   drawsimpleline(xfix,yfix,xfix+HANDL,yfix-HANDH); //Right leg
   drawsimpleline(xfix-HANDL,yfix-HANDH,xfix,yfix);  // Left leg

}
void act5lady5(float  xfix,float yfix)
 {
     ladyskeleton(xfix,yfix);
     hand(xfix,yfix);
 }

void act5(void)
{


   /*act5scene1();
   glFinish();
   sleep(1);

   act5scene2();
   glFinish();
   sleep(1);
  */
   act5scene3();
   glFinish();
   //sleep(1);

   act5scene5();
  
   glFinish();
   //sleep(1);
 }

void act5scene3()
 {
     int k,l,m,p,q,r;
     float lengthofbullet=20;
     float hatx,haty;
     float villainx,villainy;
     int j;
     int i=0,a,b,c;
     glClear(GL_COLOR_BUFFER_BIT);

     glBegin(GL_LINE);
     drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);

     for(k=0;k<1000;k++)
      {
          for(l=0;l<1000;l++);
          glClear(GL_COLOR_BUFFER_BIT);
          drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);
          act5hatman3((-1250+k),0);
          act5lady3(180,0);
          act5villain3((1680-k),0);
		  legs((1680-k),0);
          glFinish();
      }

     act5hatman3(-1250+k,0);
     act5lady3(180,0);
     act5villain3(1680-k,0);

     //Delay to shoot
     for(p=0;p<10000;p++)
     {
         for(q=0;q<10000;q++)
          {
            for(r=0;r<10;r++);
          }
     }
     //shoot();


     for(a=0;a<70;a++)
      {
          for(b=0;b<20000;b++){
            //for(c=0;c<2000;c++);
          }
          glClear(GL_COLOR_BUFFER_BIT);
          drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);

          act5hatman3raisinghand(-250,0,a);
          drawsimpleline(-250,0+BODYLENGTH/2,-250+HANDL,0+BODYLENGTH/2-HANDH+a);

          act5lady3(180,0);

          act5villain3raisinghand(680,0,a);
          drawsimpleline(680-HANDL,0+BODYLENGTH/2-HANDH+a,680,0+BODYLENGTH/2);

          glFinish();

      }





    //Third person comes here
     for(i=-600;i<450;i++)
        {
            for(j=0;j<100;j++);
            //glClearColor(1.0,1.0,1.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT);

            drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);

            act5hatman3raisinghand(-250,0,a);
            drawsimpleline(-250,0+BODYLENGTH/2,-250+HANDL,0+BODYLENGTH/2-HANDH+a);
            act5lady3(180,0);
            act5villain3raisinghand(680,0,a);
            drawsimpleline(680-HANDL,0+BODYLENGTH/2-HANDH+a,680,0+BODYLENGTH/2);
            //glFinish();

            if(i<(380-HANDH)||i>(380+HANDH))
              {
                               // Pole of board
                act5lady3(180,0);
              }

            // Hat man
            hatmanskeleton1(-230+i,-300+100+200+150);

           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);

           //bike
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           //printf("%d",-450+100+200+150-HANDH);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
           //glFinish();

          // hatmanskeleton(-230+i,-300+100+200+150);
           //hat(-230+i,-300+100+200+150);
           //drawsimpleline(-230+i,-200+100+200,-130+i,-130+100+200);
           //drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);
           drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
           drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
           drawCircle(-450+i,-450+100+200+150,75);
           drawCircle(-70+i,-450+100+200+150,75);
           drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
           drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
           drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

           drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
           drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);

           glFinish();
        }

      while(i<2000)
       {
           glClear(GL_COLOR_BUFFER_BIT);

            drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);

            act5hatman3raisinghand(-250,0,a);
            drawsimpleline(-250,0+BODYLENGTH/2,-250+HANDL,0+BODYLENGTH/2-HANDH+a);
            //act5lady3(180,0);
            act5villain3raisinghand(680,0,a);
            drawsimpleline(680-HANDL,0+BODYLENGTH/2-HANDH+a,680,0+BODYLENGTH/2);
            //glFinish();

            for(j=0;j<100;j++);
            //glClearColor(1.0,1.0,1.0,1.0);


            /*

            if(i<(380-HANDH)||i>(380+350+HANDH))
              {
                               // Pole of board
                act1lady1(380,0);
              }
              */
            // Hat man
            hatmanskeleton1(-230+i,-300+100+200+150);

            drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
            drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);
            ladyskeleton1(-330+i,-300+100+200+150);
			 //legs(float xfix,float yfix);
            //hat(-230+i,-300+100+200+150); // fix -80 0
            //hands(right)
            //drawsimpleline(-230+i,-200+100+200,-130+i,-130+100+200);
            //drawsimpleline(-130+i,-130+100+200,-100+i,-70+100+200);

            //drawsimpleline(-230+i,-300+100+200+150,-170+i,-370+100+200+150);
            //drawsimpleline(-170+i,-370+100+200+150,-210+i,-430+100+200+150);

            //bike
            drawCircle(-450+i,-450+100+200+150,75);
            drawCircle(-70+i,-450+100+200+150,75);
            //printf("%d",-450+100+200+150-HANDH);
            drawsimpleline(-70+i,-450+100+200+150,-150+i,-170+200+150);
            drawsimpleline(-450+i,-450+100+200+150,-400+i,-200+200+150);
            drawsimpleline(-430+i,-200+200+150,-140+i,-200+200+150);

            drawsimpleline(-450+i,-450+100+200+150,-220+i,-450+100+200+150);
            drawsimpleline(-220+i,-450+100+200+150,-150+i,-300+100+200+150);
            glFinish();
            i++;

         }

       for(q=0;q<415;q++)
    {
        for(p=0;p<10000;p++);

        glClear(GL_COLOR_BUFFER_BIT);

        love(-250+q,0+BODYLENGTH/2);
        love(680-q,0+BODYLENGTH/2);

        drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);

        act5hatman3raisinghand(-250,0,a);
        drawsimpleline(-250,0+BODYLENGTH/2,-250+HANDL,0+BODYLENGTH/2-HANDH+a);
        //act5lady3(180,0);
        act5villain3raisinghand(680,0,a);
        drawsimpleline(680-HANDL,0+BODYLENGTH/2-HANDH+a,680,0+BODYLENGTH/2);
        glFinish();

    }

        for(q=0;q<370;q++)
     {
         for(p=0;p<100;p++);
         glClear(GL_COLOR_BUFFER_BIT);

         glBegin(GL_POLYGON);
         glVertex2f(210,100-q);
         glVertex2f(240,100-q);
         glVertex2f(240,75-q);
         glVertex2f(210,75-q);
         glEnd();
         drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);

         act5hatman3raisinghand(-250,0,a);
         drawsimpleline(-250,0+BODYLENGTH/2,-250+HANDL,0+BODYLENGTH/2-HANDH+a);
         //act5lady3(180,0);
         act5villain3raisinghand(680,0,a);
         drawsimpleline(680-HANDL,0+BODYLENGTH/2-HANDH+a,680,0+BODYLENGTH/2);
         glFinish();
     }

   
     

     
  }
void ladyskeleton1(float xfix,float yfix)
 {
  glBegin(GL_LINES);   //Body
   glColor3f(1.0,1.0,1.0);

   // Fix (-10,0)
   glVertex2d(xfix,yfix);
   glVertex2d(xfix,yfix+BODYLENGTH);
   glEnd();

   drawCircle(xfix,yfix+BODYLENGTH+HEAD,HEAD);      // Head
   drawsimpleline(xfix,yfix,xfix+HANDL,yfix-HANDH); //Right leg
   drawsimpleline(xfix-HANDL,yfix-HANDH,xfix,yfix);  // Left leg

   curlyhairs(xfix,yfix+BODYLENGTH+(2*HEAD));
 }

  void hatmanskeleton1(float xfix,float yfix)
 {
   glBegin(GL_LINES);   //Body
   glColor3f(1.0,1.0,1.0);

   // Fix (-10,0)
   glVertex2d(xfix,yfix);
   glVertex2d(xfix,yfix+BODYLENGTH);
   glEnd();

   drawCircle(xfix,yfix+BODYLENGTH+HEAD,HEAD);
  
}
void act5scene5()
 {
    int i,j,k,p,q,r;
    float degInRad,tempx,tempy,xcentre,ycentre;  // for calculating centre of circle given end of body in the loop
   
     for(p=0;p<200;p++)
      {
          for(q=0;q<50000;q++);
          glClear(GL_COLOR_BUFFER_BIT);
          drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);
          act5hatman3((-250+p),0);
          //act5lady3(180,0);
          //skeletonfordeath(180,0,i);
         // curlyhairs(180,0+i+(2*HEAD)-k);
          act5villain3((680-p),0);
		  legs((680-p),0);
          glFinish();
      }

    for(p=0;p<100000;p++);
     {
         for(q=0;q<100000;q++)
          {
            for(r=0;r<5000;r++);
          }
     }
    for(p=0;p<1000;p++)
      {
          for(q=0;q<500000;q++);
          glClear(GL_COLOR_BUFFER_BIT);
          drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);
          act5hatman3((-200-p),0);
          //act5lady3(180,0);
          //skeletonfordeath(180,0,i);
//          curlyhairs(180,0+i+(2*HEAD)-k);
          act5villain3((630+p),0);
		  legs((630+p),0);
          glFinish();
      }

 // act5scene6(); 
  
}

void act5scene6()
 {
    int q;
    for(q=1000;q>-2000;q--)
     {
         for(q=0;q<500000;q++);
         glClear(GL_COLOR_BUFFER_BIT);
         drawsimpleline(-500,0-HANDH-20,1000,0-HANDH-20);
         //printf("Hello\n");
         act5villain3raisinghand(0+q,0,70);
         glFinish();
    }
 }

void act5hatman3(float xfix,float yfix)
 {
   // Hat man
   int i,j;
   i=0;
   float lengthofbullet=20;
   float hatx,haty;
   //################################
   hatmanskeleton(xfix,yfix); // fix -80 0
   hand(xfix,yfix);
   legs(xfix,yfix);
   hat(xfix,yfix);
   // Draw gun

   drawrectangle(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH,xfix+HANDL+70,yfix+BODYLENGTH/2-HANDH+15);

   glBegin(GL_LINE_STRIP);
   glVertex2d(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH);
   glVertex2d(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH-30);
   glVertex2d(xfix+HANDL+20,yfix+(BODYLENGTH/2)-HANDH-30);
   glVertex2d(xfix+HANDL+20,yfix+(BODYLENGTH/2)-HANDH);
   glEnd();

   drawsimpleline(xfix-HANDL-20,yfix-HANDH,xfix+HANDL+20,yfix-HANDH);  //Skate board
   drawFilledCircle(xfix-HANDL,yfix-HANDH-10,10);
   drawFilledCircle(xfix+HANDL,yfix-HANDH-10,10);

   starthatmanx=xfix+HANDL+GUNLENGTH+10;
   starthatmany=yfix+(BODYLENGTH/2)-HANDH+GUNHEIGHT-10;


   //!!!!!!!!!!!!!!!!!
   //drawsimpleline(starthatmanx,starthatmany,starthatmanx+20,starthatmany+20);     // hatman shoots--------- TESTING................................
   hatx=starthatmanx+20;
   haty=starthatmany+20;

  
   //!!!!!!!!!!!!!!!!!

 }
//*******************
//Hatman3 here
void act5hatman3raisinghand(float xfix,float yfix,int a)
 {
   // Hat man
   int i,j;
   i=0;
   float lengthofbullet=20;
   float hatx,haty;
   //################################
   hatmanskeleton(xfix,yfix); // fix -80 0
   //hand(xfix,yfix);
   legs(xfix,yfix);
   hat(xfix,yfix);

   drawsimpleline(xfix-HANDL,yfix+BODYLENGTH/2-HANDH,xfix,yfix+BODYLENGTH/2);
   // Draw gun

  

   drawrectangle(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH+a,xfix+HANDL+70,yfix+BODYLENGTH/2-HANDH+a+15);
   //glBegin(GL_LINE_LOOP);
   glBegin(GL_LINE_STRIP);
   glVertex2d(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH+a);
   glVertex2d(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH-30+a);
   glVertex2d(xfix+HANDL+20,yfix+(BODYLENGTH/2)-HANDH-30+a);
   glVertex2d(xfix+HANDL+20,yfix+(BODYLENGTH/2)-HANDH+a);
   glEnd();

   drawsimpleline(xfix-HANDL-20,yfix-HANDH,xfix+HANDL+20,yfix-HANDH);  //Skate board
   drawFilledCircle(xfix-HANDL,yfix-HANDH-10,10);
   drawFilledCircle(xfix+HANDL,yfix-HANDH-10,10);

   starthatmanx=xfix+HANDL+GUNLENGTH+10;
   starthatmany=yfix+(BODYLENGTH/2)-HANDH+GUNHEIGHT-10;


   //!!!!!!!!!!!!!!!!!
   //drawsimpleline(starthatmanx,starthatmany,starthatmanx+20,starthatmany+20);     // hatman shoots--------- TESTING................................
   hatx=starthatmanx+20;
   haty=starthatmany+20;

   // drawsimpleline(starthatmanx,starthatmany,hatx,haty);     // hatman shoots

 
   //!!!!!!!!!!!!!!!!!


 }
//*******************
// Lady3 here
void act5lady3(float xfix,float yfix)
 {
    // Lady
   ladyskeleton(xfix,yfix);
   hand(xfix,yfix);
 }
//********

// Villain3 here
void act5villain3(float xfix,float yfix)
 {
   //Villain
    int i,j;
    i=0;
    float lengthofbullet=20;//###############################################
    float villainx,villainy;

    skeleton(xfix,yfix);
    hand(xfix,yfix);
    //hand(-250,0);

    //Hand rise


   drawrectangle(xfix-HANDL,yfix+BODYLENGTH/2-HANDH,xfix-HANDL-70,yfix+BODYLENGTH/2-HANDH+15);
   // Lower gUN ANTI CLOCKWISE
   glBegin(GL_LINE_LOOP);
   glVertex2d(xfix-HANDL,yfix+(BODYLENGTH/2)-HANDH);
   glVertex2d(xfix-HANDL,yfix+(BODYLENGTH/2)-HANDH-30);
   glVertex2d(xfix-HANDL-20,yfix+(BODYLENGTH/2)-HANDH-30);
   glVertex2d(xfix-HANDL-20,yfix+(BODYLENGTH/2)-HANDH);
   glEnd();


   drawsimpleline(xfix-HANDL-20,yfix-HANDH,xfix+HANDL+20,yfix-HANDH);  //Skate board
   drawFilledCircle(xfix-HANDL,yfix-HANDH-10,10);
   drawFilledCircle(xfix+HANDL,yfix-HANDH-10,10);

   startvillainx=xfix-HANDL-GUNLENGTH-10-20;
   startvillainy=yfix+(BODYLENGTH/2)-HANDH+GUNHEIGHT-10;
   //!!!!!!!!!!!!!!

   villainx=startvillainx-20;
   villainy=startvillainy+20;

   

 }
//*****************

void act5villain3raisinghand(float xfix,float yfix,int a)
 {
   //Villain
    int i,j;
    i=0;
    float lengthofbullet=20;//###############################################
    float villainx,villainy;

    skeleton(xfix,yfix);
    //hand(xfix,yfix);
    //hand(-250,0);
    legs(xfix,yfix);
    //Hand rise
    drawsimpleline(xfix+HANDL,yfix+BODYLENGTH/2-HANDH,xfix,yfix+BODYLENGTH/2);

   // Draw gun
   //drawsimpleline(xfix+HANDL,yfix+(BODYLENGTH/2)-HANDH,xfix+HANDL+GUNLENGTH,yfix+(BODYLENGTH/2)-HANDH+GUNHEIGHT);
  


   drawrectangle(xfix-HANDL-70,yfix+BODYLENGTH/2-HANDH+a,xfix-HANDL,yfix+(BODYLENGTH/2)-HANDH+a+15);
   glBegin(GL_LINE_STRIP);                     // Lower gUN ANTI CLOCKWISE
   glVertex2d(xfix-HANDL,yfix+(BODYLENGTH/2)-HANDH+a);
   glVertex2d(xfix-HANDL,yfix+(BODYLENGTH/2)-HANDH-30+a);
   glVertex2d(xfix-HANDL-20,yfix+(BODYLENGTH/2)-HANDH-30+a);
   glVertex2d(xfix-HANDL-20,yfix+(BODYLENGTH/2)-HANDH+a);
   glEnd();


   drawsimpleline(xfix-HANDL-20,yfix-HANDH,xfix+HANDL+20,yfix-HANDH);  //Skate board
   drawFilledCircle(xfix-HANDL,yfix-HANDH-10,10);
   drawFilledCircle(xfix+HANDL,yfix-HANDH-10,10);

   startvillainx=xfix-HANDL-GUNLENGTH-10-20;
   startvillainy=yfix+(BODYLENGTH/2)-HANDH+GUNHEIGHT-10;
   //!!!!!!!!!!!!!!

   villainx=startvillainx-20;
   villainy=startvillainy+20;

   
 }

void drawFilledCircle(float xcoordinate,float ycoordinate,float radius)
{
   int i;
   float degInRad;;
   glBegin(GL_POLYGON);

   for (i=0;i<=360;i++)
   {
      degInRad = i*DEG2RAD;
      glVertex2f((cos(degInRad)*radius)+xcoordinate,(sin(degInRad)*radius)+ycoordinate);
   }

   glEnd();
}

/*void creditsroll()
{
    glClear(GL_COLOR_BUFFER_BIT);
    int i,j,k;
//    act0();
    //char *font ="GLUT_STROKE_ROMAN";
    //len = (int) strlen(string);
    //
    //len1 = (int) strlen(inspired);
    for(i=-1000;i<2000;i++)
     {	for(j=0;j<500000;j++);
        credits(0,i);
        if(i==0)
         {
           for(j=0;j<300000;j++)
            {
              for(k=0;k<3000;k++);
            }
         }
        if(i==750)
         {
           for(j=0;j<300000;j++)
            {
              for(k=0;k<3000;k++);
            }
         }
     }

    
  glFlush();

}

void credits(int x,int y)
 {
    int len,i,len1,j;
    char inspired[]= "Inspired by XKCD\0";
    char string[]=  "Created and Coded by\0";
    char names[]= "Karthik and Madhu\0";
    char string1[]= "As a part of Computer Graphics Course\0";
    char string2[]= "@ NMAMIT";
    glClear(GL_COLOR_BUFFER_BIT);
    for(j=0;j<300000;j++);
	for(j=0;j<5000;j++);
    glRasterPos2f(x+100,y);
    for (i = 0;inspired[i]!='\0'; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, inspired[i]);
      }
  glRasterPos2f(x,y-750);
  for (i = 0;string[i]!='\0'; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string[i]);
  }
  glRasterPos2f(x+200,y-800);
  for (i = 0;names[i]!='\0'; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, names[i]);
  }
  glRasterPos2f(x,y-850);
  for (i = 0;string1[i]!='\0'; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string1[i]);
  }
  glRasterPos2f(x+200,y-900);
  for (i = 0;string2[i]!='\0'; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string2[i]);
  }
  glFlush();
}*/

//*****************

