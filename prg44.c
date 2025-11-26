/* Ian Axl Morris 
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */

#include<stdio.h>
int main(){
int n;
float s=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    int num=2*i-1;
    int den=2*i-2?2*i-2:1;
    s+= (float)num/den;
}
printf("%f",s);
return 0;
}
