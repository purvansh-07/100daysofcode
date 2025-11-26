/* Ian Axl Morris 
 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */

#include<stdio.h>
int main(){
int n;
float s=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    int num=2*i;
    int den=4*i-1;
    s+= (float)num/den;
}
printf("%f",s);
return 0;
}
