#include <stdio.h>
int main (){

int a,b,c;
printf("Enter your 1st number:");
scanf("%d",&a);
printf("Enter your 2nd number:");
scanf("%d",&b);
printf("Enter your 3rd number:");
scanf("%d",&c);

if(a>b && a>c) {
printf("%d is largest number\n",a); }
else if(b>a && b>c) {
printf("%d is largest number\n",b); }
else {
printf("%d is largest number\n",c); }

return 0;
}
