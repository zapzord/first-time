#include<stdio.h>
int main()
{int x,y;
char a[25];
printf("which class do you read in?");
scanf("%d",&x);
printf("how old are you?");
scanf("%d",&y);
printf("what is your name?");
scanf("%s",a);
printf("your name is %s ,your age is %d , and your class is %d",a,y,x);
return 0;
}
