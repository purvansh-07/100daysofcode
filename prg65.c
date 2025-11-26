/* Ian Axl Morris 
Search in a sorted array using binary search. */

#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    scanf("%d",&x);
    int l=0,h=n-1,f=0;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(a[m]==x)
        {
            f=1;
            break;
        }
        else if(a[m]<x) 
        l=m+1;
        else 
        h=m-1;
    }
    if(f) 
    printf("Found");
    else 
    printf("Not Found");
    return 0;
}
