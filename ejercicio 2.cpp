#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
printf("introduce el primer digito: ");
scanf("%d",&a);
printf("introduce el segundo digito: ");
scanf("%d",&b);
if(a % b==0){
    printf("es divisible");
}
else{
        printf("no es divisible");
}
}
