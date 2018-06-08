#include"iGraphics.h"
#include<stdio.h>
#include<stdlib.h>

int  x=26,count=0,dummy,flag=0,temp=0,count1=0,count2=0,j,l,pic_y=280;
int a[7]= {100,200,300,400,500,600,700};
int z[7]= {800,900,1000,1100,1200,1300,1400};
int b=600,c,d,ip,i=2,dx=1,t;

int height[7]= {823,350,650,367,570,591,950};
int height41[7]= {230,150,245,108,275,169,201};
int height71[7]= {120,277,250,223,280,270,100};
int height119[7]= {277,120,268,106,270,260,99};
int height161[7]= {233,281,166,209,198,288,111};
int height130[7]={205,180,177,111,100,156,160};

int heightup2[7]= {145,245,105,87,177,245,133};

int heightlast[7]= {255,287,288,189,290,278,177};
int height28[7]= {233,281,155,209,290,188,100};
int height70[7]= {187,177,132,264,200,141,288};
int back[7];
int back2[7];
int height2[7]= {540,243,687,493,660,999,540};

int heightup[7]= {156,46,154,197.177,223,71};
int height74[7]={170,66,50,120,109,99,190};

bool musicOn=true;
bool music=true;
bool music1=true;
int on=100;

int var=1;
int check=0;
int hit=0;

FILE *fp;





int u=290;
double dy=60;
char s[1000];
int q=240;
char s1[1000];


//main game function



void iDraw()
{
    if(flag==0 && count==0)
    {
        iClear();

        iSetColor(0,0,0);

        iShowBMP(0,0,"angry_birds___poached_eggs_theme_i_background_by_angrybirdsstuff-d6qa909.bmp");

        iText(300,450,"FLAPPY BIRD",GLUT_BITMAP_TIMES_ROMAN_24);

        iRectangle(300,300,100,50);
        iText(320,320,"PLAY",GLUT_BITMAP_TIMES_ROMAN_24);

        iRectangle(300,230,200,50);
        iText(320,250,"HOW TO PLAY",GLUT_BITMAP_TIMES_ROMAN_24);

        iRectangle(300,160,180,50);
        iText(320,180,"HIGHSCORES",GLUT_BITMAP_TIMES_ROMAN_24);

        iRectangle(300,90,200,50);
        iText(320,110,"QUIT GAME :(",GLUT_BITMAP_TIMES_ROMAN_24);


    }
    if(flag==1)
    {
		iClear();

		 

		iShowBMP(0,0,"f640fdc882b5dbf953d5eaac6c11d0cb.bmp");

        
        iFilledCircle(50,550,10);
        iText(65,545,"GO BACK",GLUT_BITMAP_HELVETICA_18);

        iText(300,530,"HOW TO PLAY??",GLUT_BITMAP_TIMES_ROMAN_24);

        iText(150,400,"It's pretty simple.All you gotto do is lift the bird pressing spacebar",GLUT_BITMAP_HELVETICA_18);
        iText(150,370,"Make sure you keep on pressing,else your bird is gonna fall.",GLUT_BITMAP_HELVETICA_18);
        iText(150,340,"The game is over if any obstacle is hi t or if the bird falls down",GLUT_BITMAP_HELVETICA_18);
        iText(150,310,"Be careful About the controls,after score of 50 or more its going to get",GLUT_BITMAP_HELVETICA_18);
        iText(150,280,"Harder to control the bird.Also the obstacles ar going to get harder",GLUT_BITMAP_HELVETICA_18);
        iText(150,250,"as the score rises up.",GLUT_BITMAP_HELVETICA_18);
        iText(300,200,"HAPPY FLAPPING!!",GLUT_BITMAP_TIMES_ROMAN_24);
    }

    if(flag==2)
    {


        iClear();

        iSetColor(102,51,153);
        //iFilledRectangle(20,584,20,10);
        iSetColor(255,255,255);
        iText(25,582,"PRESS p TO PLAY",GLUT_BITMAP_HELVETICA_18);
        iText(200,582,"PRESS q TO PAUSE",GLUT_BITMAP_HELVETICA_18);
        iText(400,582,"PRESS r TO RESUME",GLUT_BITMAP_HELVETICA_18);

        iSetColor(255,255,255);

        iLine(1,570,800,570);
        iLine(1,30,800,30);
		
		switch(var)
		{
		case 1:iShowBMP(1,30,"927b2caca31fda5069f3116d424881c7.bmp");
			break;
		case 2: iShowBMP(1,30,"Angry_Birds_Trilogy_Background.bmp");
			break;
		case 3:iShowBMP(1,30,"swamp_thiefg7ctc.bmp");
			break;
		case 4: iShowBMP(1,30,"4174600-beautiful-background-images.bmp");
			break;
		case 5: iShowBMP(1,30,"_background__angry_birds_go_by_nikitabirds-d68ru08.bmp");
			break;
		case 6:iShowBMP(1,30,"maxresdefault.bmp");
			break;
		}
        //iShowBMP(1,30,"927b2caca31fda5069f3116d424881c7.bmp");


        iSetColor(0,0,0);


        iFilledCircle(x,u,10);
		
		iShowBMP2(16,pic_y,"Catch-the-pigeon-Here-are-the-best-and-worst-Flappy-Bird-clonesm.bmp",255);

        for(i=0; i<7; i++)
        {
            if(count<=7)
            {
				
                iSetColor(i*40,i*60,i*80);   //back[i]*8,back[i]*i,back[i+1]*2
                iFilledRectangle(a[i],30,30,height[i]%250);

                //MANUAL SET OF HEIGHTS

            }

            else if(count>7 && count<=21)

            {
                iSetColor(i*400,i*57,i*66);
                iFilledRectangle(a[i],30,30,height[i]%250);


            }

            else if(count>21 && count<=35)

            {
                iSetColor(0,25*i,77*i);
                iFilledRectangle(a[i],30,30,height[i]%256);
            }

            else if(count>35 && count<=49 )

            {
                iSetColor(i*11,0,i*43);
                iFilledRectangle(a[i],30,30,heightup[i]);
            }
            else if(count>49 && count<=63)

            {
                iSetColor(i*60,6,i*60);
                iFilledRectangle(a[i],30,30,height[i]%283);
            }
            else if(count>63 && count<=77)

            {
                iSetColor(i*35,0,0);
                iFilledRectangle(a[i],30,30,height74[i]);
            }
            else if(count>77 && count<=91)

            {
                iSetColor(0,i*35,0);
                iFilledRectangle(a[i],30,30,height[i]%291);
            }
            else if(count>91 && count<=105)

            {
                iSetColor(0,0,i*35);
                iFilledRectangle(a[i],30,30,height[i]%255);
            }

            else if(count>105 && count <=119)
            {
                 iSetColor(i*12,0,i*12);
                iFilledRectangle(a[i],30,30,height74[i]);
            }
            else if(count>119 && count<=133)
            {
                iSetColor(0,i*16,i*16);
                iFilledRectangle(a[i],30,30,height130[i]);

            }
            else if(count>133 && count<=147)
            {
                iSetColor(0,0,i*35);
                iFilledRectangle(a[i],30,30,height[i]%250);
            }

            else if(count>147 && count<=161)
            {
                 iSetColor(12*i,255*i,677*i);
                iFilledRectangle(a[i],30,30,height41[i]);
            }
            else if(count>161 && count<=175)
            {
                iSetColor(i*35,0,0);
                iFilledRectangle(a[i],30,30,height161[i]);
            }

            else
            {

                iSetColor(back[i],back[i]*i,back[i+1]);
                iFilledRectangle(a[i],30,30,heightlast[i]);
            }

        }


        for(i=0; i<7; i++)
        {
            iSetColor(back[i],back[i]*i/2,back[i+1]*i*i*i);
            iFilledRectangle(a[i],570,30,-heightup[i]);

        }


        //for second array set of heights


        for(i=0; i<7; i++)
        {

            if(count<=14)
            {
                iSetColor(i+9,134+i,i+234);
                iFilledRectangle(z[i],30,30,height2[i]%200);
            }

            else if(count>14 && count<=28)						//MANUAL SET OF HEIGHTS

            {
                 iSetColor(0,154+i,i*37);
                iFilledRectangle(z[i],30,30,height2[i]%210);
            }

            else if(count>28 && count<=42)

            {
                iSetColor(0,25*i,77*i);
                iFilledRectangle(z[i],30,30,height70[i]);
            }

            else if(count>42 && count<=56)

            {
                iSetColor(12*i,255*i,677*i);
                iFilledRectangle(z[i],30,30,height2[i]%243);
            }
            else if(count>56 && count<=70)

            {
                iSetColor(i*12,0,i*12);
                iFilledRectangle(z[i],30,30,height2[i]%279);
            }
            else if(count>70 && count<=84)

            {
                iSetColor(20+i,20*i,200*i);
                iFilledRectangle(z[i],30,30,height70[i]);
            }
            else if(count>84 && count<=98)

            {
                iSetColor(i+9,134+i,i+234);
                iFilledRectangle(z[i],30,30,height2[i]%280);
            }
            else if(count>98 && count<=112)

            {
               iSetColor(0,i*16,i*16);
                iFilledRectangle(z[i],30,30,height2[i]%285);
            }
            else if(count>112 && count<=126)

            {
                iSetColor(i*11,0,i*43);
                iFilledRectangle(z[i],30,30,height2[i]%286);
            }

            else if(count>126 && count<=140)

            {
                iSetColor(i*40,i*60,i*80);
                iFilledRectangle(z[i],30,30,height2[i]%261);
            }

            else if(count>140 && count<=154)

            {
                iSetColor(back[i],back[i],back[i+1]*i*i*6);
                iFilledRectangle(z[i],30,30,height41[i]);
            }
            else if(count>154 && count<=168)

            {
                iSetColor(back[i],back[i]*i,back[i+1]*i*i);
                iFilledRectangle(z[i],30,30,height2[i]%264);
            }
            else
            {
                iSetColor(back[i],back[i]*i,back[i+1]*i*i);
                iFilledRectangle(z[i],30,30,height119[i]);
            }

        }


        for(i=0; i<7; i++)
        {
            iSetColor(back[i],back[i]*i/2,back[i+1]*i*i*i);
            iFilledRectangle(z[i],570,30,-heightup2[i]);

        }
		
    }

    if(flag==3)
    {
        iClear();

        iShowBMP(0,0,"1511.bmp");

        iSetColor(65,105,225);
        iRectangle(270,375,270,50);
        iSetColor(102,51,153);
        iRectangle(270,290,270,50);

		


        itoa(count,s,10);

        iSetColor(0,0,0);

        iText(450,230,s,GLUT_BITMAP_TIMES_ROMAN_24);

        u=290;
		pic_y=280;

        for(i=0; i<7; i++)
        {
            a[i]=(i+1)*100;
        }

        for(i=0; i<7; i++)
        {
            z[i]=(i+8)*100;
        }

    }

	if(flag==4)
	{
		iClear();

		iShowBMP(0,0,"CbiZPmqUUAAEhUA.bmp");

		iFilledCircle(50,550,10);
        iText(65,545,"GO BACK",GLUT_BITMAP_HELVETICA_18);
		iText(320,460,"HIGHESCORE",GLUT_BITMAP_HELVETICA_18);
		iFilledRectangle(320,445,120,10);
		iFilledRectangle(340,425,80,8);
		iFilledRectangle(360,405,40,6);
		iFilledRectangle(380,390,4,4);


		iText(280,330,"The SCORE to BEAT is : ",GLUT_BITMAP_HELVETICA_18);
		iText(200,300,"DO U HAVE WHAT IT TAAKES TO BEAT IT?",GLUT_BITMAP_HELVETICA_18);
		iText(230,270,"WILL YOU TAKE THE CHALLANGE?",GLUT_BITMAP_HELVETICA_18);

		
		iFilledRectangle(360,190,40,6);
		iFilledRectangle(380,210,5,4);
		iFilledRectangle(340,170,80,8);
		iFilledRectangle(320,150,120,10);

		itoa(check,s,10);
		iText(485,330,s,GLUT_BITMAP_HELVETICA_18);

	}
	

}



void iMouseMove(int mx, int my)
{


}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
    if(button==GLUT_LEFT_BUTTON &&  state==GLUT_DOWN)
    {

		

        if((mx>=300 && mx<=500) && (my>=230 && my<=280) && flag==0)
        {
            flag=1;
            musicOn=false;
            if(!musicOn)
            {
                PlaySound(0,0,0);
            }
            music=true;
            if(music && flag==1)
            {
                PlaySound("Everything\\END",NULL,SND_LOOP | SND_ASYNC);
            }


        }
        if((mx>=300 && mx<=400) && (my>=300 && my<=350) && flag==0)
        {
            flag=2;
            musicOn=false;
            if(!musicOn)
            {
                PlaySound(0,0,0);
            }
        }
        if( mx>=50 && mx<=100 && my>=550 && my<=600 && flag==1)
        {
            flag=0;
            music=false;
            if(!music)
            {
                PlaySound(0,0,0);
            }

            musicOn=true;
            if(musicOn && flag==0)
            {
                PlaySound("Everything\\Angry_Birds_-_Stella",NULL,SND_LOOP | SND_ASYNC);
            }
        }
        if((mx>=300 && mx<=500) && (my>=90 && my<=140) && flag==0)
        {
            exit(0);
        }

        if((mx>=270 && mx<=540) && (my>=375 && my<=425) && flag==3)
        {
            flag=2;
            count=0;
            dummy=0;
            //printf("%d",count);

			var+=1;
	if(var==7)
	{
		var=1;
	}
        }

        if(((mx>=270 && mx<=540) && (my>=290 && my<=340) && flag==3))
        {
            musicOn=true;
            flag=0;
            count=0;
            dummy=0;

            if(musicOn && flag==0)
            {
                PlaySound("Everything\\Angry_Birds_-_Stella",NULL,SND_LOOP | SND_ASYNC);
            }

        }
		if((mx>=300 && mx<=480) && (my>=160 && my<=210) && flag==0)
		{
			flag=4;

			musicOn=false;
            if(!musicOn)
            {
                PlaySound(0,0,0);
            }
            music=true;
            if(music && flag==4 && on==100)
            {
                PlaySound("Everything\\Polargeist (Geometry Dash)",NULL,SND_LOOP | SND_ASYNC);
            }

		}

		if( mx>=50 && mx<=100 && my>=550 && my<=600 && flag==4)
        {
            flag=0;
            music=false;
            if(!music)
            {
                PlaySound(0,0,0);
            }

            musicOn=true;
            if(musicOn && flag==0)
            {
                PlaySound("Everything\\Angry_Birds_-_Stella",NULL,SND_LOOP | SND_ASYNC);
            }
        }
    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {

    }
}


void iKeyboard(unsigned char key)
{

    if(key=='p')
    {
        dummy=1;
    }
    if(key=='r')
    {
        dummy=1;
    }
    if(key=='q')
    {
        dummy=0;
    }
    //if(flag==2 && key=='x')
    //{
        //exit(0);
    //}
    if(flag==2 && key==' ')
    {
        u=u+dy;
		pic_y+=dy;

    }

}




void iSpecialKeyboard(unsigned char key)
{
    if(key==GLUT_KEY_UP)
    {

    }
    //place your codes for other keys here
}

void animate()
{
    if(flag==2 && dummy==1)
    {
        if(u==40)
        {
            PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);

            flag=3;

        }
        if(count<=70)

        {
            u-=5;
			pic_y-=5;

        }
        else
        {
            u-=10;
			pic_y-=10;
        }


    }
}

void animateblock()
{
    if(flag==2 && dummy==1)
    {
        for(i=0; i<7; i++)
        {
            {
                a[i]-=1;
            }

            if(a[i]==x)
            {
                count++;
				printf("%d",count);
                PlaySound("Everything\\sfx_point",NULL,SND_ASYNC);
                
            }

            if(count<7)
            {
                if(a[i]-x==10 ||( a[i]>=16 && a[i]<=36))
                {
                    temp=( height[i]%250);

                    if(u>30 && u<=temp)
                    {

                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}


	
                    }
                }
            }

            if(count>7 && count<=21)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height[i]%250);
                    

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;
                        

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}


                    }
                }
            }

            if(count>21 && count<=35)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height[i]%256);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>35 && count<=49)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(heightup[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

   // printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>49 && count<=63)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height[i]%283);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;
						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>63 && count<=77)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height74[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>77 && count<=91)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height[i]%291);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}

                    }
                }
            }

            if(count>91 && count<=105)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height[i]%255);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>105 && count<=119)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height74[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>119 && count<=133)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height130[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>133 && count<=147)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height[i]%250);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>147 && count<=161)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height41[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>161 && count<=175)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(height161[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>175)
            {
                if(a[i]-x==10  ||( a[i]>=16 && a[i]<=36))
                {
                    temp=(heightlast[i]);
                    printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>0)

            {
                if(x-a[i]==10  ||( a[i]>=16 && a[i]<=36))
                {
                   // printf("INSIDE\n");

                    temp=(570-heightup[i]);
                    //printf("heightup=%d\n",heightup[i]);
                    //printf("temp=%d\n",temp);
                    //printf("i=%d\n",i);
                    //printf("gap=%d\n",x-a[i]);
                    //rintf("u before hitting=%d\n",u);


                    if(u>=temp && u<=570)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;
                        printf("u after hitting =%d\n",u);

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }


            if(a[6]<=-25)
            {
                for(j=0; j<7; j++)
                {
                    switch(j)
                    {
                    case 0:
                        a[0]=800;
                        break;
                    case 1:
                        a[1]=900;
                        break;

                    case 2:
                        a[2]=1000;
                        break;

                    case 3:
                        a[3]=1100;
                        break;

                    case 4:
                        a[4]=1200;
                        break;

                    case 5:
                        a[5]=1300;
                        break;
                    case 6:
                        a[6]=1400;
                        break;

                    }
                }

            }
        }

    }

}


void animateblock2()
{
    if(flag==2 && dummy==1)
    {
        for(l=0; l<7; l++)

        {
            {
                z[l]-=1;
            }

            if(z[l]==x)
            {
                count++;
				printf("%d",count);
                PlaySound("Everything\\sfx_point",NULL,SND_ASYNC);
            }


            //GAMEOVERPART//


            //if( z[l]-x==10 && u>= && u<=570 )
            {
                //flag=3;
                //printf("current height: %d\n",u);
                //printf(" Pillars height: %d\n",height[i]%245);
                //printf("gap : %d\n",z[l]-x);
            }

            if(count<=14)
            {
                if(z[l]-x==10  || ( z[l]>=16 && z[l]<=36))
                {
                    temp=(height2[l]%200);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>14 && count<=28)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height2[l]%210);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>28 && count<=42)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height70[l]);  


                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>42 && count<=56)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height2[l]%243);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");


    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>112 && count<=126)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height2[l]%286);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>126 && count<=140)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height2[l]%261);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>140 && count<=154)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height41[l]);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(count>154 && count<=168)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height2[l]%264);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;

						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if (count>168)
            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(height119[l]);
                    //printf("%d\n",temp);

                    if(u>30 && u<=temp)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;
						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }

            if(count>0)

            {
                if(z[l]-x==10  ||( z[l]>=16 && z[l]<=36))
                {
                    temp=(570-heightup2[l]);
                    //printf("heightup2=%d\n",heightup2[l]);
                    //printf("temp=%d\n",temp);

                    if(u>temp && u<570)
                    {
                        PlaySound("Everything\\sfx_hit",NULL,SND_ASYNC);
                        flag=3;
						if(flag==3)
{
    fp=fopen("SCORES.txt","w");

    {
        if(count>check) //comparison

            check=count;  //count is where i saved my current score

        fprintf(fp,"%d",check);
    }
    fclose(fp);

    //printf("The value after writing is:%d",check);
}
                    }
                }
            }
            if(z[6]<=-25)

            {
                for(l=0; l<7; l++)
                {

                    switch(l)
                    {
                    case 0:
                        z[0]=800;

                    case 1:
                        z[1]=900;

                    case 2:
                        z[2]=1000;

                    case 3:
                        z[3]=1100;

                    case 4:
                        z[4]=1200;

                    case 5:
                        z[5]=1300;
                    case 6:
                        z[6]=1400;

                    }

                }

            }

        }

    }

}




int main()

{
	FILE *fp;
	
	fp=fopen("SCORES.txt","r");

	fscanf(fp,"%d",&check);

	fclose(fp);

	printf("THE VALUE OF FILE IS %d",check);

    if(count<=10)
    {
        for(j=0; j<7; j++)
        {

            height[j]=rand();
            back[j]=rand()%(i*i+250);
        }


    }

    else if(count>10 && count<=20)
    {

        for(j=0; j<7; j++)
        {
            height[j]=rand();
            back[j]=rand()%(i*i+261);
        }


    }
    else if(count>20 && count<=30)
    {

        for(j=0; j<7; j++)
        {
            height[j]=rand();
            back[j]=rand()%(i*i+233);
        }

    }
    else
    {
        for(j=0; j<7; j++)
        {
            height[j]=rand();
            back[j]=rand()%(i*i+243);
        }
    }

    if(count<=10)
    {

        for(j=0; j<7; j++)
        {
            height2[j]=rand();
            back2[j]=rand()%(240+i*i);
        }
        printf("\n");
    }
    else if(count>10 && count<=20)
    {
        for(j=0; j<7; j++)
        {
            height2[j]=rand();
            back2[j]=rand()%(230+i*i);
        }
    }
    else if(count>20 && count<=30)
    {
        for(j=0; j<7; j++)
        {
            height2[j]=rand();
            back2[j]=rand()%(220+i*i);
        }
    }
    else
    {
        for(j=0; j<7; j++)
        {
            height2[j]=rand();
            back2[j]=rand()%(225+i*i);
        }
    }

    iSetTimer(40,animate);

    iSetTimer(3,animateblock);

    iSetTimer(3,animateblock2);

    if(flag==2)
    {

        PlaySound("Everything\\sfx_point",NULL,SND_ASYNC);

    }

    if(flag==0  && musicOn)
    {
        PlaySound("Everything\\Angry_Birds_-_Stella",NULL,SND_LOOP | SND_ASYNC);
    }

    if(flag==1 && music )
    {
        PlaySound("Everything\\END",NULL,SND_LOOP | SND_ASYNC);

    }


		if(flag==3)
	{
		fp=fopen("SCORES.txt","w");

		{
			if(count>check) //comparison

			check=count;  //count is where i saved my current score
			
			fprintf(fp,"%d",check);
		}
		fclose(fp);

		printf("The value after writing is:%d",check);

	}


    iInitialize(800, 600, "fLAPPYbALL");


	
    return 0;

}





