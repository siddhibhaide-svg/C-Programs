#include <stdio.h>
int main() {
    int a[10],i,l;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
 printf(" Display array:\n");
    for(i=0;i<10;i++)
{
    printf("%d",a[i]);
}
l=a[0];
for(i=0;i<10;i++){
    if(a[i]>l)
    l=a[i];
}
printf(" \n The largest element is :%d",l);
    return 0;
}