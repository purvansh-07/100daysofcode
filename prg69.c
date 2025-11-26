/* Ian Axl Morris 
Find the second largest element in an array.
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    int max1=a[0],max2=a[1];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        } else if(a[i]>max2 && a[i]!=max1)
        {
            max2=a[i];
        }
    }
    printf("Second largest element: %d",max2);
    return 0;
}
