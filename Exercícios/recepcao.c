#include <stdio.h>

int main() {
    int visitantes;

    // Solicitar o número de visitantes ao usuário
    printf("Digite o número de visitantes: ");
    scanf("%d", &visitantes);

    // Exibir uma mensagem de confirmação
    printf("Você registrou %d visitantes.\n", visitantes);
    printf("Confirmação enviada para o recepcionista.\n");

    return 0;
}
