#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, *p, **pp;
    p = &num;
    pp = &p;
    printf("Ingresar un numero");
    scanf("%d", p);
    printf("El numero ingresado es: %d", *pp);
    printf("\n%d", num);
    return 0;
