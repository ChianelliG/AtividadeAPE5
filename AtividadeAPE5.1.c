#include <stdio.h>
#include <math.h>
int main(){
    float n1, n2, n3, mediaponderada;
    printf("\nNota da prova 1: ");
    scanf("%f", &n1);
    printf("\nNota da prova 2: ");
    scanf("%f", &n2);
    printf("\nNota da prova 3: ");
    scanf("%f", &n3);
    mediaponderada = ((n1*1) + (n2 *1) + (n3 * 2))/4;
    if (mediaponderada >=7){
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi aprovado");
    } else {
        printf("\nNota: %.2f" , mediaponderada);
        printf("\nVoce foi reprovado\n");
    }
    system("pause");
    }
