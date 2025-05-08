#include<stdio.h>
#include<stdlib.h>
#include"biblio_media.h"

int main()
{
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", & n1);
    printf("Digite o segundo numero: ");
    scanf("%f", & n2);

    printf("A media destes numeros e %0.2f", media(n1, n2));
    system("pause > null");

    return 0;
}