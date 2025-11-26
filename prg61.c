/* Ian Axl Morris
Search for an element in an array using linear search. */

#include<stdio.h>
int main(){
    int n,x,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
            break;
        }
    }
    if(f)
    printf("Found");
    else 
    printf("Not Found");
    return 0;
}
