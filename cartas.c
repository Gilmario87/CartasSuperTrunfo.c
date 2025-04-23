#include <stdio.h>

int main(){
    // declaração das variáveis para a carta 1  
    char estado1;               // variável para o estado da carta 1
    char código1[4];            // variável para o cÓdigo da carta 1 (A01, B03, etc.)
    char nomecidade1[20];       // variável para o nome da cidade da carta 1
    int população1;             // variável para a população da carta 1
    float área1;                // variável da área carta 1 em km²
    float PIB1;                 // variável para o PIB da cidade da carta 1 em bilhões
    int pontosturísticos1;     // variável para o numero de pontos turísticos da cidade da carta 1

    // declaração das variáveis para a carta 2
    char estado2;               // variável para o estado da carta 2
    char código2[4];            // variável para o código da carta 2
    char nomecidade2[20];       // variável para o nome da cidade da carta 2
    int população2;             // variável para a população da carta 2
    float área2;                // variável da area carta 2 em km²
    float PIB2;                 // variável para o PIB da carta 2 em bilhões
    int pontosturísticos2;     // variável para o número de pontos turísticos da cidade da carta 2

    // leitura dados carta 1
    printf("cadastro carta 1 \n");
    printf("digite o estado(de A a H):");
    scanf("%c",&estado1);                  // lê o estado
    
    printf("digite o código(ex:A01):");    
    scanf("%s",código1);                   // lê o código da carta

    printf("digite o nome da cidade:");
    scanf("%[^\n]",nomecidade1);           // lê o nome da cidade

    printf("digite a população;");
    scanf("%d",&população1);               // lê a população como número inteiro

    printf("digite a área(em km²):");
    scanf("%f",&área1);                    // lê a área como um numero decimal(float)

    printf("digite o PIB(em bilhões de reais):");
    scanf("%f",&PIB1);                     // lê o PIB também como float

    printf("digite o número de pontos turísticos:");
    scanf("%d",&pontosturísticos1);        // lê o número de pontos turísticos

    // leitura dados carta 2(mesmo processo carta 1)
    printf("cadastro carta 2\n");
    printf("digite o estado(de A a H):");
    scanf("%c",&estado2);                  // lê o estado

    printf("digite o código(ex:B02):");
    scanf("%s",código2);                   // lê o código da carta 2

    printf("digite o nome da cidade:");
    scanf("%[^\n]",nomecidade2);           // lê o nome da cidade da carta 2

    printf("digite a população:");
    scanf("%d",&população2);               // lê a população da cidade 2

    printf("digite a área(em km²):");
    scanf("%f",&área2);                    // lê a área da cidade 2

    printf("digite o PIB(em bilhões de reais):");
    scanf("%f",&PIB2);                     // lê o PIB da cidade 2

    printf("digite o número de pontos turísticos:");
    scanf("%d",&pontosturísticos2);        // lê o número de pontos turísticos da cidade 2

    // exibição dos dados carta 1
    printf("\n-dados carta 1-\n");
    printf("estado:%c\n",estado1);
    printf("código:%s\n",código1);
    printf("nome da cidade:%s\n",nomecidade1);
    printf("população:%d\n",população1);
    printf("área:%.2f km²\n",área1);       // para mostrar o número com 2 casas decimais
    printf("PIB:%.2f bilhões de reais\n",PIB1);
    printf("número de pontosturísticos:%d\n",pontosturísticos1);

    // exibição dos dados carta 2
    printf("\n-dados carta 2-\n");
    printf("estado:%c\n",estado2);
    printf("código:%s\n",código2);
    printf("nome da cidade:%s\n",nomecidade2);
    printf("população:%d\n",população2);
    printf("área:%.2f km²\n",área2);
    printf("PIB:%.2f bilhões de reais\n",PIB2);
    printf("número de pontosturísticos:%d\n",pontosturísticos2);

    return 0;
}
