#include <iostream>

#include <windows.h>
#include <MMSystem.h>

#include <time.h>
using namespace std;

void wait(int seconds)
{
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait) {}



}

void S()
{
    PlaySound(TEXT("SBeep.wav") , NULL , SND_SYNC );
}

void L()
{
    PlaySound(TEXT("LBeep.wav") , NULL , SND_SYNC );
}

int main()
{
    //int i,n,li,ls,mij,gasit,x;
    int i,d;
    char a,v[25],k;
    k=97;
    for(i=1; i<=25; i++)
        v[i]=(char) k++;

        d=1;
  while(cin>>a)
  {

         if((int)a==97) //a
          {
             S();L();
            int timetowait =d;
            wait(timetowait);
          }


          if((int)a==98)//b
          {
             L();S();S();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==99)//c
          {
             L();S();L();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==100)//D
          {
             L();S();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==101)//E
          {
             S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==102)//F
          {
             S();S();L();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==103)//G
          {
             L();L();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==104)//H
          {
             S();S();S();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==105)//I
          {
             S();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==106)//J
          {
             S();L();L();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==107)//k
          {
             L();S();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==108)//L
          {
             S();L();S();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==109)//M
          {
             L();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==110)//N
          {
             L();S();
            int timetowait =d;
            wait(timetowait);
          }

            if((int)a==111)//O
          {
             L();L();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==112)//P
          {
             S();L();L();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==113)//Q
          {
             L();L();S();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==114)//R
          {
             S();L();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==115)//S
          {
             S();S();S();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==116)//T
          {
             L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==117)//U
          {
             S();S();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==118)//V
          {
             S();S();S();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==119)//W
          {
             S();L();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==120)//X
          {
             L();S();S();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==121)//Y
          {
             L();S();L();L();
            int timetowait =d;
            wait(timetowait);
          }

          if((int)a==122)//Z
          {
             L();L();S();S();
            int timetowait =d;
            wait(timetowait);
          }



  }




return 0;



}

