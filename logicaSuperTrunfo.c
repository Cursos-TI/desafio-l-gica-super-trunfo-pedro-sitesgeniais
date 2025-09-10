#include <stdio.h>
struct Carta
{
    char estado;          // Variavel para armazenar o estado (A-H)
    char codigo[4];       // Variavel para armazenar o codigo (exemplo: A01)
    char cidade[50];      // Variavel para armazenar o nome da cidade
    int populacao;        // Variavel para armazenar a populacao
    float area;           // Variavel para armazenar a area em km^2
    float pib;            // Variavel para armazenar o PIB em bilhoes
    int pontosTuristicos; // Variavel para armazenar o numero de pontos turisticos
};

float calcularDensidadePopulacional(int populacao, float area)
{
    if (area == 0)
    {
        return 0; // Evita divisao por zero
    }
    return populacao / area; // Retorna a densidade populacional
}

float calcularPibPerCapita(float pib, int populacao)
{
    if (populacao == 0)
    {
        return 0; // Evita divisao por zero
    }
    return (pib * 1e9) / populacao; // Converte PIB para reais e calcula o PIB per capita
}

int main()
{
    struct Carta carta1, carta2; // Declaracao das variaveis do tipo Carta

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n"); // Solicita ao usuario os dados da Carta 1
    printf("Estado (A-H): ");                // Solicita o estado
    scanf(" %c", &carta1.estado);            // Leitura do estado
    printf("Codigo (exemplo: A01): ");       // Solicita o codigo
    scanf("%s", carta1.codigo);              // Leitura do codigo
    printf("Nome da Cidade: ");              // Solicita o nome da cidade
    scanf(" %[^\n]", carta1.cidade);         // Leitura do nome da cidade, permitindo espacos
    printf("Populacao: ");                   // Solicita a populacao
    scanf("%d", &carta1.populacao);          // Leitura da populacao
    printf("Area (em km^2): ");              // Solicita a area
    scanf("%f", &carta1.area);               // Leitura da area
    printf("PIB (em bilhoes): ");            // Solicita o PIB
    scanf("%f", &carta1.pib);                // Leitura do PIB
    printf("Numero de Pontos Turisticos: "); // Solicita o numero de pontos turisticos
    scanf("%d", &carta1.pontosTuristicos);   // Leitura do numero de pontos turisticos
    printf("Densidade Populacional: %.2f habitantes/km^2\n", calcularDensidadePopulacional(carta1.populacao, carta1.area));
    printf("PIB per Capita: R$ %.2f\n", calcularPibPerCapita(carta1.pib, carta1.populacao));

    // Leituras dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n"); // Solicita ao usuario os dados da Carta 2
    printf("Estado (A-H): ");                // Solicita o estado
    scanf(" %c", &carta2.estado);            // Leitura do estado
    printf("Codigo (exemplo: A01): ");       // Solicita o codigo
    scanf("%s", carta2.codigo);              // Leitura do codigo
    printf("Nome da Cidade: ");              // Solicita o nome da cidade
    scanf(" %[^\n]", carta2.cidade);         // Leitura do nome da cidade, permitindo espacos
    printf("Populacao: ");                   // Solicita a populacao
    scanf("%d", &carta2.populacao);          // Leitura da populacao
    printf("Area (em km^2): ");              // Solicita a area
    scanf("%f", &carta2.area);               // Leitura da area
    printf("PIB (em bilhoes): ");            // Solicita o PIB
    scanf("%f", &carta2.pib);                // Leitura do PIB
    printf("Numero de Pontos Turisticos: "); // Solicita o numero de pontos turisticos
    scanf("%d", &carta2.pontosTuristicos);   // Leitura do numero de pontos turisticos
    printf("Densidade Populacional: %.2f habitantes/km^2\n", calcularDensidadePopulacional(carta2.populacao, carta2.area));
    printf("PIB per Capita: R$ %.2f\n", calcularPibPerCapita(carta2.pib, carta2.populacao));

    if (carta1.populacao > carta2.populacao)
    {
        printf("A cidade com maior populacao e: %s\n", carta1.cidade);
    }
    else if (carta1.populacao < carta2.populacao)
    {
        printf("A cidade com maior populacao e: %s\n", carta2.cidade);
    }
    else
    {
        printf("As cidades tem a mesma populacao.\n");
    }
    if (carta1.area > carta2.area)
    {
        printf("A cidade com maior area e: %s\n", carta1.cidade);
    }
    else if (carta1.area < carta2.area)
    {
        printf("A cidade com maior area e: %s\n", carta2.cidade);
    }
    else
    {
        printf("As cidades tem a mesma area.\n");
    }
    if (carta1.pib > carta2.pib)
    {
        printf("A cidade com maior PIB e: %s\n", carta1.cidade);
    }
    else if (carta1.pib < carta2.pib)
    {
        printf("A cidade com maior PIB e: %s\n", carta2.cidade);
    }
    else
    {
        printf("As cidades tem o mesmo PIB.\n");
    }
    if (carta1.pontosTuristicos > carta2.pontosTuristicos)
    {
        printf("A cidade com maior numero de pontos turisticos e: %s\n", carta1.cidade);
    }
    else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
    {
        printf("A cidade com maior numero de pontos turisticos e: %s\n", carta2.cidade);
    }
    else
    {
        printf("As cidades tem o mesmo numero de pontos turisticos.\n");
    }

    // Definindo a cidade vencedora como exemplo: a que tiver maior populacao
    char *cidadeVencedora; // Ponteiro para armazenar o nome da cidade vencedora
    if (carta1.populacao > carta2.populacao)
    {
        cidadeVencedora = carta1.cidade; // Carta 1 vence
    }
    else if (carta1.populacao < carta2.populacao)
    {
        cidadeVencedora = carta2.cidade; // Carta 2 vence
    }
    else
    {
        cidadeVencedora = "Empate"; // Empate
    }
    printf("A cidade vencedora é: %s\n", cidadeVencedora); // Exibição do resultado

    return 0;
}