#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Bienvenido,Introducir su constraseña de seguridad\nprimer digito: ");
    scanf("%d",&a);
    printf("segundo digito: ");
    scanf("%d",&b);
    printf("tercer digito: ");
    scanf("%d",&c);
    if(a==5){
    if(b==0){
    if(c==3){
        printf("acceso confirmado");
    }
    }
    }
    else{
        printf("Digitos incorrectos");
    }
}
