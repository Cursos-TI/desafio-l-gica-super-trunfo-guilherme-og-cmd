#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
// Variáveis para carta 1
    char estado1;
    char cidade1[50];
    char codigo1[5];
    unsigned long int populacao1;
    int turismo1;
    float area1;
    double pib1;
    double pib_per_capita1;
    float densidade1;
    unsigned int superPoder1;

    // Variáveis para carta 2
    char estado2;
    char cidade2[50];
    char codigo2[5];
    unsigned long int populacao2;
    int turismo2;
    float area2;
    double pib2;
    double pib_per_capita2;
    float densidade2;
    unsigned int superPoder2;

    // Cadastro das Cartas:
    printf("Cadastro da Carta 1\n");
    printf("Estado: "); 
    scanf(" %c", &estado1);
    printf("Código da Carta: "); 
    scanf("%s", codigo1);
    printf("Nome da Cidade: "); 
    scanf("%s", cidade1); 
    printf("População: "); 
    scanf(" %lu", &populacao1);
    printf("Número de Pontos Turísticos: "); 
    scanf(" %d", &turismo1);
    printf("Área em Km²: "); 
    scanf(" %f", &area1);
    printf("PIB: "); 
    scanf(" %lf", &pib1);

    // Cálculos da carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    // Corrigido para somar os valores reais em formato float/double para não perder precisão antes da soma total
    superPoder1 = (unsigned int)(populacao1 + turismo1 + area1 + pib1 + pib_per_capita1 + (1.0 / densidade1));
    
    // Exibição da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1); // Corrigido para %lu
    printf("Turismo: %d\n", turismo1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("PIB per Capita: %.2lf\n", pib_per_capita1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("Super Poder: %u\n", superPoder1); // Corrigido formato para %u (inteiro sem sinal)

    printf("\n");

     // ==========================================
    // ENTRADA E CÁLCULOS DA CARTA 2
    // ==========================================
    printf("Cadastro da Carta 2\n");
    printf("Estado: "); 
    scanf(" %c", &estado2);
    printf("Código da Carta: "); 
    scanf("%s", codigo2);
    printf("Nome da Cidade: "); 
    scanf("%s", cidade2); 
    printf("População: "); 
    scanf(" %lu", &populacao2);
    printf("Número de Pontos Turísticos: "); 
    scanf(" %d", &turismo2);
    printf("Área em Km²: "); 
    scanf(" %f", &area2); 
    printf("PIB: "); 
    scanf(" %lf", &pib2);   

    // Cálculos da carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    superPoder2 = (unsigned int)(populacao2 + turismo2 + area2 + pib2 + pib_per_capita2 + (1.0 / densidade2));

     // Exibição da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2); // Corrigido para %lu
    printf("Turismo: %d\n", turismo2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("PIB per Capita: %.2lf\n", pib_per_capita2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("Super Poder: %u\n", superPoder2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("*** Cidade com maior população: ***\n ");

    char *cidadeVencedora = (populacao1 > populacao2) ? cidade1 : cidade2;
    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } 
    else {
     printf("Cidade 2 tem maior população.\n");
    }

    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}