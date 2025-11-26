/* Write a program to swap the first and last digit of a number. */

#include <stdio.h>
int main()
{
    int a,n,f,l,pow=1,result;
    printf("Enter a number : ");
    scanf("%d",&a);
    n=a;
    l=n%10;
    while(n>=10)
    {
        n/=10;
        pow*=10;
    }
    f=n;
    int middle=a%pow;
    middle/=10;
    result=l*pow+middle*10+f;
    printf("The new number is : %d",result);
}