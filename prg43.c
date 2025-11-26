/* Ian Axl Morris
Write a program to check if a number is a strong number. */

#include <stdio.h>
int main() 
{
    int n,t,d,f,i,sum =0;
    printf("Enter a number : ");
    scanf("%d", &n);
    t=n;
    while (t>0) 
    {
        d=t%10;
        f=1;
        for(i=1;i<=d;i++) 
        f*=i;
        sum+= f;
        t/=10;
    }
    if (sum==n) 
    printf("Strong Number\n");
    else
    printf("Not Strong Number\n");
}
