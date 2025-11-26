/* Ian Axl Morris
Insert an element in an array at a given position. */

#include<stdio.h>
int main()
{
    int n,pos,x;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    scanf("%d %d",&pos,&x);
    for(int i=n-1;i>=pos-1;i--) 
    a[i+1]=a[i];
    a[pos-1]=x;
    for(int i=0;i<=n;i++) 
    printf("%d ",a[i]);
    return 0;
}
