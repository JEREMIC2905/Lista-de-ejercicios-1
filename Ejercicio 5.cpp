#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,c;
    printf("Cuantos años tienes?: ");
    scanf("%d",&a);
    if(a>10){
    if(a<60){
printf("Costo del boleto es: 75 pesos");
}
}
if(a<10){
    c=75*.60;
    printf("costo del boleto con descuento es de: $ %d",c);
}
if(a>60){
   c=75*.55;
    printf("Costo del boleto con descuento es de: $ %d",c);
   }
}
