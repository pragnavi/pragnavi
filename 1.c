#include<stdio.h>
void rev(int *a,int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
int main()
{
    int a[50],i,n;
    printf("How many elements?(max. 50)\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    rev(a,n);
    printf("The reverse of the array is : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
