/* Ian Axl Morris
Merge two arrays.*/

#include<stdio.h>
int main()
{
    int n1,n2,i=0,j=0,k=0;
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2],m[n1+n2];
    for(i=0;i<n1;i++) 
    scanf("%d",&a[i]);
    for(i=0;i<n2;i++) 
    scanf("%d",&b[i]);
    i=0;
    while(i<n1) 
    m[k++]=a[i++];
    while(j<n2) 
    m[k++]=b[j++];
    for(i=0;i<n1+n2;i++) 
    printf("%d ",m[i]);
    return 0;
}
