#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14

void init(void);
void tampil(void);
void keyboard(unsigned char,int, int);
void mouse (int button, int state, int x, int y);
void ukuran(int,int);
void mouseMotion(int x,int y);
void idle();

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;
int i;

void init(void){
    glClearColor(0,0,0,0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void Angle (int n,float cx, float cy,float radius, float rotAngle) {
    double angle,angleInc;
    int x;
    if(n<2) return;
    angle = rotAngle*3.14159265/180;
    angleInc = 2*3.14159265/n;
    glVertex3f(radius*cos(angle)+cx, radius*sin(angle)+cy,-9.9);
    for (x=0;x<n;x++){
        angle +=angleInc;
        glVertex3f(radius*cos(angle)+cx, radius*sin(angle)+cy,-9.9);
    }
}

void OntarioCollegeofArtandDesignUniversity(void){
    // DEPAN
        //KIRI
        glBegin(GL_QUADS);
        glColor3ub(186, 115, 69);
        glVertex3f(-20.0,-10.0,10.0); // KIRI BAWAH
        glVertex3f(-20.0,10.0,10.0); // KIRI ATAS
        glVertex3f(-5.0,10.0,10.0); // KANAN ATAS
        glVertex3f(-5.0,-10.0,10.0); // KANAN BAWAH

        //KANAN
        glColor3ub(186, 115, 69);
        glVertex3f(5.0,-10.0,5.0); // KIRI BAWAH
        glVertex3f(5.0,10.0,5.0); // KIRI ATAS
        glVertex3f(20.0,10.0,5.0); // KANAN ATAS
        glVertex3f(20.0,-10.0,5.0); // KANAN BAWAH

             //Jendela Tengah

                //Jendela Lt 6
                float dEnam=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dEnam,7.5,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dEnam,9.0,5.5); // KIRI ATAS
                            glVertex3f(7+dEnam,9.0,5.5); // KANAN ATAS
                            glVertex3f(7+dEnam,7.5,5.5); // KANAN BAWAH
                            dEnam+=2.5;
                    }

                //Jendela Lt 5
                float dLima=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dLima,5,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dLima,6.5,5.5); // KIRI ATAS
                            glVertex3f(7+dLima,6.5,5.5); // KANAN ATAS
                            glVertex3f(7+dLima,5,5.5); // KANAN BAWAH
                            dLima+=2.5;
                    }

                //Jendela Lt 4
                float dEmpat=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dEmpat,2.5,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dEmpat,4.0,5.5); // KIRI ATAS
                            glVertex3f(7+dEmpat,4.0,5.5); // KANAN ATAS
                            glVertex3f(7+dEmpat,2.5,5.5); // KANAN BAWAH
                            dEmpat+=2.5;
                    }

                //Jendela Lt 3
                float dTiga=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dTiga,0,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dTiga,1.5,5.5); // KIRI ATAS
                            glVertex3f(7+dTiga,1.5,5.5); // KANAN ATAS
                            glVertex3f(7+dTiga,0,5.5); // KANAN BAWAH
                            dTiga+=2.5;
                    }

                //Jendela Lt 2
                float dDua=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dDua,-1.0,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dDua,-2.5,5.5); // KIRI ATAS
                            glVertex3f(7+dDua,-2.5,5.5); // KANAN ATAS
                            glVertex3f(7+dDua,-1.0,5.5); // KANAN BAWAH
                            dDua+=2.5;
                    }

                //Jendela Lt 1
                float dSatu=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dSatu,-3.5,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dSatu,-5,5.5); // KIRI ATAS
                            glVertex3f(7+dSatu,-5,5.5); // KANAN ATAS
                            glVertex3f(7+dSatu,-3.5,5.5); // KANAN BAWAH
                            dSatu+=2.5;
                    }

                //Jendela Lt 0
                float dEnol=0;
                    for(i=0;i<6;i++){
                            glColor3f(1,1,1);
                            glVertex3f(5.5+dEnol,-6,5.5); // KIRI BAWAH
                            glVertex3f(5.5+dEnol,-7.5,5.5); // KIRI ATAS
                            glVertex3f(7+dEnol,-7.5,5.5); // KANAN ATAS
                            glVertex3f(7+dEnol,-6,5.5); // KANAN BAWAH
                            dEnol+=2.5;
                    }
        glEnd();
    //BANGUNAN ATAS
        //KANAN
        glBegin(GL_QUADS);
        glColor3ub(219, 172, 129);
        glVertex3f(20.0,8.0,5.0); //KIRI BAWAH
        glVertex3f(20.0,10.0,5.0); //KIRI ATAS
        glVertex3f(20.0,10.0,-10.0); //KANAN ATAS
        glVertex3f(20.0,8.0,-10.0); //KANAN BAWAH
        glEnd();
    //BELAKANG
        //TENGAH
        glBegin(GL_QUADS);
        glColor3ub(180, 157, 143);
        glVertex3f(-20.0,-10.0,-10.0); //KANAN BAWAH
        glVertex3f(-20.0,10.0,-10.0); //KANAN ATAS
        glVertex3f(20.0,10.0,-10.0); // KIRI ATAS
        glVertex3f(20.0,-10.0,-10.0); // KIRI BAWAH
        //KIRI
        glColor3ub(180, 157, 143);
        glVertex3f(-20.0,-10.0,-10.0); //KANAN BAWAH
        glVertex3f(-20.0,8.0,-10.0); //KANAN ATAS
        glVertex3f(-50.0,8.0,-10.0); //KIRI ATAS
        glVertex3f(-50.0,-10.0,-10.0); //KIRI BAWAH
        //KANAN
        glColor3ub(180, 157, 143);
        glVertex3f(20.0,-10.0,-10.0); //KIRI BAWAH
        glVertex3f(20.0,8.0,-10.0); //KIRI ATAS
        glVertex3f(50.0,8.0,-10.0); //KANAN ATAS
        glVertex3f(50.0,-10.0,-10.0); //KANAN BAWAH
        glEnd();

    //BANGUNAN KIRI
    //SATU
        //TAMPAK DEPAN
        glBegin(GL_QUADS);
        glColor3ub(186, 115, 69);
        glVertex3f(-20.0,-10.0,10.0); //KANAN BAWAH
        glVertex3f(-20.0,10.0,10.0); //KANAN ATAS
        glVertex3f(-40.0,10.0,10.0); //KIRI ATAS
        glVertex3f(-40.0,-10.0,10.0); //KIRI BAWAH

            //Jendela Kanan
               //Jendela lt 5
               float fLima=0;
                    for(i=0;i<11;i++){
                            glColor3f(1,1,1);
                            glVertex3f(21+fLima,5,5.5); // KIRI BAWAH
                            glVertex3f(21+fLima,7.0,5.5); // KIRI ATAS
                            glVertex3f(22+fLima,7.0,5.5); // KANAN ATAS
                            glVertex3f(22+fLima,5,5.5); // KANAN BAWAH
                            fLima+=1.7;
                    }

                //Jendela lt 4

                float fEmpat=0;
                    for(i=0;i<11;i++){
                            glColor3f(1,1,1);
                            glVertex3f(21+fEmpat,2.5,5.5); // KIRI BAWAH
                            glVertex3f(21+fEmpat,4.5,5); // KIRI ATAS
                            glVertex3f(22+fEmpat,4.5,5.5); // KANAN ATAS
                            glVertex3f(22+fEmpat,2.5,5.5); // KANAN BAWAH
                            fEmpat+=1.7;
                    }

                //Jendela lt 3

                float fTiga=0;
                    for(i=0;i<11;i++){
                            glColor3f(1,1,1);
                            glVertex3f(21+fTiga,-0.5,5.5); // KIRI BAWAH
                            glVertex3f(21+fTiga,2,5.5); // KIRI ATAS
                            glVertex3f(22+fTiga,2,5.5); // KANAN ATAS
                            glVertex3f(22+fTiga,-0.5,5.5); // KANAN BAWAH
                            fTiga+=1.7;
                    }

                //Jendela lt 2

                float fDua=0;
                    for(i=0;i<11;i++){
                            glColor3f(1,1,1);
                            glVertex3f(21+fDua,-3,5.5); // KIRI BAWAH
                            glVertex3f(21+fDua,-1,5.5); // KIRI ATAS
                            glVertex3f(22+fDua,-1,5.5); // KANAN ATAS
                            glVertex3f(22+fDua,-3,5.5); // KANAN BAWAH
                            fDua+=1.7;
                    }

                //Jendela lt 1

                float fSatu=0;
                    for(i=0;i<11;i++){
                            glColor3f(1,1,1);
                            glVertex3f(21+fSatu,-5.5,5.5); // KIRI BAWAH
                            glVertex3f(21+fSatu,-3.5,5.5); // KIRI ATAS
                            glVertex3f(22+fSatu,-3.5,5.5); // KANAN ATAS
                            glVertex3f(22+fSatu,-5.5,5.5); // KANAN BAWAH
                            fSatu+=1.7;
                    }

                //Jendela lt 0

                float fEnol=0;
                    for(i=0;i<11;i++){
                            glColor3f(1,1,1);
                            glVertex3f(21+fEnol,-8,5.5); // KIRI BAWAH
                            glVertex3f(21+fEnol,-6,5.5); // KIRI ATAS
                            glVertex3f(22+fEnol,-6,5.5); // KANAN ATAS
                            glVertex3f(22+fEnol,-8,5.5); // KANAN BAWAH
                            fEnol+=1.7;
                    }



        //DINDING KIRI
        glColor3ub(186, 115, 69);
        glVertex3f(-50.0,-10.0,-10.0); //KIRI BAWAH
        glVertex3f(-50.0,8.0,-10.0); //KIRI ATAS
        glVertex3f(-50.0,8.0,10.0); //KANAN ATAS
        glVertex3f(-50.0,-10.0,10.0); //KANAN BAWAH
        glEnd();

        //DUA
        //HADAP DEPAN
        glBegin(GL_QUADS);
        glColor3ub(186, 115, 69);
        glVertex3f(-40.0,-10.0,10.0); //KANAN BAWAH
        glVertex3f(-40.0,8.0,10.0); //KANAN ATAS
        glVertex3f(-50.0,8.0,10.0); //KIRI ATAS
        glVertex3f(-50.0,-10.0,10.0); //KIRI BAWAH

    //BANGUNAN KANAN
    //SATU
        //TAMPAK DARI KANAN
        glBegin(GL_QUADS);
        glColor3ub(186, 115, 69);
        glVertex3f(5.0,-10.0,10.0); //KIRI BAWAH
        glVertex3f(5.0,10.0,10.0); //KIRI ATAS
        glVertex3f(5.0,10.0,5.0); //KANAN ATAS
        glVertex3f(5.0,-10.0,5.0); //KANAN BAWAH
        //TAMPAK DEPAN
        glColor3ub(186, 115, 69);
        glVertex3f(20.0,-10.0,5.0); //KIRI BAWAH
        glVertex3f(20.0,8.0,5.0); //KIRI ATAS
        glVertex3f(40.0,8.0,5.0); //KANAN ATAS
        glVertex3f(40.0,-10.0,5.0); //KANAN BAWAH

        //DINDING KANAN
        glColor3ub(186, 115, 69);
        glVertex3f(50.0,-10.0,5.0); //KIRI BAWAH
        glVertex3f(50.0,8.0,5.0); //KIRI ATAS
        glVertex3f(50.0,8.0,-10.0); //KANAN ATAS
        glVertex3f(50.0,-10.0,-10.0); //KANAN BAWAH
        glEnd();
    //DUA
        //HADAP KIRI
        //HADAP DEPAN
        glBegin(GL_QUADS);
        glColor3ub(186, 115, 69);
        glVertex3f(40.0,-10.0,5.0); //KIRI BAWAH
        glVertex3f(40.0,8.0,5.0); //KIRI ATAS
        glVertex3f(50.0,8.0,5.0); //KANAN ATAS
        glVertex3f(50.0,-10.0,5.0); //KANAN BAWAH

            //Jendela DUA DEPAN

                //Jendela Lt 6
                int iEnam=0;
                    for(i=0;i<5;i++){
                            glColor3f(1,1,1);
                            glVertex3f(40.5+iEnam,5,5.5); // KIRI BAWAH
                            glVertex3f(40.5+iEnam,7.0,5.5); // KIRI ATAS
                            glVertex3f(41.5+iEnam,7.0,5.5); // KANAN ATAS
                            glVertex3f(41.5+iEnam,5,5.5); // KANAN BAWAH
                            iEnam+=2;
                    }

                //Jendela Lt 5
                int iLima=0;
                    for(i=0;i<5;i++){
                            glColor3f(1,1,1);
                            glVertex3f(40.5+iLima,2.5,5.5); // KIRI BAWAH
                            glVertex3f(40.5+iLima,4.5,5.5); // KIRI ATAS
                            glVertex3f(41.5+iLima,4.5,5.5); // KANAN ATAS
                            glVertex3f(41.5+iLima,2.5,5.5); // KANAN BAWAH
                            iLima+=2;
                    }

                //Jendela Lt 4
                int iEmpat=0;
                    for(i=0;i<5;i++){
                            glColor3f(1,1,1);
                            glVertex3f(40.5+iEmpat,-0.5,5.5); // KIRI BAWAH
                            glVertex3f(40.5+iEmpat,2,5.5); // KIRI ATAS
                            glVertex3f(41.5+iEmpat,2,5.5); // KANAN ATAS
                            glVertex3f(41.5+iEmpat,-0.5,5.5); // KANAN BAWAH
                            iEmpat+=2;
                    }

                //Jendela Lt 3
                int iTiga=0;
                    for(i=0;i<5;i++){
                            glColor3f(1,1,1);
                            glVertex3f(40.5+iTiga,-3,5.5); // KIRI BAWAH
                            glVertex3f(40.5+iTiga,-1,5.5); // KIRI ATAS
                            glVertex3f(41.5+iTiga,-1,5.5); // KANAN ATAS
                            glVertex3f(41.5+iTiga,-3,5.5); // KANAN BAWAH
                            iTiga+=2;
                    }

                //Jendela Lt 2
                int iDua=0;
                    for(i=0;i<5;i++){
                            glColor3f(1,1,1);
                            glVertex3f(40.5+iDua,-5.5,5.5); // KIRI BAWAH
                            glVertex3f(40.5+iDua,-3.5,5.5); // KIRI ATAS
                            glVertex3f(41.5+iDua,-3.5,5.5); // KANAN ATAS
                            glVertex3f(41.5+iDua,-5.5,5.5); // KANAN BAWAH
                            iDua+=2;
                    }

                 //Jendela Lt 1
                int iSatu=0;
                    for(i=0;i<5;i++){
                            glColor3f(1,1,1);
                            glVertex3f(40.5+iSatu,-8,5.5); // KIRI BAWAH
                            glVertex3f(40.5+iSatu,-6,5.5); // KIRI ATAS
                            glVertex3f(41.5+iSatu,-6,5.5); // KANAN ATAS
                            glVertex3f(41.5+iSatu,-8,5.5); // KANAN BAWAH
                            iSatu+=2;
                    }
        glEnd();

    //BAWAH
        //TENGAH BAGIAN KIRI
        glBegin(GL_QUADS);
        glColor3ub(180, 157, 143);
        glVertex3f(-20.0,-10.0,10.0); //KIRI ATAS
        glVertex3f(5.0,-10.0,10.0); //KANAN ATAS
        glVertex3f(5.0,-10.0,-10.0); // KANAN BAWAH
        glVertex3f(-20.0,-10.0,-10.0); //KIRI BAWAH

        //TENGAH BAGIAN KANAN
        glColor3ub(180, 157, 143);
        glVertex3f(5.0,-10.0,5.0); //KIRI ATAS
        glVertex3f(20.0,-10.0,5.0); //KANAN ATAS
        glVertex3f(20.0,-10.0,-10.0); // KANAN BAWAH
        glVertex3f(5.0,-10.0,-10.0); //KIRI BAWAH

        //KANAN
        glColor3ub(180, 157, 143);
        glVertex3f(20.0,-10.0,5.0); //KIRI ATAS
        glVertex3f(40.0,-10.0,5.0); //KANAN ATAS
        glVertex3f(40.0,-10.0,-10.0); //KANAN BAWAH
        glVertex3f(20.0,-10.0,-10.0); //KIRI BAWAH
            //PALING KANAN
            glColor3ub(180, 157, 143);
            glVertex3f(40.0,-10.0,5.0); //KIRI ATAS
            glVertex3f(40.0,-10.0,-10.0); //KIRI BAWAH
            glVertex3f(50.0,-10.0,-10.0); //KANAN BAWAH
            glVertex3f(50.0,-10.0,5.0); //KANAN ATAS
        //KIRI
        glColor3ub(180, 157, 143);
        glVertex3f(-20.0,-10.0,10.0); //KANAN ATAS
        glVertex3f(-40.0,-10.0,10.0); //KIRI ATAS
        glVertex3f(-40.0,-10.0,-10.0); //KIRI BAWAH
        glVertex3f(-20.0,-10.0,-10.0); //KANAN BAWAH
            //PALING KIRI
            glColor3ub(180, 157, 143);
            glVertex3f(-40.0,-10.0,10.0); //KANAN ATAS
            glVertex3f(-40.0,-10.0,-10.0); //KANAN BAWAH
            glVertex3f(-50.0,-10.0,-10.0); //KIRI BAWAH
            glVertex3f(-50.0,-10.0,10.0); //KIRI ATAS
        glEnd();

    //ATAP
        //BANGUNAN MIRING
            //DEPAN
            //KIRI2
            glBegin(GL_QUADS);
            glColor3ub(182, 153, 137);
            glVertex3f(-5.0,10.0,10.0); //KANAN BAWAH
            glVertex3f(-6.0,11.0,11.0); //KANAN ATAS
            glVertex3f(-21.0,11.0,11.0); //KIRI ATAS
            glVertex3f(-20.0,10.0,10.0); //KIRI BAWAH

            glEnd();
            //KIRI3
            glBegin(GL_QUADS);
            glColor3ub(182, 153, 137);
            glVertex3f(-20.0,10.0,10.0); //KANAN BAWAH
            glVertex3f(-21.0,11.0,11.0); //KANAN BAWAH
            glVertex3f(-21.0,11.0,-11.0); //KIRI ATAS
            glVertex3f(-20.0,10.0,-10.0); //KIRI BAWAH

            glEnd();
            //KIRI4
            glBegin(GL_QUADS);
            glColor3ub(182, 153, 137);
            glVertex3f(-20.0,8.0,5.0); //KANAN BAWAH
            glVertex3f(-20.0,9.0,6.0); //KANAN ATAS
            glVertex3f(-39.0,9.0,6.0); //KIRI ATAS
            glVertex3f(-40.0,8.0,5.0); //KIRI BAWAH
            //KANAN 4
            glVertex3f(20.0,8.0,5.0); //KIRI BAWAH
            glVertex3f(20.0,9.0,6.0); //KIRI ATAS
            glVertex3f(39.0,9.0,6.0); //KANAN ATAS
            glVertex3f(40.0,8.0,5.0); //KANAN BAWAH
            glEnd();
            //BANGUNAN KIRI 2
                //HADAP KANAN
                glBegin(GL_QUADS);
                glColor3ub(182, 153, 137);
                glVertex3f(-40.0,8.0,5.0); //KANAN BAWAH
                glVertex3f(-39.0,9.0,6.0); //KANAN ATAS
                glVertex3f(-39.0,9.0,11.0); //KIRI ATAS
                glVertex3f(-40.0,8.0,10.0); //KIRI BAWAH
                glEnd();
                //HADAP DEPAN
                glBegin(GL_QUADS);
                glColor3ub(182, 153, 137);
                glVertex3f(-40.0,8.0,10.0); //KANAN BAWAH
                glVertex3f(-39.0,9.0,11.0); //KANAN ATAS
                glVertex3f(-51.0,9.0,11.0); //KIRI ATAS
                glVertex3f(-50.0,8.0,10.0); //KIRI BAWAH
                glEnd();
            //BANGUNAN KANAN 2
                //HADAP KIRI

            //TAMPAK KIRI
            glBegin(GL_QUADS);
            glColor3ub(182, 153, 137);
            glVertex3f(-50.0,8.0,10.0); //KANAN BAWAH
            glVertex3f(-51.0,9.0,11.0); //KANAN ATAS
            glVertex3f(-51.0,9.0,-11.0); //KIRI ATAS
            glVertex3f(-50.0,8.0,-10.0); //KIRI BAWAH

            //TAMPAK BELAKANG
            //TENGAH
            glVertex3f(-20.0,10.0,-10.0); //KANAN BAWAH
            glVertex3f(-21.0,11.0,-11.0); //KANAN ATAS
            glVertex3f(21.0,11.0,-11.0); //KIRI ATAS
            glVertex3f(20.0,10.0,-10.0); //KIRI BAWAH
            //KANAN
            glColor3ub(182, 153, 137);
            glVertex3f(50.0,8.0,-10.0); //KIRI BAWAH
            glVertex3f(51.0,9.0,-11.0); //KANAN ATAS
            glVertex3f(20.0,9.0,-11.0); //KIRI ATAS
            glVertex3f(20.0,8.0,-10.0); //KIRI BAWAH
            //KIRI
            glVertex3f(-50.0,8.0,-10.0); //KANAN BAWAH
            glVertex3f(-51.0,9.0,-11.0); //KANAN ATAS
            glVertex3f(-20.0,9.0,-11.0); //KIRI ATAS
            glVertex3f(-20.0,8.0,-10.0); //KIRI BAWAH
            glEnd();
                //SEGITIGA KECIL
                    //KANAN
                    glBegin(GL_TRIANGLES);
                    glColor3ub(182, 153, 137);
                    glVertex3f(20.0,9.0,-11.0); //KIRI
                    glVertex3f(20.0,9.0,-10.0); //KANAN
                    glVertex3f(20.0,8.0,-10.0); //BAWAH
                    //KIRI
                    glVertex3f(-20.0,9.0,-11.0); //KANAN
                    glVertex3f(-20.0,9.0,-10.0); //KIRI
                    glVertex3f(-20.0,8.0,-10.0); //BAWAH
                    glEnd();

        //TENGAH
        glBegin(GL_QUADS);
        glColor3ub(186, 115, 69);
        glVertex3f(-21.0,11.0,11.0); //KIRI BAWAH
        glVertex3f(6.0,11.0,11.0); //KANAN BAWAH
        glVertex3f(6.0,11.0,-11.0); // KANAN ATAS
        glVertex3f(-21.0,11.0,-11.0); //KIRI ATAS

        //TENGAH BAGIAN KANAN
        glColor3ub(186, 115, 69);
        glVertex3f(5.0,11.0,5.0); //KIRI BAWAH
        glVertex3f(20.0,11.0,5.0); //KANAN BAWAH
        glVertex3f(20.0,11.0,-10.0); // KANAN ATAS
        glVertex3f(5.0,11.0,-10.0); //KIRI ATAS

        //KANAN
        glColor3ub(186, 115, 69);
        glVertex3f(20.0,9.0,6.0); //KIRI BAWAH
        glVertex3f(39.0,9.0,6.0); //KANAN BAWAH
        glVertex3f(39.0,9.0,-11.0); //KANAN ATAS
        glVertex3f(20.0,9.0,-11.0); //KIRI ATAS
            //PALING KANAN
            glColor3ub(186, 115, 69);
            glVertex3f(40.0,8.0,5.0); //KIRI BAWAH
            glVertex3f(39.0,9.0,-11.0); //KIRI ATAS
            glVertex3f(51.0,9.0,-11.0); //KANAN ATAS
            glVertex3f(50.0,8.0,5.0); //KANAN BAWAH
        //KIRI
        glColor3ub(186, 115, 69);
        glVertex3f(-20.0,10.0,10.0); //KANAN ATAS
        glVertex3f(-40.0,10.0,10.0); //KIRI ATAS
        glVertex3f(-39.0,9.0,-11.0); //KIRI BAWAH
        glVertex3f(-20.0,9.0,-11.0); //KANAN BAWAH
            //PALING KIRI
            glColor3ub(186, 115, 69);
            glVertex3f(-39.0,9.0,11.0); //KANAN BAWAH
            glVertex3f(-39.0,9.0,-11.0); //KANAN ATAS
            glVertex3f(-51.0,9.0,-11.0); //KIRI ATAS
            glVertex3f(-51.0,9.0,11.0); //KIRI BAWAH
            glEnd();


}

void tampil(void){
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

    OntarioCollegeofArtandDesignUniversity();

    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();

}

void keyboard(unsigned char key,int x,int y){
    switch(key){
        case 'w':
        case 'W':
            glTranslatef(0.0,0.0,3.0);
            break;
        case 'd' :
        case 'D' :
            glTranslatef(3.0,0.0,0.0);
            break;
        case 's':
        case 'S':
            glTranslatef(0.0,0.0,-3.0);
            break;
        case 'a':
        case 'A':
            glTranslatef(-3.0,0.0,0.0);
            break;
        case '7':
            glTranslatef(0.0,3.0,0.0);
            break;
        case '9':
            glTranslatef(0.0,-3.0,0.0);
            break;
        case '2':
            glRotatef(2.0,1.0,0.0,0.0);
            break;
        case '8':
            glRotatef(-2.0,1.0,0.0,0.0);
            break;
        case '6':
            glRotatef(2.0,0.0,1.0,0.0);
            break;
        case '4':
            glRotatef(-2.0,0.0,1.0,0.0);
            break;
        case '1':
            glRotatef(2.0,0.0,0.0,1.0);
            break;
        case '3':
            glRotatef(-2.0,0.0,0.0,1.0);
            break;
        case '5':
            if(is_depth){
                is_depth = 0;
                glDisable(GL_DEPTH_TEST);
            }
            else {
                is_depth = 1;
                glEnable(GL_DEPTH_TEST);
            }
    }
    tampil();
}

void idle(){
    if(!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}


void mouse(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x-yrot;
        ydiff = -y+xrot;
    }
    else
        mouseDown = false;
}


void mouseMotion(int x,int y){
    glLoadIdentity();
    gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
    glRotatef(xrot,1.0f,0.0f,0.0f);
    glRotatef(yrot,0.0f,1.0f,0.0f);
    if(mouseDown)
    {
        yrot = x-xdiff;
        xrot = y+ydiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar,int tinggi){
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glViewport(0, 0, lebar, tinggi);
    glLoadIdentity();
    gluPerspective(50.0,lebar/tinggi,5.0,500.0);
    glTranslatef(0.0,-5.0,-150.0);
    glMatrixMode(GL_MODELVIEW);
}

int main (int argc, char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("Ontario College of Art and Design University");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}
