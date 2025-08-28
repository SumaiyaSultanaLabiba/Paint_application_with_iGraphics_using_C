# include "iGraphics.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int x=0, y=0, blenderRed=255, blenderGreen=255, blenderBlue=255, canvastype=0, canvasdrawing=0, q=0, qq=0, r=0, rr=0, p=0, pp=0, radius=3, radi=2, i=0, b, a=0, m, c, d, e=0;
int brushx, brushy, penx, peny, eraserx, erasery, linex1, linex2, liney1, liney2, specialdrawing=0, specialtype=0, mmxx, mmyy, ee=0, tx, ty, t, signal;
int circled, circlee, circlex1, circlex2, circley1, circley2;
int ellipsed, ellipsee, ellipsex1, ellipsex2, ellipsey1, ellipsey2;
int pentad, pentae, pentax1, pentax2, pentay1, pentay2;
int heptad, heptae, heptax1, heptax2, heptay1, heptay2;
int tetrad, tetrae, tetrax1, tetrax2, tetray1, tetray2;
int hexad, hexae, hexax1, hexax2, hexay1, hexay2;
int rectangled, rectanglee, rectanglex1, rectanglex2, rectangley1, rectangley2;
int triangled, trianglee, trianglex1, trianglex2, triangley1, triangley2;
double xa[3], ya[3];
int trid, trie, trix1, trix2, triy1, triy2;
double xaa[3], yaa[3];
int filld, fille, fillx, filly;



//function iDraw() is called again and again by the system
void iDraw() {
     //iClear();

    //canvas paper
    if(canvasdrawing==1)
	{if(canvastype==1) {iShowBMP(31, 51, "cartridge-canvas.bmp"); iSetColor(57, 255, 20); iRectangle(48, 638, 135, 104);}
	if(canvastype==2) {iShowBMP(31, 51, "watercolor-canvas.bmp"); iSetColor(57, 255, 20); iRectangle(198, 638, 135, 104);}
	if(canvastype==3) {iShowBMP(31, 51, "newsprint-canvas.bmp"); iSetColor(57, 255, 20); iRectangle(348, 638, 135, 104);}
	if(canvastype==4) {iShowBMP(31, 51, "bristol-canvas.bmp"); iSetColor(57, 255, 20); iRectangle(498, 638, 135, 104);}
	if(canvastype==5) {iShowBMP(31, 51, "sketch-canvas.bmp"); iSetColor(57, 255, 20); iRectangle(648, 638, 135, 104);} canvasdrawing=0;}


    //for brush drawing with signal from iMouseMove() function
    if(p==1)
    {
        {iSetColor(blenderRed, blenderGreen, blenderBlue);
         iFilledCircle((brushx), (brushy), radius);}
    }


    //plain text with text editor
    if(t==2)
    {
        iSetColor(blenderRed, blenderGreen, blenderBlue);

        //small letter
        if(signal==1) {iText(tx, ty, "a", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==2) {iText(tx, ty, "b", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==3) {iText(tx, ty, "c", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==4) {iText(tx, ty, "d", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==5) {iText(tx, ty, "e", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==6) {iText(tx, ty, "f", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==7) {iText(tx, ty, "g", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==8) {iText(tx, ty, "h", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==9) {iText(tx, ty, "i", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==10) {iText(tx, ty, "j", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==11) {iText(tx, ty, "k", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==12) {iText(tx, ty, "l", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==13) {iText(tx, ty, "m", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==14) {iText(tx, ty, "n", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==15) {iText(tx, ty, "o", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==16) {iText(tx, ty, "p", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==17) {iText(tx, ty, "q", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==18) {iText(tx, ty, "r", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==19) {iText(tx, ty, "s", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==20) {iText(tx, ty, "t", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==21) {iText(tx, ty, "u", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==22) {iText(tx, ty, "v", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==23) {iText(tx, ty, "w", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==24) {iText(tx, ty, "x", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==25) {iText(tx, ty, "y", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==26) {iText(tx, ty, "z", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}

        //capital letter
        if(signal==27) {iText(tx, ty, "A", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==28) {iText(tx, ty, "B", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==29) {iText(tx, ty, "C", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==30) {iText(tx, ty, "D", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==31) {iText(tx, ty, "E", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==32) {iText(tx, ty, "F", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==33) {iText(tx, ty, "G", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==34) {iText(tx, ty, "H", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==35) {iText(tx, ty, "I", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==36) {iText(tx, ty, "J", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==37) {iText(tx, ty, "K", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==38) {iText(tx, ty, "L", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==39) {iText(tx, ty, "M", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==40) {iText(tx, ty, "N", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==41) {iText(tx, ty, "O", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==42) {iText(tx, ty, "P", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==43) {iText(tx, ty, "Q", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==44) {iText(tx, ty, "R", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==45) {iText(tx, ty, "S", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==46) {iText(tx, ty, "T", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==47) {iText(tx, ty, "U", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==48) {iText(tx, ty, "V", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==49) {iText(tx, ty, "W", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==50) {iText(tx, ty, "X", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==51) {iText(tx, ty, "Y", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==52) {iText(tx, ty, "Z", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}

        //special characters
        if(signal==53) {iText(tx, ty, " ", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==54) {iText(tx, ty, ".", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==55) {iText(tx, ty, ",", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==56) {iText(tx, ty, "!", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
        if(signal==57) {iText(tx, ty, "?", GLUT_BITMAP_TIMES_ROMAN_24); t=1; signal=0;}
    }


    //for pen drawing with signal from iMouseMove function
    if(pp==1)
    {
        {iSetColor(blenderRed, blenderGreen, blenderBlue);
         iFilledCircle((penx), (peny), radi);}
    }



    //for drawing any linear shape
    if(d==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    iLine(linex1, liney1, linex2, liney2); d=1;}


    //for drawing circle
    if(circled==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    if(fille==1) iFilledCircle((circlex1+circlex2)/2, (circley1+circley2)/2, sqrt(pow((circlex1-circlex2), 2)+pow((circley1-circley2), 2))/2);
    else iCircle((circlex1+circlex2)/2, (circley1+circley2)/2, sqrt(pow((circlex1-circlex2), 2)+pow((circley1-circley2), 2))/2);
    circled=1;}


    //for drawing ellipse
    if(ellipsed==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    if(fille==1) iFilledEllipse((ellipsex1+ellipsex2)/2, (ellipsey1+ellipsey2)/2, (ellipsex2-ellipsex1)/2, (ellipsex2-ellipsex1)/4);
    else iEllipse((ellipsex1+ellipsex2)/2, (ellipsey1+ellipsey2)/2, (ellipsex2-ellipsex1)/2, (ellipsex2-ellipsex1)/4);
    ellipsed=1;}


    //for drawing penta
    if(pentad==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    if(fille==1) iFilledCircle((pentax1+pentax2)/2, (pentay1+pentay2)/2, sqrt(pow((pentax1-pentax2), 2)+pow((pentay1-pentay2), 2))/2, 5);
    else iCircle((pentax1+pentax2)/2, (pentay1+pentay2)/2, sqrt(pow((pentax1-pentax2), 2)+pow((pentay1-pentay2), 2))/2, 5);
    pentad=1;}


    //for drawing hexa
    if(hexad==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    if(fille==1) iFilledCircle((hexax1+hexax2)/2, (hexay1+hexay2)/2, sqrt(pow((hexax1-hexax2), 2)+pow((hexay1-hexay2), 2))/2, 6);
    else iCircle((hexax1+hexax2)/2, (hexay1+hexay2)/2, sqrt(pow((hexax1-hexax2), 2)+pow((hexay1-hexay2), 2))/2, 6);
    hexad=1;}


    //for drawing hepta
    if(heptad==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    if(fille==1) iFilledCircle((heptax1+heptax2)/2, (heptay1+heptay2)/2, sqrt(pow((heptax1-heptax2), 2)+pow((heptay1-heptay2), 2))/2, 7);
    else iCircle((heptax1+heptax2)/2, (heptay1+heptay2)/2, sqrt(pow((heptax1-heptax2), 2)+pow((heptay1-heptay2), 2))/2, 7);
    heptad=1;}


    //for drawing tetra
    if(tetrad==2)
    {iSetColor(blenderRed, blenderGreen, blenderBlue);
    if(fille==1) iFilledCircle((tetrax1+tetrax2)/2, (tetray1+tetray2)/2, sqrt(pow((tetrax1-tetrax2), 2)+pow((tetray1-tetray2), 2))/2, 4);
    else iCircle((tetrax1+tetrax2)/2, (tetray1+tetray2)/2, sqrt(pow((tetrax1-tetrax2), 2)+pow((tetray1-tetray2), 2))/2, 4);
    tetrad=1;}


    //for drawing rectangle
    if(rectangled==2)
    {
       iSetColor(blenderRed, blenderGreen, blenderBlue);
       if(fille==1) iFilledRectangle(rectanglex1, rectangley2, (rectanglex2-rectanglex1), (rectangley1-rectangley2));
       else iRectangle(rectanglex1, rectangley2, (rectanglex2-rectanglex1), (rectangley1-rectangley2));
       rectangled=1;
    }

    //for drawing right angled triangle
    if(triangled==2)
    {
        iSetColor(blenderRed, blenderGreen, blenderBlue);
        xa[0]=trianglex1; xa[1]=trianglex2; xa[2]=trianglex1; ya[0]=triangley1; ya[1]=triangley2; ya[2]=triangley2;
        if(fille==1) iFilledPolygon(xa, ya, 3);
        else iPolygon(xa, ya, 3);
        triangled=1;
    }

    //for drawing triangle
    if(trid==2)
    {
        iSetColor(blenderRed, blenderGreen, blenderBlue);
        xaa[0]=trix1; xaa[1]=trix2; xaa[2]=(2*trix1)-trix2; yaa[0]=triy1; yaa[1]=triy2; yaa[2]=triy2;
        if(fille==1) iFilledPolygon(xaa, yaa, 3);
        else iPolygon(xaa, yaa, 3);
        trid=1;
    }

    //for erasing with signal from iMouseMove() function
    if(a==1)
    {

        {if(canvastype==1) {iShowBMP((eraserx), (erasery), "cartridge_eraser.bmp");}
         if(canvastype==2) {iShowBMP((eraserx), (erasery), "watercolor_eraser.bmp");}
         if(canvastype==3) {iShowBMP((eraserx), (erasery), "newsprint_eraser.bmp");}
         if(canvastype==4) {iShowBMP((eraserx), (erasery), "bristol_eraser.bmp");}
         if(canvastype==5) {iShowBMP((eraserx), (erasery), "sketch_eraser.bmp");}
        }
    }


    //for removing the circle at (0,0) position after brush drawing
    iSetColor(0, 0, 0);
    iFilledCircle(0, 0, 35);


    //blender color
	iSetColor(blenderRed, blenderGreen, blenderBlue);
	iFilledRectangle(1400, 510, 90, 150);


	//color palette
	iSetColor(51, 0, 0);
	iFilledRectangle(1005, 665, 25, 15);
	iSetColor(51, 25, 0);
	iFilledRectangle(1035, 665, 25, 15);
	iSetColor(51, 51, 0);
	iFilledRectangle(1065, 665, 25, 15);
	iSetColor(25, 51, 0);
	iFilledRectangle(1095, 665, 25, 15);
	iSetColor(0, 51, 0);
	iFilledRectangle(1125, 665, 25, 15);
	iSetColor(0, 51, 25);
	iFilledRectangle(1155, 665, 25, 15);
	iSetColor(0, 51, 51);
	iFilledRectangle(1185, 665, 25, 15);
	iSetColor(0, 25, 51);
	iFilledRectangle(1215, 665, 25, 15);
	iSetColor(0, 0, 51);
	iFilledRectangle(1245, 665, 25, 15);
	iSetColor(25, 0, 51);
	iFilledRectangle(1275, 665, 25, 15);
	iSetColor(51, 0, 51);
	iFilledRectangle(1305, 665, 25, 15);
	iSetColor(51, 0, 25);
	iFilledRectangle(1335, 665, 25, 15);
	iSetColor(0, 0, 0);
	iFilledRectangle(1365, 665, 25, 15);
	iSetColor(102, 0, 0);
	iFilledRectangle(1005, 645, 25, 15);
	iSetColor(102, 51, 0);
	iFilledRectangle(1035, 645, 25, 15);
	iSetColor(102, 102, 0);
	iFilledRectangle(1065, 645, 25, 15);
	iSetColor(51, 102, 0);
	iFilledRectangle(1095, 645, 25, 15);
	iSetColor(0, 102, 0);
	iFilledRectangle(1125, 645, 25, 15);
	iSetColor(0, 102, 51);
	iFilledRectangle(1155, 645, 25, 15);
	iSetColor(0, 102, 102);
	iFilledRectangle(1185, 645, 25, 15);
	iSetColor(0, 51, 102);
	iFilledRectangle(1215, 645, 25, 15);
	iSetColor(0, 0, 102);
	iFilledRectangle(1245, 645, 25, 15);
	iSetColor(51, 0, 102);
	iFilledRectangle(1275, 645, 25, 15);
	iSetColor(102, 0, 102);
	iFilledRectangle(1305, 645, 25, 15);
	iSetColor(102, 0, 51);
	iFilledRectangle(1335, 645, 25, 15);
	iSetColor(32, 32, 32);
	iFilledRectangle(1365, 645, 25, 15);
	iSetColor(153, 0, 0);
	iFilledRectangle(1005, 625, 25, 15);
	iSetColor(153, 76, 0);
	iFilledRectangle(1035, 625, 25, 15);
	iSetColor(153, 153, 0);
	iFilledRectangle(1065, 625, 25, 15);
    iSetColor(76, 153, 0);
	iFilledRectangle(1095, 625, 25, 15);
	iSetColor(0, 153, 0);
	iFilledRectangle(1125, 625, 25, 15);
	iSetColor(0, 153, 76);
	iFilledRectangle(1155, 625, 25, 15);
	iSetColor(0, 153, 153);
	iFilledRectangle(1185, 625, 25, 15);
	iSetColor(0, 76, 153);
	iFilledRectangle(1215, 625, 25, 15);
	iSetColor(0, 0, 153);
	iFilledRectangle(1245, 625, 25, 15);
	iSetColor(76, 0, 153);
	iFilledRectangle(1275, 625, 25, 15);
	iSetColor(153, 0, 153);
	iFilledRectangle(1305, 625, 25, 15);
	iSetColor(153, 0, 76);
	iFilledRectangle(1335, 625, 25, 15);
	iSetColor(64, 64, 64);
	iFilledRectangle(1365, 625, 25, 15);
	iSetColor(204, 0, 0);
	iFilledRectangle(1005, 605, 25, 15);
	iSetColor(204, 102, 0);
	iFilledRectangle(1035, 605, 25, 15);
	iSetColor(204, 204, 0);
	iFilledRectangle(1065, 605, 25, 15);
	iSetColor(102, 204, 0);
	iFilledRectangle(1095, 605, 25, 15);
	iSetColor(0, 204, 0);
	iFilledRectangle(1125, 605, 25, 15);
	iSetColor(0, 204, 102);
	iFilledRectangle(1155, 605, 25, 15);
	iSetColor(0, 204, 204);
	iFilledRectangle(1185, 605, 25, 15);
	iSetColor(0, 102, 204);
	iFilledRectangle(1215, 605, 25, 15);
	iSetColor(0, 0, 204);
	iFilledRectangle(1245, 605, 25, 15);
	iSetColor(102, 0, 204);
	iFilledRectangle(1275, 605, 25, 15);
	iSetColor(204, 0, 204);
	iFilledRectangle(1305, 605, 25, 15);
	iSetColor(204, 0, 102);
	iFilledRectangle(1335, 605, 25, 15);
	iSetColor(96, 96, 96);
	iFilledRectangle(1365, 605, 25, 15);
	iSetColor(255, 0, 0);
	iFilledRectangle(1005, 585, 25, 15);
	iSetColor(255, 128, 0);
	iFilledRectangle(1035, 585, 25, 15);
	iSetColor(255, 255, 0);
	iFilledRectangle(1065, 585, 25, 15);
	iSetColor(128, 255, 0);
	iFilledRectangle(1095, 585, 25, 15);
	iSetColor(0, 255, 0);
	iFilledRectangle(1125, 585, 25, 15);
	iSetColor(0, 255, 128);
	iFilledRectangle(1155, 585, 25, 15);
    iSetColor(0, 255, 255);
	iFilledRectangle(1185, 585, 25, 15);
	iSetColor(0, 128, 255);
	iFilledRectangle(1215, 585, 25, 15);
	iSetColor(0, 0, 255);
	iFilledRectangle(1245, 585, 25, 15);
	iSetColor(127, 0, 255);
	iFilledRectangle(1275, 585, 25, 15);
	iSetColor(255, 0, 255);
	iFilledRectangle(1305, 585, 25, 15);
	iSetColor(255, 0, 127);
	iFilledRectangle(1335, 585, 25, 15);
	iSetColor(128, 128, 128);
	iFilledRectangle(1365, 585, 25, 15);
	iSetColor(255, 51, 51);
	iFilledRectangle(1005, 565, 25, 15);
	iSetColor(255, 153, 51);
	iFilledRectangle(1035, 565, 25, 15);
	iSetColor(255, 255, 51);
	iFilledRectangle(1065, 565, 25, 15);
	iSetColor(153, 255, 51);
	iFilledRectangle(1095, 565, 25, 15);
	iSetColor(51, 255, 51);
	iFilledRectangle(1125, 565, 25, 15);
	iSetColor(51, 255, 153);
	iFilledRectangle(1155, 565, 25, 15);
	iSetColor(51, 255, 255);
	iFilledRectangle(1185, 565, 25, 15);
	iSetColor(51, 153, 255);
	iFilledRectangle(1215, 565, 25, 15);
	iSetColor(51, 51, 255);
	iFilledRectangle(1245, 565, 25, 15);
	iSetColor(153, 51, 255);
	iFilledRectangle(1275, 565, 25, 15);
	iSetColor(255, 51, 255);
	iFilledRectangle(1305, 565, 25, 15);
	iSetColor(255, 51, 153);
	iFilledRectangle(1335, 565, 25, 15);
	iSetColor(160, 160, 160);
	iFilledRectangle(1365, 565, 25, 15);
	iSetColor(255, 102, 102);
	iFilledRectangle(1005, 545, 25, 15);
	iSetColor(255, 178, 102);
	iFilledRectangle(1035, 545, 25, 15);
	iSetColor(255, 255, 102);
	iFilledRectangle(1065, 545, 25, 15);
	iSetColor(178, 255, 102);
	iFilledRectangle(1095, 545, 25, 15);
	iSetColor(102, 255, 102);
	iFilledRectangle(1125, 545, 25, 15);
	iSetColor(102, 255, 178);
	iFilledRectangle(1155, 545, 25, 15);
	iSetColor(102, 255, 255);
	iFilledRectangle(1185, 545, 25, 15);
	iSetColor(102, 178, 255);
	iFilledRectangle(1215, 545, 25, 15);
	iSetColor(102, 102, 255);
	iFilledRectangle(1245, 545, 25, 15);
    iSetColor(178, 102, 255);
	iFilledRectangle(1275, 545, 25, 15);
	iSetColor(255, 102, 255);
	iFilledRectangle(1305, 545, 25, 15);
	iSetColor(255, 102, 178);
	iFilledRectangle(1335, 545, 25, 15);
	iSetColor(192, 192, 192);
	iFilledRectangle(1365, 545, 25, 15);
	iSetColor(255, 153, 153);
	iFilledRectangle(1005, 525, 25, 15);
	iSetColor(255, 204, 153);
	iFilledRectangle(1035, 525, 25, 15);
	iSetColor(255, 255, 153);
	iFilledRectangle(1065, 525, 25, 15);
	iSetColor(204, 255, 153);
	iFilledRectangle(1095, 525, 25, 15);
	iSetColor(153, 255, 153);
	iFilledRectangle(1125, 525, 25, 15);
	iSetColor(153, 255, 204);
	iFilledRectangle(1155, 525, 25, 15);
	iSetColor(153, 255, 255);
	iFilledRectangle(1185, 525, 25, 15);
	iSetColor(153, 204, 255);
	iFilledRectangle(1215, 525, 25, 15);
	iSetColor(153, 153, 255);
	iFilledRectangle(1245, 525, 25, 15);
	iSetColor(204, 153, 255);
	iFilledRectangle(1275, 525, 25, 15);
	iSetColor(255, 153, 255);
	iFilledRectangle(1305, 525, 25, 15);
	iSetColor(255, 153, 204);
	iFilledRectangle(1335, 525, 25, 15);
	iSetColor(224, 224, 224);
	iFilledRectangle(1365, 525, 25, 15);
	iSetColor(255, 204, 204);
	iFilledRectangle(1005, 505, 25, 15);
	iSetColor(255, 229, 204);
	iFilledRectangle(1035, 505, 25, 15);
	iSetColor(255, 255, 204);
	iFilledRectangle(1065, 505, 25, 15);
	iSetColor(229, 255, 204);
	iFilledRectangle(1095, 505, 25, 15);
	iSetColor(204, 255, 204);
	iFilledRectangle(1125, 505, 25, 15);
	iSetColor(204, 255, 229);
	iFilledRectangle(1155, 505, 25, 15);
	iSetColor(204, 255, 255);
	iFilledRectangle(1185, 505, 25, 15);
	iSetColor(204, 229, 255);
	iFilledRectangle(1215, 505, 25, 15);
	iSetColor(204, 204, 255);
	iFilledRectangle(1245, 505, 25, 15);
	iSetColor(229, 204, 255);
	iFilledRectangle(1275, 505, 25, 15);
	iSetColor(255, 204, 255);
	iFilledRectangle(1305, 505, 25, 15);
	iSetColor(255, 204, 229);
	iFilledRectangle(1335, 505, 25, 15);
	iSetColor(255, 255, 255);
	iFilledRectangle(1365, 505, 25, 15);


    //shapes and tools image formation
    iLine(1000, 370, 1500, 370);
	iLine(1100, 270, 1100, 460);
	iLine(1200, 270, 1200, 460);
	iLine(1300, 270, 1300, 460);
	iLine(1400, 270, 1400, 460);
	iLine(1100, 230, 1100, 40);
	iLine(1200, 230, 1200, 40);
	iLine(1300, 230, 1300, 40);
	iLine(1400, 230, 1400, 40);
	iSetColor(255, 255, 255);
	iFilledRectangle(1010, 380, 80, 70);
	iFilledRectangle(1110, 380, 80, 70);
	iFilledRectangle(1210, 380, 80, 70);
	iFilledRectangle(1310, 380, 80, 70);
	iFilledRectangle(1410, 380, 80, 70);
	iFilledRectangle(1010, 280, 80, 70);
	iFilledRectangle(1110, 280, 80, 70);
	iFilledRectangle(1210, 280, 80, 70);
	iFilledRectangle(1310, 280, 80, 70);
	iFilledRectangle(1410, 280, 80, 70);
	//pen icon
	iSetColor(255, 255, 255);
	iFilledRectangle(1010, 50, 80, 170);
	iSetColor(0, 0, 0);
	iFilledCircle(1050, 180, 20);
	iFilledCircle(1050, 100, 20, 4);
	iSetColor(255, 255, 255);
	iFilledRectangle(1030, 100, 40, 80);
	iSetColor(0, 0, 0);
	iFilledRectangle(1030, 110, 40, 60);
	//brush icon
	iSetColor(255, 255, 255);
	iFilledRectangle(1110, 50, 80, 170);
	iSetColor(0, 0, 0);
	iFilledRectangle(1140, 110, 20, 80);
    iFilledRectangle(1120, 90, 60, 30);
    iLine(1120, 90, 1120, 60);
    iLine(1122.5, 90, 1122.5, 60);
    iLine(1125, 90, 1125, 60);
    iLine(1127.5, 90, 1127.5, 60);
    iLine(1130, 90, 1130, 60);
    iLine(1132.5, 90, 1132.5, 60);
    iLine(1135, 90, 1135, 60);
    iLine(1137.5, 90, 1137.5, 60);
    iLine(1140, 90, 1140, 60);
    iLine(1142.5, 90, 1142.5, 60);
    iLine(1145, 90, 1145, 60);
    iLine(1147.5, 90, 1147.5, 60);
    iLine(1150, 90, 1150, 60);
    iLine(1152.5, 90, 1152.5, 60);
    iLine(1155, 90, 1155, 60);
    iLine(1157.5, 90, 1157.5, 60);
    iLine(1160, 90, 1160, 60);
    iLine(1162.5, 90, 1162.5, 60);
    iLine(1165, 90, 1165, 60);
    iLine(1167.5, 90, 1167.5, 60);
    iLine(1170, 90, 1170, 60);
    iLine(1172.5, 90, 1172.5, 60);
    iLine(1175, 90, 1175, 60);
    iLine(1177.5, 90, 1177.5, 60);
    iLine(1180, 90, 1180, 60);
	//eraser icon
	iSetColor(255, 255, 255);
	iFilledRectangle(1210, 50, 80, 170);
	iSetColor(0, 0, 0);
	iRectangle(1220, 80, 60, 110);
	iFilledRectangle(1220, 110, 60, 80);
	//auto-fill icon
	iSetColor(255, 255, 255);
	iFilledRectangle(1310, 50, 80, 170);
	iSetColor(0, 0, 0);
	iFilledRectangle(1320, 80, 60, 60);
	iFilledEllipse(1350, 140, 30, 10);
	iSetColor(blenderRed, blenderGreen, blenderBlue);
	iFilledEllipse(1350, 130, 27, 7);
	iSetColor(0, 0, 0);
	iEllipse(1350, 140, 30, 60);
	iEllipse(1350, 140, 29, 59);
    iEllipse(1350, 140, 28, 58);
	//text editor icon
	iSetColor(255, 255, 255);
	iFilledRectangle(1410, 50, 80, 170);
	iSetColor(0, 0, 0);
	iRectangle(1420, 80, 60, 110);
	iRectangle(1421, 81, 58, 108);
	iRectangle(1422, 82, 56, 106);
	iRectangle(1423, 83, 54, 104);
	iFilledRectangle(1427, 170, 45, 3);
	iFilledRectangle(1427, 160, 20, 3);
	iFilledRectangle(1427, 150, 45, 3);
	iFilledRectangle(1427, 140, 30, 3);
	iFilledRectangle(1427, 130, 45, 3);
	iFilledRectangle(1427, 120, 20, 3);
	iFilledRectangle(1427, 110, 45, 3);
	iFilledRectangle(1427, 100, 30, 3);
	iFilledRectangle(1427, 90, 45, 3);

	iSetColor(0, 0, 0);
	iRectangle(1020, 390, 56, 50);
	iRectangle(1021, 391, 54, 48);
	iRectangle(1022, 392, 52, 46);
	xa[0]=1120; xa[1]=1180; xa[2]=1120;
	ya[0]=390; ya[1]=390; ya[2]=440;
	iPolygon(xa, ya, 3);
	xa[0]=1121; xa[1]=1179; xa[2]=1121;
	ya[0]=391; ya[1]=391; ya[2]=439;
	iPolygon(xa, ya, 3);
	xa[0]=1122; xa[1]=1178; xa[2]=1122;
	ya[0]=392; ya[1]=392; ya[2]=438;
	iPolygon(xa, ya, 3);
	xa[0]=1220; xa[1]=1280; xa[2]=1250;
	ya[0]=390; ya[1]=390; ya[2]=440;
	iPolygon(xa, ya, 3);
	xa[0]=1221; xa[1]=1279; xa[2]=1250;
	ya[0]=391; ya[1]=391; ya[2]=439;
	iPolygon(xa, ya, 3);
	xa[0]=1222; xa[1]=1278; xa[2]=1250;
	ya[0]=392; ya[1]=392; ya[2]=438;
	iPolygon(xa, ya, 3);
    iCircle(1350, 415, 30);
    iCircle(1350, 415, 29);
    iCircle(1350, 415, 28);
    iEllipse(1450, 415, 35, 20);
    iEllipse(1450, 415, 34, 19);
    iEllipse(1450, 415, 33, 18);
    iCircle(1050, 315, 30, 5);
    iCircle(1050, 315, 29, 5);
    iCircle(1050, 315, 28, 5);
    iCircle(1150, 315, 30, 4);
    iCircle(1150, 315, 29, 4);
    iCircle(1150, 315, 28, 4);
    iCircle(1250, 315, 30, 6);
    iCircle(1250, 315, 29, 6);
    iCircle(1250, 315, 28, 6);
    iCircle(1350, 315, 30, 7);
    iCircle(1350, 315, 29, 7);
    iCircle(1350, 315, 28, 7);
    iLine(1420, 340, 1480, 290);
    iLine(1420, 339, 1479, 290);
    iLine(1420, 338, 1478, 290);



    //canvas type thumbnail
    iShowBMP(50, 640, "cartridge.bmp");
    iShowBMP(200, 640, "watercolor.bmp");
    iShowBMP(350, 640, "newsprint.bmp");
    iShowBMP(500, 640, "bristol.bmp");
    iShowBMP(650, 640, "sketch.bmp");

    //text below each canvas type thumbnail
    iSetColor(255, 255, 255);
    iText(70, 620, "Cartridge");
    iText(220, 620, "Watercolor");
    iText(370, 620, "Newsprint");
    iText(520, 620, "Bristol");
    iText(670, 620, "Sketch");

    //the white outline surrounding the canvas
    iSetColor(255, 255, 255);
    iRectangle(30, 50, 950, 550);


    //the white outline and text around the right section
	iSetColor(255, 255, 255);
	iLine(1000, 0, 1000, 750);
	iLine(1000, 690, 1500, 690);
	iLine(1000, 460, 1500, 460);
	iLine(1000, 230, 1500, 230);
	iLine(1000, 40, 1500, 40);
	iLine(1000, 270, 1500, 270);
	iLine(1000, 500, 1500, 500);
	iText(1150, 720, "Drawing Materials", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(1200, 20, "Tools", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(1200, 250, "Shapes", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(1200, 480, "Colours", GLUT_BITMAP_TIMES_ROMAN_24);
    iRectangle(1400, 510, 91, 151);

    //the instruction box that is shown whenever the brush icon is clicked
    if(q==1) {iShowBMP(800, 600, "brush-instruction.bmp");}


    //the instruction box that is shown whenever the pen icon is clicked
    if(qq==1) {iShowBMP(800, 600, "pen-instructions.bmp");}

    //the instruction box that is shown whenever the any shape icon is clicked
    if(b==1) {iShowBMP(800, 600, "shape-instruction.bmp");}


}

//function iMouseMove() is called when the user presses and drags the mouse.
//(mx, my) is the position where the mouse pointer is.
void iMouseMove(int mx, int my){
	printf("x = %d, y= %d\n",mx,my);


	//when the brush is selected and moved on the canvas, radius and center are fixed to draw filled circles at each point
	if(r==1&&mx>=30+radius&&mx<=980-radius&&my>=50+radius&&my<=600-radius)  {p=1; (brushx)=mx; (brushy)=my;}


	//when the pen is selected and moved on the canvas, radius and center are fixed to draw filled circles at each point
	if(rr==1&&mx>=30+radi&&mx<=980-radi&&my>=50+radi&&my<=600-radi)  {pp=1; (penx)=mx; (peny)=my;}



    //when the eraser is selected and moved on the canvas, respective image is placed at each point
	if(c==1&&mx>=30+20&&mx<=980-20&&my>=50+20&&my<=600-20)  {a=1; (eraserx)=mx; (erasery)=my; m++;}


}

//function iMouse() is called when the user presses/releases the mouse.
//(mx, my) is the position where the mouse pointer is.
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {

         //when a certain color is selected from the color palette, the color is shown on the blender using 03 global variables
         if(mx>=1005&&mx<=1030&&my>=665&&my<=680)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1035&&mx<=1060&&my>=665&&my<=680)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+25)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1065&&mx<=1090&&my>=665&&my<=680)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1095&&mx<=1120&&my>=665&&my<=680)
        {blenderRed=(blenderRed+25)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1125&&mx<=1150&&my>=665&&my<=680)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1155&&mx<=1180&&my>=665&&my<=680)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+25)/2;}
         if(mx>=1185&&mx<=1210&&my>=665&&my<=680)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1215&&mx<=1240&&my>=665&&my<=680)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+25)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1245&&mx<=1270&&my>=665&&my<=680)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+51)/2;}
        if(mx>=1275&&mx<=1300&&my>=665&&my<=680)
        {blenderRed=(blenderRed+25)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1305&&mx<=1330&&my>=665&&my<=680)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1335&&mx<=1360&&my>=665&&my<=680)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+25)/2;}
         if(mx>=1365&&mx<=1390&&my>=665&&my<=680)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1005&&mx<=1030&&my>=645&&my<=660)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1035&&mx<=1060&&my>=645&&my<=660)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1065&&mx<=1090&&my>=645&&my<=660)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1095&&mx<=1120&&my>=645&&my<=660)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1125&&mx<=1150&&my>=645&&my<=660)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1155&&mx<=1180&&my>=645&&my<=660)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1185&&mx<=1210&&my>=645&&my<=660)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1215&&mx<=1240&&my>=645&&my<=660)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1245&&mx<=1270&&my>=645&&my<=660)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1275&&mx<=1300&&my>=645&&my<=660)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1305&&mx<=1330&&my>=645&&my<=660)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1335&&mx<=1360&&my>=645&&my<=660)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1365&&mx<=1390&&my>=645&&my<=660)
        {blenderRed=(blenderRed+32)/2, blenderGreen=(blenderGreen+32)/2, blenderBlue=(blenderBlue+32)/2;}
        if(mx>=1005&&mx<=1030&&my>=625&&my<=640)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1035&&mx<=1060&&my>=625&&my<=640)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+76)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1065&&mx<=1090&&my>=625&&my<=640)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1095&&mx<=1120&&my>=625&&my<=640)
        {blenderRed=(blenderRed+76)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1125&&mx<=1150&&my>=625&&my<=640)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1155&&mx<=1180&&my>=625&&my<=640)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+76)/2;}
         if(mx>=1185&&mx<=1210&&my>=625&&my<=640)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1215&&mx<=1240&&my>=625&&my<=640)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+76)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1245&&mx<=1270&&my>=625&&my<=640)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+153)/2;}
        if(mx>=1275&&mx<=1300&&my>=625&&my<=640)
        {blenderRed=(blenderRed+76)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1305&&mx<=1330&&my>=625&&my<=640)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1335&&mx<=1360&&my>=625&&my<=640)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+76)/2;}
         if(mx>=1365&&mx<=1390&&my>=625&&my<=640)
        {blenderRed=(blenderRed+64)/2, blenderGreen=(blenderGreen+64)/2, blenderBlue=(blenderBlue+64)/2;}
         if(mx>=1005&&mx<=1030&&my>=605&&my<=620)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1035&&mx<=1060&&my>=605&&my<=620)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1065&&mx<=1090&&my>=605&&my<=620)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1095&&mx<=1120&&my>=605&&my<=620)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1125&&mx<=1150&&my>=605&&my<=620)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1155&&mx<=1180&&my>=605&&my<=620)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1185&&mx<=1210&&my>=605&&my<=620)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1215&&mx<=1240&&my>=605&&my<=620)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1245&&mx<=1270&&my>=605&&my<=620)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+204)/2;}
        if(mx>=1275&&mx<=1300&&my>=605&&my<=620)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1305&&mx<=1330&&my>=605&&my<=620)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1335&&mx<=1360&&my>=605&&my<=620)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1365&&mx<=1390&&my>=605&&my<=620)
        {blenderRed=(blenderRed+96)/2, blenderGreen=(blenderGreen+96)/2, blenderBlue=(blenderBlue+96)/2;}
         if(mx>=1005&&mx<=1030&&my>=585&&my<=600)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1035&&mx<=1060&&my>=585&&my<=600)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+128)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1065&&mx<=1090&&my>=585&&my<=600)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1095&&mx<=1120&&my>=585&&my<=600)
        {blenderRed=(blenderRed+128)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1125&&mx<=1150&&my>=585&&my<=600)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+0)/2;}
         if(mx>=1155&&mx<=1180&&my>=585&&my<=600)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+128)/2;}
         if(mx>=1185&&mx<=1210&&my>=585&&my<=600)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1215&&mx<=1240&&my>=585&&my<=600)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+128)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1245&&mx<=1270&&my>=585&&my<=600)
        {blenderRed=(blenderRed+0)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+255)/2;}
        if(mx>=1275&&mx<=1300&&my>=585&&my<=600)
        {blenderRed=(blenderRed+127)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1305&&mx<=1330&&my>=585&&my<=600)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1335&&mx<=1360&&my>=585&&my<=600)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+0)/2, blenderBlue=(blenderBlue+127)/2;}
         if(mx>=1365&&mx<=1390&&my>=585&&my<=600)
        {blenderRed=(blenderRed+128)/2, blenderGreen=(blenderGreen+128)/2, blenderBlue=(blenderBlue+128)/2;}
         if(mx>=1005&&mx<=1030&&my>=565&&my<=580)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1035&&mx<=1060&&my>=565&&my<=580)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1065&&mx<=1090&&my>=565&&my<=580)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1095&&mx<=1120&&my>=565&&my<=580)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1125&&mx<=1150&&my>=565&&my<=580)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+51)/2;}
         if(mx>=1155&&mx<=1180&&my>=565&&my<=580)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1185&&mx<=1210&&my>=565&&my<=580)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1215&&mx<=1240&&my>=565&&my<=580)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1245&&mx<=1270&&my>=565&&my<=580)
        {blenderRed=(blenderRed+51)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1275&&mx<=1300&&my>=565&&my<=580)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1305&&mx<=1330&&my>=565&&my<=580)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1335&&mx<=1360&&my>=565&&my<=580)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+51)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1365&&mx<=1390&&my>=565&&my<=580)
        {blenderRed=(blenderRed+160)/2, blenderGreen=(blenderGreen+160)/2, blenderBlue=(blenderBlue+160)/2;}
         if(mx>=1005&&mx<=1030&&my>=545&&my<=560)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1035&&mx<=1060&&my>=545&&my<=560)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+178)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1065&&mx<=1090&&my>=545&&my<=560)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1095&&mx<=1120&&my>=545&&my<=560)
        {blenderRed=(blenderRed+178)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1125&&mx<=1150&&my>=545&&my<=560)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+102)/2;}
         if(mx>=1155&&mx<=1180&&my>=545&&my<=560)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+178)/2;}
         if(mx>=1185&&mx<=1210&&my>=545&&my<=560)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1215&&mx<=1240&&my>=545&&my<=560)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+178)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1245&&mx<=1270&&my>=545&&my<=560)
        {blenderRed=(blenderRed+102)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1275&&mx<=1300&&my>=545&&my<=560)
        {blenderRed=(blenderRed+178)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1305&&mx<=1330&&my>=545&&my<=560)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1335&&mx<=1360&&my>=545&&my<=560)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+102)/2, blenderBlue=(blenderBlue+178)/2;}
         if(mx>=1365&&mx<=1390&&my>=545&&my<=560)
        {blenderRed=(blenderRed+192)/2, blenderGreen=(blenderGreen+192)/2, blenderBlue=(blenderBlue+192)/2;}
         if(mx>=1005&&mx<=1030&&my>=525&&my<=540)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1035&&mx<=1060&&my>=525&&my<=540)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1065&&mx<=1090&&my>=525&&my<=540)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1095&&mx<=1120&&my>=525&&my<=540)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1125&&mx<=1150&&my>=525&&my<=540)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+153)/2;}
         if(mx>=1155&&mx<=1180&&my>=525&&my<=540)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1185&&mx<=1210&&my>=525&&my<=540)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1215&&mx<=1240&&my>=525&&my<=540)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1245&&mx<=1270&&my>=525&&my<=540)
        {blenderRed=(blenderRed+153)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1275&&mx<=1300&&my>=525&&my<=540)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1305&&mx<=1330&&my>=525&&my<=540)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1335&&mx<=1360&&my>=525&&my<=540)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+153)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1365&&mx<=1390&&my>=525&&my<=540)
        {blenderRed=(blenderRed+224)/2, blenderGreen=(blenderGreen+224)/2, blenderBlue=(blenderBlue+224)/2;}
         if(mx>=1005&&mx<=1030&&my>=505&&my<=520)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1035&&mx<=1060&&my>=505&&my<=520)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+229)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1065&&mx<=1090&&my>=505&&my<=520)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1095&&mx<=1120&&my>=505&&my<=520)
        {blenderRed=(blenderRed+229)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1125&&mx<=1150&&my>=505&&my<=520)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+204)/2;}
         if(mx>=1155&&mx<=1180&&my>=505&&my<=520)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+229)/2;}
         if(mx>=1185&&mx<=1210&&my>=505&&my<=520)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1215&&mx<=1240&&my>=505&&my<=520)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+229)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1245&&mx<=1270&&my>=505&&my<=520)
        {blenderRed=(blenderRed+204)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1275&&mx<=1300&&my>=505&&my<=520)
        {blenderRed=(blenderRed+229)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1305&&mx<=1330&&my>=505&&my<=520)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+255)/2;}
         if(mx>=1335&&mx<=1360&&my>=505&&my<=520)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+204)/2, blenderBlue=(blenderBlue+229)/2;}
         if(mx>=1365&&mx<=1390&&my>=505&&my<=520)
        {blenderRed=(blenderRed+255)/2, blenderGreen=(blenderGreen+255)/2, blenderBlue=(blenderBlue+255)/2;}


         //determines which type of canvas will be chosen, with mouse click on the corresponding canvas thumbnail
         if(mx>=50&&mx<=181&&my>=640&&my<=740)  {canvasdrawing=1; canvastype=1;}
         if(mx>=200&&mx<=331&&my>=640&&my<=740) {canvasdrawing=1; canvastype=2;}
	     if(mx>=350&&mx<=481&&my>=640&&my<=740) {canvasdrawing=1; canvastype=3;}
         if(mx>=500&&mx<=631&&my>=640&&my<=740) {canvasdrawing=1; canvastype=4;}
	     if(mx>=650&&mx<=781&&my>=640&&my<=740) {canvasdrawing=1; canvastype=5;}


	     //when the brush icon is clicked, a signal 'q' is sent to show the instructions chart, again thickness of brush fixed to 3, using 'r'
	     if(mx>=1100&&mx<=1200&&my>=40&&my<=230) {q=1; r=1; rr=0; c=0; d=0; ee=0; t=0; circled=0; rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real= q, r
	     //after selecting the brush icon, if the user clicks outside the brush icon, then the instruction chart vanishes
	     if(q==1&&(mx<1100||mx>1200||my<40||my>230)) {q=0;}


	     //when the pen icon is clicked, a signal 'qq' is sent to show the instructions chart
	     if(mx>=1000&&mx<=1100&&my>=40&&my<=230) {qq=1; rr=1; r=0; c=0; d=0; ee=0; t=0; circled=0; rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real= qq, rr
	     //after selecting the pen icon, if the user clicks outside the pen icon, then the instruction chart vanishes
	     if(qq==1&&(mx<1000||mx>1100||my<40||my>230)) {qq=0;}


	     //when the eraser icon is clicked, a signal 'c' is sent to show the respective canvas pixel
	     if(mx>=1200&&mx<=1300&&my>=40&&my<=230) {c=1; r=0, rr=0; d=0; ee=0; t=0; circled=0; rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real= c


         //when any  linear shape icon is clicked, a signal 'b' is sent to show the instructions chart
	     if(mx>=1375&&mx<=1480&&my>=290&&my<=370) {b=1; d=1; r=0; rr=0; c=0; ee=0; t=0; circled=0; rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real= b, d
	     //after selecting the any linear shape icon, if the user clicks outside that icon, then the instruction chart vanishes
	     if(b==1&&(mx<1375||mx>1480||my<290||my>370)) {b=0;}


	     //text editing
	     if(mx>=1400&&mx<=1500&&my>=40&&my<=230) {t=1; b=0; c=0; d=0; qq=0; rr=0; q=0; r=0; ee=0; circled=0; rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=t
	     if(t==1&&mx>=30&&mx<=970&&my>=50&&my<=590) {tx=mx, ty=my, t=2;}


	     //circle drawing
	     if(mx>=1270&&mx<=1360&&my>=390&&my<=461) {circled=1; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=circled


         //rectangle drawing
	     if(mx>=1000&&mx<=1090&&my>=390&&my<=461) {rectangled=1; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0; circled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=rectangled


	     //right angled triangle drawing
	     if(mx>=1100&&mx<=1170&&my>=390&&my<=461) {triangled=1; rectangled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0; circled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=triangled


	     //triangle drawing
	     if(mx>=1180&&mx<=1260&&my>=390&&my<=461) {trid=1; triangled=0; rectangled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0; circled=0; pentad=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=trid


	     //pentagon drawing
	     if(mx>=1000&&mx<=1090&&my>=290&&my<=370) {pentad=1; circled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;rectangled=0; triangled=0; trid=0; hexad=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=pentad


	     //hexagon drawing
	     if(mx>=1180&&mx<=1260&&my>=290&&my<=370) {hexad=1; pentad=0; circled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;rectangled=0; triangled=0; trid=0; heptad=0; tetrad=0; ellipsed=0; filld=0;}//real=hexad


	     //heptagon drawing
	     if(mx>=1270&&mx<=1360&&my>=290&&my<=370) {heptad=1; hexad=0; pentad=0; circled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;rectangled=0; triangled=0; trid=0; tetrad=0; ellipsed=0; filld=0;}//real=heptad


	     //tetragon drawing
	     if(mx>=1100&&mx<=1170&&my>=290&&my<=370) {tetrad=1; heptad=0; hexad=0; pentad=0; circled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;rectangled=0; triangled=0; trid=0; ellipsed=0; filld=0;}//real=tetrad


	      //ellipse drawing
	     if(mx>=1375&&mx<=1480&&my>=390&&my<=461) {ellipsed=1; circled=0; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;rectangled=0; triangled=0; trid=0; pentad=0; hexad=0; heptad=0; tetrad=0; filld=0;}//real=ellipsed


	     //auto-fill
	     if(fille==0&mx>=1300&&mx<=1400&&my>=40&&my<=230) {filld=1; ee=0; q=0; qq=0; r=0; rr=0; c=0; b=0; d=0; t=0;}//real=filld
	     if(fille==1&mx>=1300&&mx<=1400&&my>=40&&my<=230) {fille=0; filld=0;}//real=filld
	     if(filld==1&&(circled==1||ellipsed==1||rectangled==1||triangled==1||pentad==1||heptad==1||hexad==1||tetrad==1||trid==1)) {fille=1;}


      //printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		x -= 100;
		y -= 100;
		//if any linear shape is currently functioning, it takes the initial point of edge
		if(d==1) {linex1=mx; liney1=my; e=1;}


		//if circle is currently functioning, it takes the initial point of diameter
		if(circled==1) {circlex1=mx; circley1=my; circlee=1;}


		//if ellipse is currently functioning, it takes the initial point of diameter
		if(ellipsed==1) {ellipsex1=mx; ellipsey1=my; ellipsee=1;}

		//if penta is currently functioning, it takes the initial point of diameter
		if(pentad==1) {pentax1=mx; pentay1=my; pentae=1;}

		//if hexa is currently functioning, it takes the initial point of diameter
		if(hexad==1) {hexax1=mx; hexay1=my; hexae=1;}

		//if hepta is currently functioning, it takes the initial point of diameter
		if(heptad==1) {heptax1=mx; heptay1=my; heptae=1;}


		//if tetra is currently functioning, it takes the initial point of diameter
		if(tetrad==1) {tetrax1=mx; tetray1=my; tetrae=1;}


		//if rectangle is currently functioning, it takes the initial point of diameter
		if(rectangled==1) {rectanglex1=mx; rectangley1=my; rectanglee=1;}


		//if right angled triangle is currently functioning, it takes the initial point of diameter
		if(triangled==1) {trianglex1=mx; triangley1=my; trianglee=1;}


		//if triangle is currently functioning, it takes the initial point of diameter
		if(trid==1) {trix1=mx; triy1=my; trie=1;}


	}

	if(button==GLUT_RIGHT_BUTTON && state==GLUT_UP){
       //if any linear shape is currently functioning, it takes the final point of edge
		if(e==1) {linex2=mx; liney2=my; e=0; d=2;}


		//if circle is currently functioning, it takes the final point of diameter
		if(circlee==1) {circlex2=mx; circley2=my; circlee=0; circled=2;}

		//if ellipse is currently functioning, it takes the final point of diameter
		if(ellipsee==1) {ellipsex2=mx; ellipsey2=my; ellipsee=0; ellipsed=2;}


		//if penta is currently functioning, it takes the final point of diameter
		if(pentae==1) {pentax2=mx; pentay2=my; pentae=0; pentad=2;}

		//if hexa is currently functioning, it takes the final point of diameter
		if(hexae==1) {hexax2=mx; hexay2=my; hexae=0; hexad=2;}

		//if hepta is currently functioning, it takes the final point of diameter
		if(heptae==1) {heptax2=mx; heptay2=my; heptae=0; heptad=2;}


		//if tetra is currently functioning, it takes the final point of diameter
		if(tetrae==1) {tetrax2=mx; tetray2=my; tetrae=0; tetrad=2;}


		//if rectangle is currently functioning, it takes the final point of diameter
		if(rectanglee==1) {rectanglex2=mx; rectangley2=my; rectanglee=0; rectangled=2;}


		//if right angled triangle is currently functioning, it takes the final point of diameter
		if(trianglee==1) {trianglex2=mx; triangley2=my; trianglee=0; triangled=2;}

		//if triangle is currently functioning, it takes the final point of diameter
		if(trie==1) {trix2=mx; triy2=my; trie=0; trid=2;}


	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {exit(0);}

	//if brush is selected and '+' is used, it increases the thickness of the brush
	if(key=='+'&&radius<=20) {radius++;}
	//if brush's thickness is greater than the lowest value and '-' is pressed then the thickness is lessened
	if(radius>=3&&key=='-') {radius--;}


	//text editor
	if(key=='a') signal=1;
	if(key=='b') signal=2;
	if(key=='c') signal=3;
	if(key=='d') signal=4;
	if(key=='e') signal=5;
	if(key=='f') signal=6;
	if(key=='g') signal=7;
	if(key=='h') signal=8;
	if(key=='i') signal=9;
	if(key=='j') signal=10;
	if(key=='k') signal=11;
	if(key=='l') signal=12;
	if(key=='m') signal=13;
	if(key=='n') signal=14;
	if(key=='o') signal=15;
	if(key=='p') signal=16;
	if(key=='q') signal=17;
	if(key=='r') signal=18;
	if(key=='s') signal=19;
	if(key=='t') signal=20;
	if(key=='u') signal=21;
	if(key=='v') signal=22;
	if(key=='w') signal=23;
	if(key=='x') signal=24;
	if(key=='y') signal=25;
	if(key=='z') signal=26;


	if(key=='A') signal=27;
	if(key=='B') signal=28;
	if(key=='C') signal=29;
	if(key=='D') signal=30;
	if(key=='E') signal=31;
	if(key=='F') signal=32;
	if(key=='G') signal=33;
	if(key=='H') signal=34;
	if(key=='I') signal=35;
	if(key=='J') signal=36;
	if(key=='K') signal=37;
	if(key=='L') signal=38;
	if(key=='M') signal=39;
	if(key=='N') signal=40;
	if(key=='O') signal=41;
	if(key=='P') signal=42;
	if(key=='Q') signal=43;
	if(key=='R') signal=44;
	if(key=='S') signal=45;
	if(key=='T') signal=46;
	if(key=='U') signal=47;
	if(key=='V') signal=48;
	if(key=='W') signal=49;
	if(key=='X') signal=50;
	if(key=='Y') signal=51;
	if(key=='Z') signal=52;

	if(key==' ') signal=53;
	if(key=='.') signal=54;
	if(key==',') signal=55;
	if(key=='!') signal=56;
	if(key=='?') signal=57;

}

/*
	function iSpecialKeyboard() is called whenever user hits special keys like-
	function keys, home, end, pg up, pg down, arrows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here

}


//a function to increase the frequency of iDraw
void DRAW()
{
    iDraw();
}


int main() {

    //increases the frequency of iDraw to make real time drawing
    int t1=iSetTimer(150, DRAW);
	//creates a drawing window of respective size and title
	iInitialize(1500, 750, "PAINT");
	return 0;
}
