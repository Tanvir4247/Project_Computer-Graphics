#include <iostream>
#include<stdio.h>
#include<math.h>
#include<iostream>
#include <iostream>
#include <unistd.h>
#include <time.h>
#include <GL\glut.h>



void myInit()
{

    glClearColor(128.0f / 255.0f, 0, 0, 1.0f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 500, 0, 600, -10.0, 10.0);


}
void circle(float x, float y, float r, float a, float b, float c)
{
    float x1, y1, x2, y2;
    float radius = r;
    x1 = x;
    y1 = y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(a, b, c);
    glVertex2f(x1, y1);
    float angle;
    for (angle = 0;angle <= 360;angle += 0.5)
    {
        x2 = x1 + sin((angle * 3.1416) / 180) * radius;
        y2 = y1 + cos((angle * 3.1416) / 180) * radius;
        glVertex2f(x2, y2);
    }
    glEnd();
}

float x = 0, y = 300, z = 0, c2 = -200;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); //background
    glColor3ub(188, 227, 241);
    glVertex2f(0, 0);
    glVertex2f(1000, 0);
    glVertex2f(1000, 600);
    glVertex2f(0, 600);
    glEnd();





    glBegin(GL_QUADS);//grass dark down
    glColor3ub(34, 139, 34);
    glVertex2f(0, 0);
    glVertex2f(1000, 0);
    glVertex2f(1000, 70);
    glVertex2f(0, 70);
    glEnd();

    glBegin(GL_QUADS);//grass light down
    glColor3ub(0, 100, 0);
    glVertex2f(0, 0);
    glVertex2f(500, 0);
    glVertex2f(500, 30);
    glVertex2f(0, 30);
    glEnd();


    glBegin(GL_QUADS);//whiteborderdown
    glColor3ub(255, 255, 255);
    glVertex2f(0, 60);
    glVertex2f(500, 60);
    glVertex2f(500, 70);
    glVertex2f(0, 70);
    glEnd();

    glLineWidth(40.0f);//0
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(0, 60);
    glVertex2f(0, 70);
    glEnd();

    glLineWidth(40.0f);//1
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(40, 60);
    glVertex2f(40, 70);
    glEnd();

    glLineWidth(40.0f);//2
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(80, 60);
    glVertex2f(80, 70);
    glEnd();

    glLineWidth(40.0f);//3
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(120, 60);
    glVertex2f(120, 70);
    glEnd();

    glLineWidth(40.0f);//4
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(160, 60);
    glVertex2f(160, 70);
    glEnd();

    glLineWidth(40.0f);//5
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(200, 60);
    glVertex2f(200, 70);
    glEnd();

    glLineWidth(40.0f);//6
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(240, 60);
    glVertex2f(240, 70);
    glEnd();

    glLineWidth(40.0f);//7
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(280, 60);
    glVertex2f(280, 70);
    glEnd();

    glLineWidth(40.0f);//8
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(320, 60);
    glVertex2f(320, 70);
    glEnd();

    glLineWidth(40.0f);//9
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(360, 60);
    glVertex2f(360, 70);
    glEnd();

    glLineWidth(40.0f);//10
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(400, 60);
    glVertex2f(400, 70);
    glEnd();

    glLineWidth(40.0f);//11
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(440, 60);
    glVertex2f(440, 70);
    glEnd();

    glLineWidth(40.0f);//12
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(480, 60);
    glVertex2f(480, 70);
    glEnd();






    glBegin(GL_QUADS);//whiteborderup
    glColor3ub(255, 255, 255);
    glVertex2f(0, 180);
    glVertex2f(1000, 180);
    glVertex2f(1000, 190);
    glVertex2f(0, 190);
    glEnd();

    glLineWidth(40.0f);//0
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(0, 180);
    glVertex2f(0, 190);
    glEnd();

    glLineWidth(40.0f);//1
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(40, 180);
    glVertex2f(40, 190);
    glEnd();

    glLineWidth(40.0f);//2
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(80, 180);
    glVertex2f(80, 190);
    glEnd();

    glLineWidth(40.0f);//3
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(120, 180);
    glVertex2f(120, 190);
    glEnd();

    glLineWidth(40.0f);//4
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(160, 180);
    glVertex2f(160, 190);
    glEnd();

    glLineWidth(40.0f);//5
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(200, 180);
    glVertex2f(200, 190);
    glEnd();

    glLineWidth(40.0f);//6
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(240, 180);
    glVertex2f(240, 190);
    glEnd();

    glLineWidth(40.0f);//7
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(280, 180);
    glVertex2f(280, 190);
    glEnd();

    glLineWidth(40.0f);//8
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(320, 180);
    glVertex2f(320, 190);
    glEnd();

    glLineWidth(40.0f);//9
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(360, 180);
    glVertex2f(360, 190);
    glEnd();

    glLineWidth(40.0f);//10
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(400, 180);
    glVertex2f(400, 190);
    glEnd();

    glLineWidth(40.0f);//11
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(440, 180);
    glVertex2f(440, 190);
    glEnd();

    glLineWidth(40.0f);//12
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(480, 180);
    glVertex2f(480, 190);
    glEnd();




    glBegin(GL_QUADS);//grass dark up
    glColor3ub(0, 100, 0);
    glVertex2f(0, 190);
    glVertex2f(1000, 190);
    glVertex2f(1000, 210);
    glVertex2f(0, 210);
    glEnd();

    glBegin(GL_QUADS);//grass light up
    glColor3ub(34, 139, 34);
    glVertex2f(0, 210);
    glVertex2f(1000, 210);
    glVertex2f(1000, 240);
    glVertex2f(0, 240);
    glEnd();

    circle(450, 540, 20, 255, 228, 132);//sun



    circle(402 + z, 460, 14, 246, 246, 246);//cloud1
    circle(380 + z, 460, 20, 246, 246, 246);
    circle(355 + z, 458, 13, 246, 246, 246);
    z += 0.8;
    if (z > 200) {
        z = -400;
    }

    circle(408 + c2, 540, 18, 240, 240, 235);//cloud 2
    circle(380 + c2, 540, 26, 240, 240, 235);
    circle(350 + c2, 536, 18, 240, 240, 235);
    c2 += 0.1;
    if (c2 > 200) {
        c2 = -400;
    }




    glBegin(GL_QUADS);//bulding middle
    glColor3ub(249, 243, 242);
    glVertex2f(200, 240);
    glVertex2f(300, 240);
    glVertex2f(300, 400);
    glVertex2f(200, 400);
    glEnd();

    glBegin(GL_QUADS);//bulding middle roof
    glColor3ub(249, 243, 235);
    glVertex2f(220, 420);
    glVertex2f(305, 420);
    glVertex2f(305, 400);
    glVertex2f(220, 400);
    glEnd();

    glBegin(GL_QUADS);//bulding middle roof side view
    glColor3ub(230, 230, 230);
    glVertex2f(195, 420);
    glVertex2f(220, 420);
    glVertex2f(220, 400);
    glVertex2f(195, 400);
    glEnd();


    glBegin(GL_QUADS);//bulding middle roof ash dark
    glColor3ub(169, 155, 155);
    glVertex2f(220, 395);
    glVertex2f(300, 395);
    glVertex2f(300, 400);
    glVertex2f(220, 400);
    glEnd();

    glBegin(GL_QUADS);//bulding middle roof side ash dark
    glColor3ub(130, 130, 130);
    glVertex2f(220, 395);
    glVertex2f(200, 395);
    glVertex2f(200, 400);
    glVertex2f(220, 400);
    glEnd();

    glBegin(GL_QUADS);//bulding side dark
    glColor3ub(228, 212, 213);
    glVertex2f(200, 240);
    glVertex2f(220, 240);
    glVertex2f(220, 395);
    glVertex2f(200, 395);
    glEnd();

    glBegin(GL_QUADS);//bulding window 1 blue from up
    glColor3ub(28, 86, 150);
    glVertex2f(295, 375);
    glVertex2f(230, 375);
    glVertex2f(230, 385);
    glVertex2f(295, 385);
    glEnd();

    glBegin(GL_QUADS);//bulding window 2 blue from up
    glColor3ub(28, 86, 150);
    glVertex2f(295, 358);
    glVertex2f(230, 358);
    glVertex2f(230, 370);
    glVertex2f(295, 370);
    glEnd();

    glBegin(GL_QUADS);//bulding window 3 blue from up
    glColor3ub(28, 86, 150);
    glVertex2f(295, 353);
    glVertex2f(230, 353);
    glVertex2f(230, 341);
    glVertex2f(295, 341);
    glEnd();

    glBegin(GL_QUADS);//bulding window 3 blue from up
    glColor3ub(28, 86, 150);
    glVertex2f(295, 322);
    glVertex2f(230, 322);
    glVertex2f(230, 334);
    glVertex2f(295, 334);
    glEnd();

    glBegin(GL_QUADS);//bulding window 4 blue from up
    glColor3ub(28, 86, 150);
    glVertex2f(295, 316);
    glVertex2f(230, 316);
    glVertex2f(230, 304);
    glVertex2f(295, 304);
    glEnd();


    glBegin(GL_QUADS);//bulding window 5 blue from up
    glColor3ub(28, 86, 150);
    glVertex2f(295, 286);
    glVertex2f(230, 286);
    glVertex2f(230, 298);
    glVertex2f(295, 298);
    glEnd();//middle building ends here
    //////////////////////////////////









    /////////////


    glBegin(GL_QUADS);//TALL bulding 
    glColor3ub(91, 180, 194);
    glVertex2f(90, 240);
    glVertex2f(170, 240);
    glVertex2f(170, 480);
    glVertex2f(90, 480);
    glEnd();

    glBegin(GL_QUADS);//TALL bulding ROOF 
    glColor3ub(83, 172, 187);
    glVertex2f(90, 480);
    glVertex2f(173, 480);
    glVertex2f(173, 490);
    glVertex2f(90, 490);
    glEnd();

    glBegin(GL_QUADS);//TALL  bulding SIDE
    glColor3ub(80, 168, 181);
    glVertex2f(90, 240);
    glVertex2f(70, 240);
    glVertex2f(70, 480);
    glVertex2f(90, 480);
    glEnd();

    glBegin(GL_QUADS);//TALL  bulding SIDE ROOF DARK
    glColor3ub(71, 160, 174);
    glVertex2f(90, 490);
    glVertex2f(67, 490);
    glVertex2f(67, 480);
    glVertex2f(90, 480);
    glEnd();

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(130, 240);
    glVertex2f(130, 480);
    glEnd(); //MIDDLE LINE

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(110, 240);
    glVertex2f(110, 480);
    glEnd();//LEFT LINE

    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(150, 240);
    glVertex2f(150, 480);
    glEnd();//RIGHT LINE

    glLineWidth(3.0f);//ROOF  LINE 1
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 450);
    glVertex2f(170, 450);
    glEnd();

    glLineWidth(3.0f);//2
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 420);
    glVertex2f(170, 420);
    glEnd();

    glLineWidth(3.0f);//3
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 390);
    glVertex2f(170, 390);
    glEnd();


    glLineWidth(3.0f);//4
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 360);
    glVertex2f(170, 360);
    glEnd();

    glLineWidth(3.0f);//5
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 330);
    glVertex2f(170, 330);
    glEnd();


    glLineWidth(3.0f);//6
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 300);
    glVertex2f(170, 300);
    glEnd();

    glLineWidth(3.0f);//7
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 270);
    glVertex2f(170, 270);
    glEnd();

    glLineWidth(3.0f);//8
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(90, 240);
    glVertex2f(170, 240);
    glEnd();
    //tall building ends
    //////////////////




    glBegin(GL_QUADS);//bulding right roof
    glColor3ub(131, 210, 210);

    glVertex2f(380, 400);
    glVertex2f(450, 400);
    glVertex2f(415, 440);
    glVertex2f(345, 440);
    glEnd();

    glBegin(GL_QUADS);//bulding right front view
    glColor3ub(78, 183, 200);
    glVertex2f(380, 400);
    glVertex2f(450, 400);
    glVertex2f(450, 240);
    glVertex2f(380, 240);
    glEnd();

    glBegin(GL_QUADS);//bulding right side view
    glColor3ub(46, 144, 172);
    glVertex2f(380, 400);
    glVertex2f(345, 440);
    glVertex2f(345, 240);
    glVertex2f(380, 240);
    glEnd();

    glLineWidth(3.0f);//1 vertical 
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(397, 400);
    glVertex2f(397, 240);
    glEnd();

    glLineWidth(3.0f);//2
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(414, 400);
    glVertex2f(414, 240);
    glEnd();

    glLineWidth(3.0f);//3
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(431, 400);
    glVertex2f(431, 240);
    glEnd();


    glLineWidth(3.0f);//horizontal 1
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(380, 368);
    glVertex2f(450, 368);
    glEnd();

    glLineWidth(3.0f);//horizontal 2
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(380, 336);
    glVertex2f(450, 336);
    glEnd();

    glLineWidth(3.0f);//horizontal 3
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(380, 304);
    glVertex2f(450, 304);
    glEnd();

    glLineWidth(3.0f);//horizontal 4
    glBegin(GL_LINES);
    glColor3ub(81, 154, 169);
    glVertex2f(380, 272);
    glVertex2f(450, 272);
    glEnd();

    ///////////////


    glBegin(GL_QUADS);//bulding front left down
    glColor3ub(247, 228, 213);
    glVertex2f(140, 220);
    glVertex2f(260, 220);
    glVertex2f(260, 218);
    glVertex2f(140, 218);
    glEnd();

    glBegin(GL_QUADS);//bulding front left down
    glColor3ub(216, 181, 146);
    glVertex2f(140, 216);
    glVertex2f(260, 216);
    glVertex2f(260, 218);
    glVertex2f(140, 218);
    glEnd();

    glBegin(GL_QUADS);//bulding front left down
    glColor3ub(176, 130, 91);
    glVertex2f(140, 216);
    glVertex2f(260, 216);
    glVertex2f(260, 212);
    glVertex2f(140, 212);
    glEnd();



    glBegin(GL_QUADS);//bulding front left light
    glColor3ub(219, 95, 59);
    glVertex2f(150, 220);
    glVertex2f(250, 220);
    glVertex2f(250, 315);
    glVertex2f(150, 315);
    glEnd();

    glBegin(GL_QUADS);//bulding front left door light
    glColor3ub(226, 220, 175);
    glVertex2f(210, 220);
    glVertex2f(240, 220);
    glVertex2f(240, 295);
    glVertex2f(210, 295);
    glEnd();

    glBegin(GL_QUADS);//bulding front left door light
    glColor3ub(130, 50, 25);
    glVertex2f(213, 220);
    glVertex2f(237, 220);
    glVertex2f(237, 291);
    glVertex2f(213, 291);
    glEnd();





    glBegin(GL_QUADS);//bulding front left dark
    glColor3ub(179, 66, 36);
    glVertex2f(150, 330);
    glVertex2f(250, 330);
    glVertex2f(250, 315);
    glVertex2f(150, 315);
    glEnd();

    glBegin(GL_QUADS);//bulding front left roof light
    glColor3ub(221, 194, 173);
    glVertex2f(148, 330);
    glVertex2f(252, 330);
    glVertex2f(252, 335);
    glVertex2f(148, 335);
    glEnd();

    glBegin(GL_QUADS);//bulding front left roof dark
    glColor3ub(160, 118, 84);
    glVertex2f(148, 338);
    glVertex2f(252, 338);
    glVertex2f(252, 335);
    glVertex2f(148, 335);
    glEnd();

    glBegin(GL_QUADS);//bulding front left roof light above
    glColor3ub(226, 200, 175);
    glVertex2f(146, 338);
    glVertex2f(254, 338);
    glVertex2f(254, 345);
    glVertex2f(146, 345);
    glEnd();

    glBegin(GL_QUADS);//bulding front left roof lighter above
    glColor3ub(245, 233, 209);
    glVertex2f(146, 348);
    glVertex2f(254, 348);
    glVertex2f(254, 345);
    glVertex2f(146, 345);
    glEnd();

    glBegin(GL_QUADS);//bulding front left board
    glColor3ub(183, 164, 147);
    glVertex2f(176, 348);
    glVertex2f(224, 348);
    glVertex2f(224, 370);
    glVertex2f(176, 370);
    glEnd();

    glBegin(GL_QUADS);//bulding front left board for writting
    glColor3ub(245, 233, 209);
    glVertex2f(178, 351);
    glVertex2f(222, 351);
    glVertex2f(222, 366);
    glVertex2f(178, 366);
    glEnd();

    glBegin(GL_QUADS);//bulding front left window red
    glColor3ub(130, 50, 25);
    glVertex2f(160, 240);
    glVertex2f(198, 240);
    glVertex2f(198, 299);
    glVertex2f(160, 299);
    glEnd();

    glBegin(GL_QUADS);//bulding front left window 1
    glColor3ub(169, 199, 225);
    glVertex2f(162, 243);
    glVertex2f(172, 243);
    glVertex2f(172, 296);
    glVertex2f(162, 296);
    glEnd();

    glBegin(GL_QUADS);//bulding front left window 2
    glColor3ub(169, 199, 225);
    glVertex2f(184, 243);
    glVertex2f(174, 243);
    glVertex2f(174, 296);
    glVertex2f(184, 296);
    glEnd();

    glBegin(GL_QUADS);//bulding front left window 3
    glColor3ub(169, 199, 225);
    glVertex2f(186, 243);
    glVertex2f(196, 243);
    glVertex2f(196, 296);
    glVertex2f(186, 296);
    glEnd();

    glLineWidth(5.5f); //door handle
    glBegin(GL_LINES);
    glColor3ub(227, 147, 48);
    glVertex2f(216, 260);
    glVertex2f(216, 245);
    glEnd();
    circle(216, 253, 2.3, 247, 177, 88);

    ///////building left front ends



////////////////////starts


    glBegin(GL_QUADS); // building front left down
    glColor3ub(247, 228, 213);
    glVertex2f(290, 220);
    glVertex2f(410, 220);
    glVertex2f(410, 218);
    glVertex2f(290, 218);
    glEnd();

    glBegin(GL_QUADS); // building front left down
    glColor3ub(216, 181, 146);
    glVertex2f(290, 216);
    glVertex2f(410, 216);
    glVertex2f(410, 218);
    glVertex2f(290, 218);
    glEnd();

    glBegin(GL_QUADS); // building front left down
    glColor3ub(176, 130, 91);
    glVertex2f(290, 216);
    glVertex2f(410, 216);
    glVertex2f(410, 212);
    glVertex2f(290, 212);
    glEnd();

    glBegin(GL_QUADS); // building front left light
    glColor3ub(179, 209, 235);
    glVertex2f(300, 220);
    glVertex2f(400, 220);
    glVertex2f(400, 315);
    glVertex2f(300, 315);
    glEnd();

    glBegin(GL_QUADS); // building front left door light
    glColor3ub(15, 20, 20);
    glVertex2f(360, 220);
    glVertex2f(390, 220);
    glVertex2f(390, 295);
    glVertex2f(360, 295);
    glEnd();

    glBegin(GL_QUADS); // building front left door light
    glColor3ub(130, 50, 25);
    glVertex2f(363, 220);
    glVertex2f(387, 220);
    glVertex2f(387, 291);
    glVertex2f(363, 291);
    glEnd();

    glBegin(GL_QUADS); // building front left dark
    glColor3ub(132, 173, 201);
    glVertex2f(300, 330);
    glVertex2f(400, 330);
    glVertex2f(400, 315);
    glVertex2f(300, 315);
    glEnd();

    glBegin(GL_QUADS); // building front left roof light
    glColor3ub(221, 194, 173);
    glVertex2f(298, 330);
    glVertex2f(402, 330);
    glVertex2f(402, 335);
    glVertex2f(298, 335);
    glEnd();

    glBegin(GL_QUADS); // building front left roof dark
    glColor3ub(160, 118, 84);
    glVertex2f(298, 338);
    glVertex2f(402, 338);
    glVertex2f(402, 335);
    glVertex2f(298, 335);
    glEnd();

    glBegin(GL_QUADS); // building front left roof light above
    glColor3ub(226, 200, 175);
    glVertex2f(296, 338);
    glVertex2f(404, 338);
    glVertex2f(404, 345);
    glVertex2f(296, 345);
    glEnd();

    glBegin(GL_QUADS); // building front left roof lighter above
    glColor3ub(245, 233, 209);
    glVertex2f(296, 348);
    glVertex2f(404, 348);
    glVertex2f(404, 345);
    glVertex2f(296, 345);
    glEnd();



    glBegin(GL_QUADS); // building front left roof highest
    glColor3ub(161, 189, 204);
    glVertex2f(310, 348);
    glVertex2f(390, 348);
    glVertex2f(390, 372);
    glVertex2f(310, 372);
    glEnd();


    glBegin(GL_QUADS); // building front left board
    glColor3ub(183, 164, 147);
    glVertex2f(326, 358);
    glVertex2f(374, 358);
    glVertex2f(374, 380);
    glVertex2f(326, 380);
    glEnd();



    glBegin(GL_QUADS); // building front left board for writing
    glColor3ub(245, 233, 209);
    glVertex2f(328, 361);
    glVertex2f(372, 361);
    glVertex2f(372, 376);
    glVertex2f(328, 376);
    glEnd();

    glBegin(GL_QUADS); // building front left window red
    glColor3ub(15, 20, 20);
    glVertex2f(310, 240);
    glVertex2f(348, 240);
    glVertex2f(348, 299);
    glVertex2f(310, 299);
    glEnd();

    glBegin(GL_QUADS); // building front left window 1
    glColor3ub(113, 140, 157);
    glVertex2f(312, 243);
    glVertex2f(322, 243);
    glVertex2f(322, 296);
    glVertex2f(312, 296);
    glEnd();

    glBegin(GL_QUADS); // building front left window 2
    glColor3ub(113, 140, 157);
    glVertex2f(334, 243);
    glVertex2f(324, 243);
    glVertex2f(324, 296);
    glVertex2f(334, 296);
    glEnd();

    glBegin(GL_QUADS); // building front left window 3
    glColor3ub(113, 140, 157);
    glVertex2f(336, 243);
    glVertex2f(346, 243);
    glVertex2f(346, 296);
    glVertex2f(336, 296);
    glEnd();

    glLineWidth(2.5f); // door handle
    glBegin(GL_LINES);
    glColor3ub(15, 15, 22);
    glVertex2f(310, 279);
    glVertex2f(348, 279);
    glEnd();

    glLineWidth(2.5f); // door handle
    glBegin(GL_LINES);
    glColor3ub(15, 15, 22);
    glVertex2f(310, 259);
    glVertex2f(348, 259);
    glEnd();


    glLineWidth(5.5f); // door handle
    glBegin(GL_LINES);
    glColor3ub(227, 147, 48);
    glVertex2f(366, 260);
    glVertex2f(366, 245);
    glEnd();
    circle(366, 253, 2.3, 247, 177, 88);






    ///////////
    glBegin(GL_QUADS);//road
    glColor3ub(38, 39, 39);
    glVertex2f(0, 70);
    glVertex2f(1000, 70);
    glVertex2f(1000, 180);
    glVertex2f(0, 180);
    glEnd();


    glLineWidth(2.5f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0, 125);
    glVertex2f(50, 125);
    glEnd();

    glLineWidth(2.5f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(100, 125);
    glVertex2f(150, 125);
    glEnd();

    glLineWidth(2.5f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(200, 125);
    glVertex2f(250, 125);
    glEnd();

    glLineWidth(2.5f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(300, 125);
    glVertex2f(350, 125);
    glEnd();

    glLineWidth(2.5f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(400, 125);
    glVertex2f(450, 125);
    glEnd();

    glLineWidth(2.5f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(490, 125);
    glVertex2f(500, 125);
    glEnd();









    //car


    glBegin(GL_POLYGON);//red car
    glColor3ub(220, 20, 60);
    glVertex2f(13 + y, 140);
    glVertex2f(160 + y, 140);
    glVertex2f(160 + y, 165);
    glVertex2f(142 + y, 165);
    glVertex2f(120 + y, 185);
    glVertex2f(75 + y, 185);
    glVertex2f(73 + y, 165);
    glVertex2f(27 + y, 165);
    glEnd();


    circle(60 + y, 140, 9, 153, 157, 160);
    circle(124 + y, 140, 9, 153, 157, 160);



    glBegin(GL_POLYGON);
    glColor3ub(29, 90, 63);//green car
    glVertex2f(62 + x, 95);
    glVertex2f(155 + x, 95);
    glVertex2f(155 + x, 120);
    glVertex2f(132 + x, 120);
    glVertex2f(125 + x, 140);
    glVertex2f(85 + x, 140);
    glVertex2f(47 + x, 120);
    glVertex2f(52 + x, 120);
    glEnd();

    circle(80 + x, 97, 9, 153, 157, 160);
    circle(139 + x, 97, 9, 153, 157, 160);

    x += 1;
    y -= 1.5;

    if (x > 500) {
        x = -200;
    }
    if (y < -180) {
        y = 500;
    }







    glBegin(GL_POLYGON);//tree right below
    glColor3ub(90, 136, 114);
    glVertex2f(375, 105);
    glVertex2f(420, 50);
    glVertex2f(330, 50);
    glEnd();

    glBegin(GL_POLYGON);// tree right below
    glColor3ub(106, 163, 126);
    glVertex2f(375, 130);
    glVertex2f(417, 74);
    glVertex2f(333, 74);
    glEnd();

    glBegin(GL_POLYGON);//tree right below
    glColor3ub(113, 181, 134);
    glVertex2f(375, 153);
    glVertex2f(412, 98);
    glVertex2f(338, 98);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(133, 94, 66);
    glVertex2f(375, 10);
    glVertex2f(375, 50);
    glEnd(); //tree root right below
    //////

    glBegin(GL_POLYGON);//tree middle below
    glColor3ub(90, 136, 114);
    glVertex2f(225, 105);
    glVertex2f(270, 50);
    glVertex2f(180, 50);
    glEnd();

    glBegin(GL_POLYGON);// tree middle below
    glColor3ub(106, 163, 126);
    glVertex2f(225, 130);
    glVertex2f(267, 74);
    glVertex2f(183, 74);
    glEnd();

    glBegin(GL_POLYGON);//tree middle below
    glColor3ub(113, 181, 134);
    glVertex2f(225, 153);
    glVertex2f(262, 98);
    glVertex2f(188, 98);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(133, 94, 66);
    glVertex2f(225, 10);
    glVertex2f(225, 50);
    glEnd(); //tree root middle below


    ////
    glBegin(GL_POLYGON);//tree left below
    glColor3ub(90, 136, 114);
    glVertex2f(75, 95);
    glVertex2f(120, 50);
    glVertex2f(30, 50);
    glEnd();

    glBegin(GL_POLYGON);// tree left below
    glColor3ub(97, 139, 119);
    glVertex2f(75, 120);
    glVertex2f(117, 74);
    glVertex2f(33, 74);
    glEnd();

    glBegin(GL_POLYGON);//tree left below
    glColor3ub(113, 181, 134);
    glVertex2f(75, 143);
    glVertex2f(112, 98);
    glVertex2f(38, 98);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(133, 94, 66);
    glVertex2f(75, 10);
    glVertex2f(75, 50);
    glEnd(); //tree root left



    glBegin(GL_POLYGON);// tree left above
    glColor3ub(97, 139, 119);
    glVertex2f(35, 420);
    glVertex2f(62, 294);
    glVertex2f(8, 294);
    glEnd();

    glBegin(GL_POLYGON);//tree left above
    glColor3ub(113, 181, 134);
    glVertex2f(35, 473);
    glVertex2f(60, 348);
    glVertex2f(10, 348);
    glEnd();

    glBegin(GL_POLYGON);//tree root left above
    glColor3ub(107, 73, 43);
    glVertex2f(28, 230);
    glVertex2f(42, 230);
    glVertex2f(40, 294);
    glVertex2f(30, 294);

    glEnd();



    glFlush();




}

void update(int val) {
    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 780);
    glutInitWindowPosition(150, 0);
    glutCreateWindow("CITY SCENARIO");
    myInit();
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    glutMainLoop();
}