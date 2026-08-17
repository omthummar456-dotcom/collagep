#include<stdio.h>
int main()
{
float x,y;
printf("storage space in bytes: ");
scanf("%f",&x);
y=x/1024;
printf("storage in kb is : %f",y);
y=x/1048576;
printf("\n storage in mb is : %f",y);
y=x/1073741834;
printf("\n storage in gb is : %f",y);

return 0;



}