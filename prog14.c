
#include<stdio.h>
int main()
{
int x,y,z;
printf("enter any numbers for x,y,z");
scanf("%d %d %d",&x,&y,&z);
if((x>y) && (x>z))
{
printf("%d is greater.",x);
}

else if((y>z) && (y>x))
{
printf("%d is greater.",y);
}

else 
{
printf("%d is greater.",z);
}
return 0;
}
