#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float notas[4]; // Declaração de um vetor de quatro posições.
    float media;
    int i;

    printf("\n******************************* \n");
    printf("Calculador de media escolar\n");
    printf("******************************* \n");

    for (i = 0; i < 4; i++)
    {
        printf("\nDigite a nota: %d. \n", i + 1);
        scanf("%f", &notas[i]);
    }

    // calculo para calcular a media das notas.

    for (i = 0; i < 4; i++)
    {
        media += notas[i];
    }

    media /= i;

    printf("\nA media é de: %.2f\n", media);

    printf("\n******************************* \n");

    return 0;
}
