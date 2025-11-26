/* Ian Axl Morris
Count positive, negative, and zero elements in an array. */

#include<stdio.h>
int main()
{
    int n,p=0,ne=0,z=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0) 
        p++;
        else if(a[i]<0) 
        ne++;
        else z++;
    }
    printf("%d %d %d",p,ne,z);
    return 0;
}
