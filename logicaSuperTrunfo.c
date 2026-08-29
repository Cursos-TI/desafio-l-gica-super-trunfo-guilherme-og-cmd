#include <stdio.h>

// Desafio Super Trunfo - Países/Cidades
// Tema 2 - Comparação das Cartas (Nível Aventureiro)
// Menu interativo com switch + estruturas de decisão aninhadas (if-else dentro de if-else)

int main() {
    // ==========================================
    // VARIÁVEIS DA CARTA 1
    // ==========================================
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

    // ==========================================
    // VARIÁVEIS DA CARTA 2
    // ==========================================
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

    // Variáveis de controle do menu
    int opcao;

    // ==========================================
    // CADASTRO DA CARTA 1
    // ==========================================
    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%4s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%49s", cidade1);
    printf("Populacao: ");
    scanf(" %lu", &populacao1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &turismo1);
    printf("Area em Km2: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %lf", &pib1);

    // Cálculos da carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    superPoder1 = (unsigned int)(populacao1 + turismo1 + area1 + pib1 + pib_per_capita1 + (1.0 / densidade1));

    // ==========================================
    // CADASTRO DA CARTA 2
    // ==========================================
    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf("%4s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%49s", cidade2);
    printf("Populacao: ");
    scanf(" %lu", &populacao2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &turismo2);
    printf("Area em Km2: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %lf", &pib2);

    // Cálculos da carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    superPoder2 = (unsigned int)(populacao2 + turismo2 + area2 + pib2 + pib_per_capita2 + (1.0 / densidade2));

    // ==========================================
    // EXIBIÇÃO DAS DUAS CARTAS
    // ==========================================
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Turismo: %d\n", turismo1);
    printf("Area: %.2f Km2\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("PIB per Capita: %.2lf\n", pib_per_capita1);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidade1);
    printf("Super Poder: %u\n", superPoder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Turismo: %d\n", turismo2);
    printf("Area: %.2f Km2\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("PIB per Capita: %.2lf\n", pib_per_capita2);
    printf("Densidade Populacional: %.2f hab/Km2\n", densidade2);
    printf("Super Poder: %u\n", superPoder2);

    // ==========================================
    // MENU INTERATIVO DE COMPARAÇÃO (switch)
    // ==========================================
    do {
        printf("\n===========================================\n");
        printf("   MENU DE COMPARACAO - SUPER TRUNFO\n");
        printf("===========================================\n");
        printf("Cartas em disputa: %s (1) x %s (2)\n", cidade1, cidade2);
        printf("-------------------------------------------\n");
        printf("Escolha o atributo para comparar:\n");
        printf(" 1 - Populacao ................ (maior vence)\n");
        printf(" 2 - Area ..................... (maior vence)\n");
        printf(" 3 - PIB ...................... (maior vence)\n");
        printf(" 4 - Pontos Turisticos ........ (maior vence)\n");
        printf(" 5 - Densidade Demografica .... (MENOR vence)\n");
        printf(" 0 - Sair\n");
        printf("===========================================\n");
        printf("Opcao: ");

        // Segurança: se o usuário digitar algo que não seja número, encerra
        if (scanf(" %d", &opcao) != 1) {
            printf("\nEntrada invalida! Encerrando o programa.\n");
            return 1;
        }

        switch (opcao) {

            // ------------------------------------------------
            case 1: // POPULACAO - maior vence
                printf("\n>>> Atributo comparado: Populacao\n");
                printf("%s: %lu habitantes\n", cidade1, populacao1);
                printf("%s: %lu habitantes\n", cidade2, populacao2);

                if (populacao1 == populacao2) {
                    printf("Resultado: Empate!\n");
                } else {
                    // Decisão aninhada: dentro do else descobrimos quem venceu
                    if (populacao1 > populacao2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    } else {
                        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    }
                }
                break;

            // ------------------------------------------------
            case 2: // AREA - maior vence
                printf("\n>>> Atributo comparado: Area\n");
                printf("%s: %.2f Km2\n", cidade1, area1);
                printf("%s: %.2f Km2\n", cidade2, area2);

                if (area1 == area2) {
                    printf("Resultado: Empate!\n");
                } else {
                    if (area1 > area2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    } else {
                        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    }
                }
                break;

            // ------------------------------------------------
            case 3: // PIB - maior vence
                printf("\n>>> Atributo comparado: PIB\n");
                printf("%s: %.2lf\n", cidade1, pib1);
                printf("%s: %.2lf\n", cidade2, pib2);

                if (pib1 == pib2) {
                    printf("Resultado: Empate!\n");
                } else {
                    if (pib1 > pib2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    } else {
                        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    }
                }
                break;

            // ------------------------------------------------
            case 4: // PONTOS TURISTICOS - maior vence
                printf("\n>>> Atributo comparado: Pontos Turisticos\n");
                printf("%s: %d pontos\n", cidade1, turismo1);
                printf("%s: %d pontos\n", cidade2, turismo2);

                if (turismo1 == turismo2) {
                    printf("Resultado: Empate!\n");
                } else {
                    if (turismo1 > turismo2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    } else {
                        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    }
                }
                break;

            // ------------------------------------------------
            case 5: // DENSIDADE DEMOGRAFICA - REGRA INVERTIDA: menor vence
                printf("\n>>> Atributo comparado: Densidade Demografica (menor vence)\n");
                printf("%s: %.2f hab/Km2\n", cidade1, densidade1);
                printf("%s: %.2f hab/Km2\n", cidade2, densidade2);

                if (densidade1 == densidade2) {
                    printf("Resultado: Empate!\n");
                } else {
                    // Atenção: aqui o operador é "<" porque a menor densidade vence
                    if (densidade1 < densidade2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    } else {
                        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    }
                }
                break;

            // ------------------------------------------------
            case 0: // Encerrar
                printf("\nJogo encerrado. Ate a proxima!\n");
                break;

            // ------------------------------------------------
            default: // Segurança: opcao inexistente no menu
                printf("\n[!] Opcao invalida! Digite um numero entre 0 e 5.\n");
                break;
        }

    } while (opcao != 0); // adição do do-while: repete o menu até o jogador escolher sair (opcao 0)

    return 0;
}