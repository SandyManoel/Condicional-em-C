#include <stdio.h>
#include <stdlib.h>

void main(){
    int a;
    printf("Digite um numero ");
    scanf("%i",&a);
    if (a % 2 ==1){
        printf("O número digitado e impar ");
    }
    if (a % 2 == 0){
        printf("O número digitado e par ");
    }
system("pause");
}
