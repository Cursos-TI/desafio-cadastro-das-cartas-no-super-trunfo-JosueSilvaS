#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha


    // Declaração das variaveis para a carta/cidade 1
    char estado1;
    char codigo_estado1[5];
    char nome_cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int n_pontos_turisticos1;


    // Entada dos dados para cidade/carta 1 pelo usuario

    printf("Digite o estado, apenas uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado,'letra escolhia acima e um numero':  ");
    scanf(" %s",codigo_estado1);

    printf("Digite o nome da cidade no formato 'nome_da_cidade': ");
    scanf(" %s", nome_cidade1);

    printf("Digite o total da populção: ");
    scanf(" %d",&populacao1);

    printf("Digite a area km² : ");
    scanf("%f",&area1);

    printf("Digite o PIB: ");
    scanf("%f",&pib1);

    printf("Digite o Total de pontos turisticos: ");
    scanf("%d",&n_pontos_turisticos1);

    //exibindo dados carta 1
    printf("Carta 1:\n");
    
    printf("Estado: %c\n",&estado1);
    printf("Código: %s\n",codigo_estado1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("População: %d\n",&populacao1);
    printf("Área: %d  km²\n",&area1);
    printf("PIB : %f Bilhoes de reais\n",&pib1);
    printf("Número de Pontos Turísticos: %d\n",&n_pontos_turisticos1);





    // inserindo dados da carta/cidade 2

    char estado2;
    char codigo_estado2[5];
    char nome_cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int n_pontos_turisticos2;
    
    // Entada dos dados para cidade/carta 2 pelo usuario
    printf("\n");
    printf("Carta 2: \n");

    printf("Digite o estado, apenas uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado,'letra escolhia acima e um numero':  ");
    scanf(" %s",codigo_estado2);

    printf("Digite o nome da cidade no formato 'nome_da_cidade': ");
    scanf(" %s", nome_cidade2);

    printf("Digite o total da populção: ");
    scanf(" %d",&populacao2);

    printf("Digite a area km² : ");
    scanf("%f",&area2);

    printf("Digite o PIB: ");
    scanf("%f",&pib2);

    printf("Digite o Total de pontos turisticos: ");
    scanf("%d",&n_pontos_turisticos2);


    //exibindo dados carta 2
    printf("Carta 2:\n");
    
    printf("Estado: %c\n",&estado2);
    printf("Código: %s\n",codigo_estado2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("População: %d\n",&populacao2);
    printf("Área: %d  km²\n",&area2);
    printf("PIB : %f Bilhoes de reais\n",&pib2);
    printf("Número de Pontos Turísticos: %d\n",&n_pontos_turisticos2);





    return 0;
}
