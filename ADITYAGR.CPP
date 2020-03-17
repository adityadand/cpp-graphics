#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
void main()
{            int i;     int x,y;
	 x=39;
	 y=15;  int a;
clrscr();
       for(i=5;i>=0;i--)
      {
   gotoxy(x,y);
     cout<<i;
     delay(1000);

      if(i=='0')
     { goto a;
     }
}
a:
clrscr();
   gotoxy(x,y);
cout<<"cool"; ;

   getch();

}


