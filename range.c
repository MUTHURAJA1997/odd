#include<stdio.h>
void main()
{
int l,u,i,j=0,cout=0;
scanf("%d %d",&l,&u);
for(i=l;i<=u;i++)
{
if((i<4)&&(i>1))
cout++;
else if((i%2==0)||(i%3==0))
j++;
else
cout++;
}
printf("%d",cout);
}
