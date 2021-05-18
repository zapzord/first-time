#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("ENTER YOUR MARKS:");
scanf("%d",&a);
if(a>80){
printf("congratulations!! you passed with A grade!");
}
else if(a>70 && a<=80)
{
printf("you passed with B grade!!");
}
else if(a>60 && a<=70)
{
printf("you passed with C grade.");
}
else if(a>39 && a<=60){
printf("you passed with D grade.");
}
else{
printf("lol you are a looser like me!!");
}
getch();
}
