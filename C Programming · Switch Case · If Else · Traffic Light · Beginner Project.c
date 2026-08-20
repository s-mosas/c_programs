#include <stdio.h>
int main() {
int a;
printf("Traffic light system");
printf("1.Red\n2.Amber\n3.Green\n");
printf("Enter your number:");
scanf("%d",&a);

if(a>0 && a<4) {
switch(a) {
case 1:
printf("STOP-RED\n");
break;

case 2:
printf("AMBER-GET READY\n");
break;

case 3:
printf("GREEN-GO\n");
break;
}
}
else {
printf("Invalid data\n");
}

return 0;
}
