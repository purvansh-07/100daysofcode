/* Ian Axl Morris
Insert an element in a sorted array at the appropriate position.
*/

#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter elements : ");
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    printf("Enter position : ");
    scanf("%d",&x);
    int i=n-1;
    while(i>=0 && a[i]>x)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;
    for(int j=0;j<=n;j++) 
    printf("%d ",a[j]);
    return 0;
}
