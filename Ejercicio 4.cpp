#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b;
printf("introduce el primer valor: ");
scanf("%d",&a);
printf("introduce el segundo valor: ");
scanf("%d",&b);
if(a>b){
    printf("el primer valor es mayor al segundo valor");
}
if(a<b){
    printf("el segundo valor en mayor al primer valor");
}
if(a==b){
    printf("ambos valores son iguales");
}
}
