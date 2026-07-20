#include <stdio.h>
int main() {
    int a[2][2],j,sum=0,i;
   printf("Enter the elements of the 2x2 array:\n");
    for(i=0;i<2;i++)
{
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}
 printf(" Display array:\n");
    for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
     printf("%d\t",a[i][j]);
    }
    printf("\n");
}    
   for(i=0;i<2;i++){
          for(j=0;j<2;j++){
       sum=sum+a[i][j];
          }
   }
   printf("sum is %d",sum);
   return 0;
}