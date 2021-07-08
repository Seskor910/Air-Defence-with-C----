#include <iostream>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<mmsystem.h>
void menu();
void HowToPlay();
void creator();
void gameover();
void VictoryScreen();
void loading();
void loading2();
void Stage2();
void game();

void TembakanTurret(float x,float y,float sc)
{
    circle(x,y,sc);
}
void TurretBoss(float x,float y,float sc)
{
    setcolor(RED);
    settextstyle(10,VERT_DIR,2);
    outtextxy(950,470,"USBC");
    float xa=-1,ya=-2,xb=1,yb=-2;
    float xc=-1,yc=2,xd=1,yd=2;
    float xe=-2,ye=-1,xf=-2,yf=1;
    float xg=-1,yg=-1,xh=-1,yh=1;
    float xi=1,yi=-3,xj=4,yj=-3;
    float xk=1,yk=3,xl=4,yl=3;
    //kiri
    line(xf*sc+x,yf*sc+y,xe*sc+x,ye*sc+y);
    line(xe*sc+x,ye*sc+y,xg*sc+x,yg*sc+y);
    line(xf*sc+x,yf*sc+y,xh*sc+x,yh*sc+y);
    //line(xg*sc+x,yg*sc+y,xh*sc+x,yh*sc+y);
    //tengah
    line(xc*sc+x,yc*sc+y,xa*sc+x,ya*sc+y);
    line(xa*sc+x,ya*sc+y,xb*sc+x,yb*sc+y);
    line(xc*sc+x,yc*sc+y,xd*sc+x,yd*sc+y);
    //kanan
    line(xk*sc+x,yk*sc+y,xi*sc+x,yi*sc+y);
    line(xi*sc+x,yi*sc+y,xj*sc+x,yj*sc+y);
    line(xk*sc+x,yk*sc+y,xl*sc+x,yl*sc+y);
}
void turretbawah(float x,float y,float sc)
{
    float xa=-2,ya=1,xb=2,yb=1;
    float xc=1,yc=2,xd=-1,yd=2;
    float xe=-3,ye=0,xf=3,yf=0;
    float xg=-2,yg=0,xh=2,yh=0;
    float xi=1,yi=1,xj=-1,yj=1;
    float xm=-3,ym=-1,xn=3,yn=-1;
    //bawah turret
    setcolor(MAGENTA);
    line(xm*sc+x,ym*sc+y,xe*sc+x,ye*sc+y);
    line(xe*sc+x,ye*sc+y,xg*sc+x,yg*sc+y);
    line(xg*sc+x,yg*sc+y,xh*sc+x,yh*sc+y);
    line(xh*sc+x,yh*sc+y,xf*sc+x,yf*sc+y);
    line(xf*sc+x,yf*sc+y,xn*sc+x,yn*sc+y);
    //tengah turret
    setcolor(RED);
    line(xg*sc+x,yg*sc+y,xa*sc+x,ya*sc+y);
    line(xa*sc+x,ya*sc+y,xj*sc+x,yj*sc+y);
    line(xj*sc+x,yj*sc+y,xi*sc+x,yi*sc+y);
    line(xi*sc+x,yi*sc+y,xb*sc+x,yb*sc+y);
    line(xb*sc+x,yb*sc+y,xh*sc+x,yh*sc+y);
    //atas turret
    setcolor(BLUE);
    line(xj*sc+x,yj*sc+y,xd*sc+x,yd*sc+y);
    line(xd*sc+x,yd*sc+y,xc*sc+x,yc*sc+y);
    line(xc*sc+x,yc*sc+y,xi*sc+x,yi*sc+y);
}
void turret(float x,float y,float sc)
{
    float xa=-2,ya=-1,xb=2,yb=-1;
    float xc=1,yc=-2,xd=-1,yd=-2;
    float xe=-3,ye=0,xf=3,yf=0;
    float xg=-2,yg=0,xh=2,yh=0;
    float xi=1,yi=-1,xj=-1,yj=-1;
    float xm=-3,ym=1,xn=3,yn=1;
    //bawah turret
    setcolor(MAGENTA);
    line(xm*sc+x,ym*sc+y,xe*sc+x,ye*sc+y);
    line(xe*sc+x,ye*sc+y,xg*sc+x,yg*sc+y);
    line(xg*sc+x,yg*sc+y,xh*sc+x,yh*sc+y);
    line(xh*sc+x,yh*sc+y,xf*sc+x,yf*sc+y);
    line(xf*sc+x,yf*sc+y,xn*sc+x,yn*sc+y);
    //tengah turret
    setcolor(RED);
    line(xg*sc+x,yg*sc+y,xa*sc+x,ya*sc+y);
    line(xa*sc+x,ya*sc+y,xj*sc+x,yj*sc+y);
    line(xj*sc+x,yj*sc+y,xi*sc+x,yi*sc+y);
    line(xi*sc+x,yi*sc+y,xb*sc+x,yb*sc+y);
    line(xb*sc+x,yb*sc+y,xh*sc+x,yh*sc+y);
    //atas turret
    setcolor(BLUE);
    line(xj*sc+x,yj*sc+y,xd*sc+x,yd*sc+y);
    line(xd*sc+x,yd*sc+y,xc*sc+x,yc*sc+y);
    line(xc*sc+x,yc*sc+y,xi*sc+x,yi*sc+y);
}
void spike(float x,float y,float sc)
{
    float xa=-1,xb=0,xc=1;
    float ya=0,yb=-2,yc=0;
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    line(xa*sc+x,ya*sc+y,xb*sc+x,yb*sc+y);
    line(xb*sc+x,yb*sc+y,xc*sc+x,yc*sc+y);
    line(xa*sc+x,ya*sc+y,xc*sc+x,yc*sc+y);
    floodfill(x-1,y-1,BROWN);
}
void SpikeAtas(float x,float y,float sc)
{
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    float xa=0,xb=1,xc=-1;
    float ya=2,yb=0,yc=0;
    line(xa*sc+x,ya*sc+y,xb*sc+x,yb*sc+y);
    line(xa*sc+x,ya*sc+y,xc*sc+x,yc*sc+y);
    line(xb*sc+x,yb*sc+y,xc*sc+x,yc*sc+y);
    floodfill(x+1,y+1,BROWN);
}
void musuh(float xm,float ym,float sc)
{
    float x[87], y[87];
    int i;
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    x[0]=0;     y[0]=-0.21;
    x[1]=0.02;  y[1]=-0.21;
    x[2]=0.04;  y[2]=-0.21;
    x[3]=0.06;  y[3]=-0.2;
    x[4]=0.08;  y[4]=-0.2;
    x[5]=0.1;   y[5]=-0.19;
    x[6]=0.12;  y[6]=-0.19;
    x[7]=0.14;  y[7]=-0.18;
    x[8]=0.16;  y[8]=-0.16;
    x[9]=0.18;  y[9]=-0.15;
    x[10]=0.2;  y[10]=-0.13;
    x[11]=0.22; y[11]=-0.11;
    x[12]=0.24; y[12]=-0.08;
    x[13]=0.25; y[13]=-0.06;
    x[14]=0.26; y[14]=-0.04;
    x[15]=0.27; y[15]=-0.02;
    x[16]=0.28; y[16]=0;
    x[17]=0.28; y[17]=0.02;
    x[18]=0.28; y[18]=0.04;
    x[19]=0.28; y[19]=0.06;
    x[20]=0.28; y[20]=0.08;
    x[21]=0.28; y[21]=0.1;
    x[22]=0.28; y[22]=0.12;
    x[23]=0.28; y[23]=0.14;
    x[24]=0.27; y[24]=0.16;
    x[25]=0.26; y[25]=0.18;
    x[26]=0.25; y[26]=0.2;
    x[27]=0.24; y[27]=0.22;
    x[28]=0.23; y[28]=0.24;
    x[29]=0.21; y[29]=0.26;
    x[30]=0.2;  y[30]=0.28;
    x[31]=0.18; y[31]=0.29;
    x[32]=0.16; y[32]=0.31;
    x[33]=0.14; y[33]=0.32;
    x[34]=0.12; y[34]=0.33;
    x[35]=0.1;  y[35]=0.34;
    x[36]=0.08; y[36]=0.35;
    x[37]=0.06; y[37]=0.35;
    x[38]=0.04; y[38]=0.36;
    x[39]=0.02; y[39]=0.36;
    x[40]=0;    y[40]=0.36;
    x[41]=-0.02;y[41]=0.36;
    x[42]=-0.04;y[42]=0.36;
    x[43]=-0.06;y[43]=0.36;
    x[44]=-0.08;y[44]=0.35;
    x[45]=-0.09;y[45]=0.35;
    x[46]=-0.1; y[46]=0.35;
    x[47]=-0.11;y[47]=0.34;
    x[48]=-0.12;y[48]=0.34;
    x[49]=-0.13;y[49]=0.33;
    x[50]=-0.14;y[50]=0.32;
    x[51]=-0.15;y[51]=0.31;
    x[52]=-0.16;y[52]=0.3;
    x[53]=-0.17;y[53]=0.29;
    x[54]=-0.18;y[54]=0.28;
    x[55]=-0.19;y[55]=0.27;
    x[56]=-0.19;y[56]=0.26;
    x[57]=-0.2; y[57]=0.25;
    x[58]=-0.2; y[58]=0.25;
    x[59]=-0.21;y[59]=0.26;
    x[60]=-0.22;y[60]=0.27;
    x[61]=-0.23;y[61]=0.28;
    x[62]=-0.24;y[62]=0.22;
    x[63]=-0.25;y[63]=0.2;
    x[64]=-0.26;y[64]=0.19;
    x[65]=-0.27;y[65]=0.17;
    x[66]=-0.28;y[66]=0.17;
    x[67]=-0.29;y[67]=0.15;
    x[68]=-0.29;y[68]=0.13;
    x[69]=-0.3; y[69]=0.11;
    x[70]=-0.3; y[70]=0.09;
    x[71]=-0.3; y[71]=0.07;
    x[72]=-0.3; y[72]=0.05;
    x[73]=-0.3; y[73]=0.03;
    x[74]=-0.3; y[74]=0.01;
    x[75]=-0.3; y[75]=-0.01;
    x[76]=-0.29;y[76]=-0.03;
    x[77]=-0.29;y[77]=-0.05;
    x[78]=-0.28;y[78]=-0.07;
    x[79]=-0.27;y[79]=-0.09;
    x[80]=-0.27;y[80]=-0.1;
    x[81]=-0.25;y[81]=-0.06;
    x[82]=-0.23;y[82]=-0.1;
    x[83]=-0.2; y[83]=-0.13;
    x[84]=-0.16;y[84]=-0.16;
    x[85]=-0.12;y[85]=-0.19;
    x[86]=-0.08;y[86]=-0.2;
    x[87]=-0.04;y[87]=-0.21;

    for(i=0;i<86;i++)
    {
       line(x[i]*sc+xm,y[i]*sc+ym,x[i+1]*sc+xm,y[i+1]*sc+ym);
    }
    floodfill(xm+1,ym+1,GREEN);



}

void meteor(float x,float y,float sc)
{
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(x,y,sc);
    floodfill(x+1,y+1,RED);
}

void MeteorMusuh(float x,float y,float sc)
{
    circle(x,y,sc);
}
void VictoryScreen(float x,float y)
{
    setcolor(WHITE);
    clearmouseclick(WM_LBUTTONDOWN);
    while(1)
    {
        settextstyle(5,HORIZ_DIR,5);
        outtextxy(x,y,"You Win!");
        outtextxy(x,y+200,"Press Enter To Return To Main Menu");
        if(GetAsyncKeyState(VK_RETURN))
        {
            cleardevice();
            return menu();
        }
        delay(100);
        cleardevice();
    }
}
void awan(float x,float y,float sc)
{
    //setcolor(WHITE);
    //setfillstyle(1,WHITE);
    int x0=-2;
    int y0=3;
    int x1=2;
    int y1=2;
    rectangle(x0*sc+x,-y0*sc+y,x1*sc+x,-y1*sc+y);
    //floodfill(x+1,y+2,WHITE);

}



void airsupport(float xp,float yp,float sc)
{

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        int i;
        float x[13], y[13];
        x[0]=0;   y[0]=-3;
        x[1]=1;   y[1]=0;
        x[2]=4;   y[2]=0;
        x[3]=5;   y[3]=1;
        x[4]=1;   y[4]=1;
        x[5]=0;   y[5]=3;
        x[6]=-1;  y[6]=1;
        x[7]=-4;  y[7]=1;
        x[8]=-4;  y[8]=0;
        x[9]=-4;  y[9]=-2;
        x[10]=-3; y[10]=0;
        x[11]=-1; y[11]=0;
        x[12]=0;  y[12]=-3;
        x[13]=-1; y[13]=0;


        for(i=0;i<12;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        floodfill(-2*sc+xp,0.5*sc+yp,WHITE);




}

void tembakan(float xt, float yt, float r)
{
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    int xp=0,yp=-5;
    circle(xp+xt,yp+yt,r);
    floodfill(1+xt,-4+yt,BLUE);
}

void loading()
{
    while(1)
    {
        float xp=300,yp=300,sc=10;
        setcolor(WHITE);
        rectangle(178,460,180+520,500);
        airsupport(xp,yp,sc);
        for(int i=0;i<520;i++)
        {
            rectangle(178,460,180+i,500);
            if(i<520)
            {
                settextstyle(4,HORIZ_DIR,3);
                outtextxy(380,465,"Loading");
            }
            delay(5);
        }
        break;
        cleardevice();

    }
    Beep(783.9909,500);
    cleardevice();
    game();

}

void HowToPlay()
{
    clearmouseclick(WM_LBUTTONDOWN);
    while(1)
    {
        float xb=mousex();
        float yb=mousey();
        outtextxy(200,300,"Use The Mouse To Control The Plane");
        outtextxy(200,360,"Left Click To Shoot");
        outtextxy(200,380,"Avoid and Shoot The Meteors To Gain Points");
        rectangle(80,680,320,640);
        outtextxy(80,650,"Return To Menu");
        if((xb>80)&&(xb<320)&&(yb>640)&&(yb<680)&&ismouseclick(WM_LBUTTONDOWN))
        {
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return menu();
        }
        delay(100);
        cleardevice();



    }
}
void healthbar(float i)
{
    setcolor(WHITE);
    rectangle(178+i,100,180+520,140);
    rectangle(178,100,180+520,140);
    floodfill(179+i,101,WHITE);


}
void healthbar2(float i)
{
    setcolor(WHITE);
    rectangle(178+i,753,180+520,793);
    rectangle(178,753,180+520,793);
    floodfill(179+i,754,WHITE);
}
void creator()
{
    clearmouseclick(WM_LBUTTONDOWN);
    while(1)
    {
      float x=mousex();
      float y=mousey();
      //readimagefile("lambang-its-png-v1.jpg",50,50,100,100);
      outtextxy(500,200,"Made By");
      outtextxy(500,400,"Rafi Arya Satyaji");
      outtextxy(500,600,"Teknik Komputer 2020");
      rectangle(80,680,320,640);
      outtextxy(100,651,"Return To Menu");
      if((x>80)&&(x<320)&&(y>640)&&(y<680)&&ismouseclick(WM_LBUTTONDOWN))
      {
          cleardevice();
          clearmouseclick(WM_LBUTTONDOWN);
          return menu();
      }
      delay(100);
      cleardevice();
    }

}
void game()
{
    int i=0, bp=0,page=0;
    float xa1=0,ya1=200,sca=3;
    float xa2=50,ya2=250,xa3=100,ya3=150,xa4=0,ya4=400;
    int xpesawat=100,ypesawat=500,scp=7;
    int maxx=getmaxx();
    float xtembakan1,ytembakan1;
    float xmusuh=980,ymusuh=500,scmusuh=130;
    float ytm=500;
    float xmt1=780,ymt1=0,scmt1=10,xmt2=680,xmt3=620,xmt4=560,xmt5=500,xmt6=400;
    float xtm=900;
    float xmt7=getmaxx();
    float ymt2=100,ymt3=300,ymt4=400,ymt5=500,ymt6=600,ymt7=800;
    char score[999];
    char health[100];
    float scorePesawat=0;
    float healthPesawat=100;
    PlaySound("menu.wav",NULL,SND_LOOP|SND_ASYNC);
    while(true)
    {
        //background gameplay
        setcolor(WHITE);
        sprintf(score,"score=%.f",scorePesawat);
        outtextxy(60,60,score);
        sprintf(health,"health=%.f",healthPesawat);
        outtextxy(60,20,health);
        //setfillstyle(SOLID_FILL,WHITE);
        awan(xa1,ya1,sca);
        awan(xa2,ya2,sca);
        awan(xa3,ya3,sca);
        awan(xa4,ya4,sca);
        //floodfill(-5,192,WHITE);
        airsupport(xpesawat,ypesawat,scp);
        musuh(xmusuh,ymusuh,scmusuh);
        meteor(xmt1,ymt1,scmt1);
        meteor(xmt2,ymt1,scmt1);
        meteor(xmt3,ymt1,scmt1);
        meteor(xmt4,ymt1,scmt1);
        meteor(xmt5,ymt1,scmt1);
        meteor(xmt6,ymt1,scmt1);
        meteor(xmt7,ymt2,scmt1);
        meteor(xmt7,ymt3,scmt1);
        meteor(xmt7,ymt4,scmt1);
        meteor(xmt7,ymt5,scmt1);
        meteor(xmt7,ymt6,scmt1);
        meteor(xmt7,ymt7,scmt1);
        MeteorMusuh(xtm,ytm,scmt1);
        //Pergerakan gameplay
        //i=i+2;
        xa1=xa1+2;
        if(xa1>getmaxx())
        {
            xa1=0;
        }
        xa2=xa2+2;
        if(xa2>getmaxx())
        {
            xa2=50;
        }
        xa3=xa3+2;
        if(xa3>getmaxx())
        {
            xa3=10;
        }
        xa4=xa4+2;
        if(xa4>getmaxx())
        {
            xa4=0;
        }
        xpesawat=mousex();
        ypesawat=mousey();
        ymusuh=ymusuh-1;
        if(ymusuh<0)
        {
            ymusuh=getmaxy();
        }
        ymt1=ymt1+3;
        if(ymt1>maxx)
        {
            ymt1=0;
        }
        xmt7=xmt7-5;
        if(xmt7<0)
        {
            xmt7=getmaxx();
        }
        ytm=ytm-1;
        if(ytm<0)
        {
            ytm=getmaxy();
        }
        xtm=xtm-5;
        if(xtm<0)
        {
            xtm=450;
        }

        if(ismouseclick(WM_LBUTTONDOWN))
        {
                xtembakan1=mousex();
                ytembakan1=mousey();
                bp=1;
                clearmouseclick(WM_LBUTTONDOWN);


        }
        //kalo peluru dr pesawat kena
        if(bp==1)
        {
                xtembakan1+=20;
                tembakan(xtembakan1,ytembakan1,7);
                if((xtembakan1>xmusuh-37.7)&&(xtembakan1<xmusuh+36.4)&&(ytembakan1>ymusuh-27.3)&&(ytembakan1<ymusuh+46.8))
                {
                    ymusuh=rand()%200;
                    scorePesawat+=5;
                }

        }
        if((xpesawat<xtm+20)&&(xpesawat>xtm-20)&&(ypesawat<ytm+20)&&(ypesawat>ytm-20))
        {
            ytm=rand()%500;
            healthPesawat-=1;
        }
        if((xpesawat<xmt1+20)&&(xpesawat>xmt1-20)&&(ypesawat<ymt1+20)&&(ypesawat>ymt1-20))
        {
            healthPesawat-=1;
        }
        if((xpesawat<xmt2+20)&&(xpesawat>xmt2-20)&&(ypesawat<ymt1+20)&&(ypesawat>ymt1-20))
        {
            healthPesawat-=1;
        }
        if((xpesawat<xmt3+20)&&(xpesawat>xmt3-20)&&(ypesawat<ymt1+20)&&(ypesawat>ymt1-20))
        {
            healthPesawat-=1;
        }
        if((xpesawat<xmt4+20)&&(xpesawat>xmt4-20)&&(ypesawat<ymt1+20)&&(ypesawat>ymt1-20))
        {
            healthPesawat-=1;
        }
        if((xpesawat<xmt5+20)&&(xpesawat>xmt5-20)&&(ypesawat<ymt1+20)&&(ypesawat>ymt1-20))
        {
            healthPesawat-=1;
        }
        if((xpesawat<xmt6+20)&&(xpesawat>xmt6-20)&&(ypesawat<ymt1+20)&&(ypesawat>ymt1-20))
        {
            //xmt6=rand()%439;
            //ymt1=rand()%121;
            healthPesawat-=1;
        }
        if((xpesawat<xmt7+20)&&(xpesawat>xmt7-20)&&(ypesawat<ymt2+20)&&(ypesawat>ymt2-20))
        {
            //xmt7=rand()%328;
            //ymt2=rand()%489;
            healthPesawat-=1;
        }
        if((xpesawat<xmt7+20)&&(xpesawat>xmt7-20)&&(ypesawat<ymt3+20)&&(ypesawat>ymt3-20))
        {
            //xmt7=rand()%400;
            //ymt3=rand()%400;
            healthPesawat-=1;
        }
        if((xpesawat<xmt7+20)&&(xpesawat>xmt7-20)&&(ypesawat<ymt4+20)&&(ypesawat>ymt4-20))
        {
            //xmt7=rand()%532;
            //ymt4=rand()%600;
            healthPesawat-=1;
        }
        if((xpesawat<xmt7+20)&&(xpesawat>xmt7-20)&&(ypesawat<ymt5+20)&&(ypesawat>ymt5-20))
        {
            //xmt7=rand()%321;
            //ymt5=rand()%300;
            healthPesawat-=1;
        }
        if((xpesawat<xmt7+20)&&(xpesawat>xmt7-20)&&(ypesawat<ymt6+20)&&(ypesawat>ymt6-20))
        {
            //xmt7=rand()%501;
            //ymt6=rand()%256;
            healthPesawat-=1;
        }
        if((xpesawat<xmt7+20)&&(xpesawat>xmt7-20)&&(ypesawat<ymt7+20)&&(ypesawat>ymt7-20))
        {
            //xmt7=rand()%704;
            //ymt7=rand()%400;
            healthPesawat-=1;
        }
        if(healthPesawat==0)
        {
            PlaySound(NULL,NULL,0);
            cleardevice();
            gameover();
            break;
        }
        if(scorePesawat==50)
        {
            PlaySound(NULL,NULL,0);
            cleardevice();
            loading2();
            break;
        }

        delay(10);
        cleardevice();
    }
}
void loading2()
{
    while(1)
    {
        float xp=300,yp=300,sc=10;
        setcolor(WHITE);
        rectangle(178,460,180+520,500);
        airsupport(xp,yp,sc);
        for(int i=0;i<520;i++)
        {
            rectangle(178,460,180+i,500);
            if(i<520)
            {
                settextstyle(4,HORIZ_DIR,3);
                outtextxy(350,465,"Loading Stage 2");
            }
            delay(5);
        }
        break;
        cleardevice();

    }
    Beep(783.9909,500);
    cleardevice();
    Stage2();
}
void Stage2()
{
    float xspike1=60,yspike1=700,yspikeN=700,yspikeB=200,scspike=20;
    float xspike2=100,xspike3=140,xspike4=180,xspike5=220,xspike6=260,xspike7=300,xspike8=340;
    float xspike9=380,xspike10=520,xspike11=560,xspike12=600,xspike13=640,xspike14=680,xspike15=720;
    float xspike16=760,xspike17=800,xspike18=840,xspike19=880,xspike20=920,xspike21=960;
    float xturret1=450,yturret1=686,scturret=7;
    float yspike2=200;
    float yturret2=214;
    float xtembakan1=0*7+450,ytembakan1=1.5*7+686,ytembakan2=1.5*7+214,sctembakan=10;
    float xtembakanmusuh=900,ytembakanmusuh=500,sctembakanmusuh=20;
    float xturretboss=900,yturretboss=500,scturretboss=15;
    float xpesawat=0,ypesawat=500,scpesawat=5;
    float xtembakanpesawat,ytembakanpesawat;
    int bp=0,i=0,j=0;
    float xs=100,ys=250;
    PlaySound("Stage2 Sound.wav",NULL,SND_LOOP|SND_ASYNC);
    while(true)
    {
        //background
        //bagian bawah
        settextstyle(10,HORIZ_DIR,2);
        outtextxy(178,80,"USBC Defence System");
        outtextxy(178,723,"Air Plane");
        healthbar(i);
        healthbar2(j);
        line(0,700,getmaxx(),700);
        spike(xspike1,yspike1,scspike);
        spike(xspike2,yspike1,scspike);
        spike(xspike3,yspike1,scspike);
        spike(xspike4,yspikeN,scspike);
        spike(xspike5,yspike1,scspike);
        spike(xspike6,yspike1,scspike);
        spike(xspike7,yspike1,scspike);
        spike(xspike8,yspikeN,scspike);
        spike(xspike9,yspike1,scspike);
        spike(xspike10,yspike1,scspike);
        spike(xspike11,yspike1,scspike);
        spike(xspike12,yspikeN,scspike);
        spike(xspike13,yspike1,scspike);
        spike(xspike14,yspike1,scspike);
        spike(xspike15,yspike1,scspike);
        spike(xspike16,yspikeN,scspike);
        spike(xspike17,yspike1,scspike);
        spike(xspike18,yspikeN,scspike);
        spike(xspike19,yspike1,scspike);
        spike(xspike20,yspike1,scspike);
        turret(xturret1,yturret1,scturret);
        //bagian atas
        line(0,200,getmaxx(),200);
        SpikeAtas(xspike1,yspikeB,scspike);
        SpikeAtas(xspike2,yspike2,scspike);
        SpikeAtas(xspike3,yspike2,scspike);
        SpikeAtas(xspike4,yspike2,scspike);
        SpikeAtas(xspike5,yspike2,scspike);
        SpikeAtas(xspike6,yspikeB,scspike);
        SpikeAtas(xspike7,yspike2,scspike);
        SpikeAtas(xspike8,yspike2,scspike);
        SpikeAtas(xspike9,yspike2,scspike);
        SpikeAtas(xspike10,yspikeB,scspike);
        SpikeAtas(xspike11,yspike2,scspike);
        SpikeAtas(xspike12,yspike2,scspike);
        SpikeAtas(xspike13,yspike2,scspike);
        SpikeAtas(xspike14,yspikeB,scspike);
        SpikeAtas(xspike15,yspike2,scspike);
        SpikeAtas(xspike16,yspike2,scspike);
        SpikeAtas(xspike17,yspike2,scspike);
        SpikeAtas(xspike18,yspikeB,scspike);
        SpikeAtas(xspike19,yspike2,scspike);
        SpikeAtas(xspike20,yspike2,scspike);
        turretbawah(xturret1,yturret2,scturret);
        TurretBoss(xturretboss,yturretboss,scturretboss);
        TembakanTurret(xtembakan1,ytembakan1,sctembakan);
        TembakanTurret(xtembakan1,ytembakan2,sctembakan);
        TembakanTurret(xtembakanmusuh,ytembakanmusuh,sctembakanmusuh);
        //karakter utama
        airsupport(xpesawat,ypesawat,scpesawat);
        //battle
        //pergerakan karakter
        xpesawat=mousex();
        ypesawat=mousey();
        //tembakan turret
        ytembakan1=ytembakan1-2.5;
        if(ytembakan1<yspike2)
        {
            ytembakan1=1.5*7+686;
        }
        ytembakan2=ytembakan2+2;
        if(ytembakan2>yspike1)
        {
            ytembakan2=1.5*7+214;
        }
        xtembakanmusuh=xtembakanmusuh-6;
        if(xtembakanmusuh<0)
        {
            xtembakanmusuh=900;
        }
        //spike
        yspikeN=yspikeN-2;
        if(yspikeN<yspike2)
        {
            yspikeN=700;
        }
        yspikeB=yspikeB+2;
        if(yspikeB>yspike1)
        {
            yspikeB=200;
        }
        if(ypesawat<=200)
        {
            ypesawat=200;
        }
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            xtembakanpesawat=mousex();
            ytembakanpesawat=mousey();
            bp=1;
        }
        if(bp==1)
        {
            xtembakanpesawat+=23;
            TembakanTurret(xtembakanpesawat,ytembakanpesawat,9);
            if((xtembakanpesawat>xturretboss-30)&&(xtembakanpesawat<xturretboss+60)&&(ytembakanpesawat>yturretboss-5)&&(ytembakanpesawat<yturretboss+30))
            {
                i+=10;
            }

        }
        if((xpesawat<xtembakanmusuh+25)&&(xpesawat>xtembakanmusuh-20)&&(ypesawat<ytembakanmusuh+15)&&(ypesawat>ytembakanmusuh-45))
           {
               j+=2;
           }
        if((xpesawat<xspike4+20)&&(xpesawat>xspike4-20)&&(ypesawat<yspikeN+0)&&(ypesawat>yspikeN-40))
           {
               j+=2;
           }
        if((xpesawat<xspike8+20)&&(xpesawat>xspike8-20)&&(ypesawat<yspikeN+0)&&(ypesawat>yspikeN-40))
           {
               j+=2;
           }
        if((xpesawat<xspike12+20)&&(xpesawat>xspike12-20)&&(ypesawat<yspikeN+0)&&(ypesawat>yspikeN-40))
           {
               j+=2;
           }
        if((xpesawat<xspike16+20)&&(xpesawat>xspike16-20)&&(ypesawat<yspikeN+0)&&(ypesawat>yspikeN-40))
          {
               j+=2;
          }
        if((xpesawat<xspike18+20)&&(xpesawat>xspike18-20)&&(ypesawat<yspikeN+0)&&(ypesawat>yspikeN-40))
          {
            j+=2;
          }
        if((xpesawat<xspike1+20)&&(xpesawat>xspike1-20)&&(ypesawat<yspikeB+40)&&(ypesawat>yspikeB-0))
          {
              j+=2;
          }
        if((xpesawat<xspike6+20)&&(xpesawat>xspike6-20)&&(ypesawat<yspikeB+40)&&(ypesawat>yspikeB-0))
          {
            j+=2;
          }
        if((xpesawat<xspike10+20)&&(xpesawat>xspike10-20)&&(ypesawat<yspikeB+40)&&(ypesawat>yspikeB-0))
          {
            j+=2;
          }
        if((xpesawat<xspike14+20)&&(xpesawat>xspike14-20)&&(ypesawat<yspikeB+40)&&(ypesawat>yspikeB-0))
          {
            j+=2;
          }
        if((xpesawat<xspike18+20)&&(xpesawat>xspike18-20)&&(ypesawat<yspikeB+40)&&(ypesawat>yspikeB-0))
          {
            j+=2;
          }
        if(j==520)
        {
            PlaySound(NULL,NULL,0);
            cleardevice();
            gameover();
            break;
        }
        if(i==520)
        {
            PlaySound(NULL,NULL,0);
            cleardevice();
            VictoryScreen(xs,ys);
            break;
        }
        delay(10);
        cleardevice();



    }

}

void gameover()
{
    setcolor(WHITE);
    sndPlaySound("Game over sound.wav",SND_ASYNC);
    while(1)
    {
        settextstyle(10,HORIZ_DIR,3);
        outtextxy(200,300,"Your plane Cannot Advance Anymore");
        outtextxy(300,500,"Press Enter To Main Menu");
        if(GetAsyncKeyState(VK_RETURN))
        {
            cleardevice();
            menu();
        }
        delay(5);
        cleardevice();
    }
}

void menu()
{
    //PlaySound("Soundtrack.wav",NULL,SND_LOOP|SND_ASYNC);
    while(1)
        {
            float xp=600,yp=300,sc=13;
            int xb=mousex();
            int yb=mousey();
            airsupport(xp,yp,sc);
            setcolor(WHITE);
            settextstyle(5,HORIZ_DIR,3);
            outtextxy(500,100,"Air Defence");
            rectangle(80,500,320,460);
            outtextxy(180,470,"Play");
            rectangle(80,620,320,580);
            outtextxy(120,590,"How To Play");
            rectangle(80,700,320,660);
            outtextxy(180,670,"Credits");
            circle(xb,yb,3);
            if((xb>80)&&(xb<320)&&(yb>460)&&(yb<500)&&ismouseclick(WM_LBUTTONDOWN))
            {
                //PlaySound(NULL,NULL,0);
                cleardevice();
                loading();
                clearmouseclick(WM_LBUTTONDOWN);
                break;
            }
            if((xb>80)&&(xb<320)&&(yb>580)&&(yb<620)&&ismouseclick(WM_LBUTTONDOWN))
            {
                cleardevice();
                HowToPlay();
                clearmouseclick(WM_LBUTTONDOWN);
                break;

            }
            if((xb>80)&&(xb<320)&&(yb>660)&&(yb<700)&&ismouseclick(WM_LBUTTONDOWN))
            {
                cleardevice();
                creator();
                clearmouseclick(WM_LBUTTONDOWN);
                break;
            }
            delay(10);
            cleardevice();
        }



}


int main()
{
    initwindow(1000,1000);
    menu();


}
