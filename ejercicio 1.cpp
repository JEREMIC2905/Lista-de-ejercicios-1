#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
printf("Ingresa un valor");
scanf("%d",&a);
if (a>100){
    printf("Tu valor es mayor a 100");
}
else if(a<100){
    printf("Tu valor es menor a 100");
}
else if(a==100){
    printf("Tu valor es igual a 100");
}
return 0;
}
