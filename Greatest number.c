#include<stdio.h>
#include<conio.h>

int main()
{int x,y,z;

printf("enter three integers:");
scanf("%d %d %d",&x,&y,&z);

if(x>y)
{
   if(x>z)
    {printf("%d is the greatest number",x);
    }
   else
    {printf("%d is the greatest number ",z);
    }
}
else
{
 if(y>z)
  {printf("%d is the greatest number",y);
   }
 else
   {printf("%d is the greatest number",z);
   }
}
getch();
}
