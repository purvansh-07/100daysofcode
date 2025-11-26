/* Ian Axl Morris 
Delete an element from an array. */

#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    printf("Enter the position of element to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++) 
    a[i]=a[i+1];
    printf("Array after deletion: ");
    for(int i=0;i<n-1;i++) 
    printf("%d ",a[i]);
    return 0;
}
