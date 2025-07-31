#include <stdio.h>

int main() {
    char estado, estado2; //nome de uma letra do estado
    char codigo[4], codigo2[4]; //código de três letras da cidade
    char nome[20], nome2[20]; //nome da cidade
    int pop, pop2; //população da cidade
    float area, area2; //área total da cidade
    float pib, pib2; //PIB da cidade
    int ptur, ptur2; //pontos turísticos

    //Início do preenchimento do usuário
    printf("Insira o estado da primeira carta (A-H): \n");
    scanf(" %c", &estado); //espaço aplicado para não incorrer em erro por causa do \n anterior

    printf("Insira a letra do estado seguida de um número de 01 a 04: \n"); // Esse é o código da carta
    scanf("%s", &codigo);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Insira a população da cidade: \n");
    scanf("%d", &pop);

    printf("Insira a área da cidade (em Km²): \n"); // Não utilizar "," na hora de preencher
    scanf("%f", &area);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ptur);
    //Fim da primeira carta
    
    //Início da segunda carta
    printf("Insira o estado da segunda carta (A-H): \n");
    scanf(" %c", &estado2);

    printf("Insira a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Insira a população da cidade: \n");
    scanf("%d", &pop2);

    printf("Insira a área da cidade (em Km²): \n"); // Não utilizar "," na hora de preencher
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &ptur2);

    
    printf("\n Carta 1 \n"); // espaço antes para separar da inserção de dados
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", pop);
    printf("Área: %.2f KM²\n", area); // Não utilizar "," na hora de preencher
    printf("PIB: R$ %.2f bi \n", pib);
    printf("Número de Pontos Turísticos: %d \n\n", ptur);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", pop2);
    printf("Área: %.2f KM²\n", area2); // Não utilizar "," na hora de preencher
    printf("PIB: R$ %.2f bi \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", ptur2);


    return 0;
}