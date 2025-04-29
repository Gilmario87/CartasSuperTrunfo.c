#include <stdio.h>

int main(){
    // declaracao das variaveis para a carta 1  
    char estado1;                      // variavel para o estado da carta 1
    char codigo1[4];                   // variavel para o codigo da carta 1 (A01, B03, etc.)
    char nomecidade1[20];              // variavel para o nome da cidade da carta 1
    int populacao1;                    // variavel para a populacao da carta 1
    float area1;                       // variavel da area carta 1 em km²
    float PIB1;                        // variavel para o PIB da cidade da carta 1 em bilhoes
    int pontosturisticos1;             // variavel para o numero de pontos turisticos da cidade da carta 1

    // declaracao das variaveis para a carta 2
    char estado2;                         // variavel para o estado da carta 2
    char codigo2[4];                      // variavel para o codigo da carta 2
    char nomecidade2[20];                 // variavel para o nome da cidade da carta 2
    int populacao2;                       // variavel para a populacao da carta 2
    float area2;                          // variavel da area carta 2 em km²
    float PIB2;                           // variavel para o PIB da carta 2 em bilhoes
    int pontosturisticos2;                // variavel para o numero de pontos turisticos da cidade da carta 2

    // leitura dados carta 1
    printf("cadastro carta 1 \n");
    printf("digite o estado(de A a H):");
    scanf(" %c",&estado1);                  // lê o estado
    
    printf("digite o codigo(ex:A01):");    
    scanf("%s",codigo1);                   // lê o código da carta

    printf("digite o nome da cidade:");
    scanf(" %[^\n]",nomecidade1);           // lê o nome da cidade

    printf("digite a populacao;");
    scanf("%d",&populacao1);               // lê a população como número inteiro

    printf("digite a area(em km²):");
    scanf("%f",&area1);                    // lê a área como um numero decimal(float)

    printf("digite o PIB(em bilhoes de reais):");
    scanf("%f",&PIB1);                     // lê o PIB também como float

    printf("digite o numero de pontos turisticos:");
    scanf("%d",&pontosturisticos1);        // lê o número de pontos turísticos

    // leitura dados carta 2(mesmo processo carta 1)
    printf("cadastro carta 2\n");
    printf("digite o estado(de A a H):");
    scanf(" %c",&estado2);                  // lê o estado

    printf("digite o codigo(ex:B02):");
    scanf("%s",codigo2);                   // lê o código da carta 2

    printf("digite o nome da cidade:");
    scanf(" %[^\n]",nomecidade2);           // lê o nome da cidade da carta 2

    printf("digite a populacao:");
    scanf("%d",&populacao2);               // lê a população da cidade 2

    printf("digite a area(em km²):");
    scanf("%f",&area2);                    // lê a área da cidade 2

    printf("digite o PIB(em bilhoes de reais):");
    scanf("%f",&PIB2);                     // lê o PIB da cidade 2

    printf("digite o numero de pontos turisticos:");
    scanf("%d",&pontosturisticos2);        // lê o número de pontos turísticos da cidade 2

    // exibição dos dados carta 1
    printf("\n-dados carta 1-\n");
    printf("estado:%c\n",estado1);
    printf("codigo:%s\n",codigo1);
    printf("nome da cidade:%s\n",nomecidade1);
    printf("populacao:%d\n",populacao1);
    printf("area:%.2f km²\n",area1);       // para mostrar o número com 2 casas decimais
    printf("PIB:%.2f bilhoes de reais\n",PIB1);
    printf("numero de pontosturisticos:%d\n",pontosturisticos1);

    // exibição dos dados carta 2
    printf("\n-dados carta 2-\n");
    printf("estado:%c\n",estado2);
    printf("codigo:%s\n",codigo2);
    printf("nome da cidade:%s\n",nomecidade2);
    printf("populacao:%d\n",populacao2);
    printf("area:%.2f km²\n",area2);
    printf("PIB:%.2f bilhoes de reais\n",PIB2);
    printf("numero de pontosturisticos:%d\n",pontosturisticos2);

    return 0;
}
