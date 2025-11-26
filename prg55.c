/* Ian Axl Morris 
Write a program to print all the prime numbers from 1 to n. */

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int i=2;i<=n;i++)
{
int f=1;
for(int j=2;j*j<=i;j++)
{
    if(i%j==0)
    {
        f=0;
        break;
    }
}
if(f) 
    printf("%d\n",i);
}
return 0;
}
