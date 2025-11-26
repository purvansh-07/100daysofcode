/* Ian Axl Morris 
Rotate an array to the right by k positions.
*/

#include<stdio.h>
int main(){
    int n,k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    printf("Enter number of positions to rotate: ");
    scanf("%d",&k);
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++) 
    temp[i]=a[n-k+i];
    for(int i=n-1;i>=k;i--) 
    a[i]=a[i-k];
    for(int i=0;i<k;i++) 
    a[i]=temp[i];
    printf("Array after rotation: ");
    for(int i=0;i<n;i++) 
    printf("%d ",a[i]);
    return 0;
}
