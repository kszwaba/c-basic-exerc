#include <stdio.h>

int main(int argc, char * arg[])
{
int a,b,c;
printf("Podaj a=:\n");
scanf("%d", &a);
printf("Podaj b=:\n");
scanf("%d", &b);
c=a&&b; //iloczyn logiczny
printf("Wartość logiczna wyrażenia %d && %d = %d:\n",a,b,c);
c=a||b; //suma logiczna
printf("Wartość logiczna wyrażenia %d || %d = %d:\n",a,b,c);
c=!a;
printf("Wartość logiczna wyrażenia !%d = %d:\n",a,c);
return 0;
}