#include <stdio.h>

int main() {
    //Declarando variáveis.
    
    // Primeira carta
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidadepopulacional1, pibpercapita1, superpoder1;
    
    
    // Segunda carta
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidadepopulacional2, pibpercapita2, superpoder2;

    // Cadastro da primeira carta
    printf("\nInsira os dados da carta 1\n");
    
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para evitar problemas com buffer
    
    printf("Digite o código da carta (ex: A01,B02): ");
    scanf("%s", &codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade1); // %[^\n Lê a linha inteira com espaços e acentos
    
    printf("População: ");
    scanf("%lu", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Calculo da densidade populacional e pib per capita da primeira carta
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1.0e9) / populacao1; // 1.0e9 em C representa o número 1.0 multiplicado por 10 elevado à nona potência, ou seja, 1.0 bilhão
    
    // Calculo do Super Poder da primeira carta 
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1); // 1.0 forçando a operação a ser feita em ponto flutuante
   
    // Cadastro da segunda carta
    printf("\nInsira os dados da carta 2\n");
    
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &estado2); // Espaço antes de %c para evitar problemas com buffer
    
    printf("Digite o código da carta (ex: A01,B02): ");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade2); // %[^\n Lê a linha inteira com espaços e acentos
    
    printf("População: ");
    scanf("%lu", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    // Calculo da densidade populacional e pib per capita da segunda carta
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1.0e9) / populacao2; // 1.0e9 em C representa o número 1.0 multiplicado por 10 elevado à nona potência, ou seja, 1.0 bilhão

    // Calculo do Super Poder da segunda carta
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2); // 1.0 forçando a operação a ser feita em ponto flutuante
    
    
   // Primeiro menu interativo
   int opcao1, opcao2;
   printf("\nEscolha o primeiro atributo para comparação\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de Pontos Turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. Super Poder\n");
   
   // Função DO WHILE para garantir que seja escolhida a opção de 1-6
   do{
    printf("Digite uma opção de (1-6)\n");
    scanf("%d", &opcao1);

   if(opcao1 < 1 || opcao1 > 6){
    printf("Opção inválida! Por favor, escolha um número entre 1 e 6.\n");
   }
   }while(opcao1 < 1 || opcao1 > 6);

   // Segundo menu interativo
   printf("\nEscolha o segundo atributo para comparação (diferente do primeiro)\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de Pontos Turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. Super Poder\n");
 
   // Função DO WHILE para garantir que seja escolhida a opção de 1-6 e para garantir que não seja comparado o mesmo atributo
   do {
    printf("Digite uma opção de (1-6)\n");
    scanf("%d", &opcao2);
    if(opcao2 < 1 || opcao2 > 6) {
        printf("Opção inválida! Por favor, escolha um número entre 1 e 6.\n");
    }
    if(opcao2 == opcao1) {
        printf("\nErro: O segundo atributo não pode ser o mesmo que o primeiro.\n");
        printf("Escolha novamente um segundo atributo diferente do primeiro:\n");
    }
    }while(opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1);

   // Comparação baseada na escolha do usuário para os dois atributos
   float valor1, valor2;
   int resultado;
   char atributo1[50], atributo2[50];

   // Comparação do primeiro atributo
   printf("\n~~~~ Comparação de Atributos ~~~~\n");

   switch(opcao1){  
    case 1:
        valor1 = populacao1;
        valor2 = populacao2;
        sprintf(atributo1, "População"); //sprint para armazenar e exibir no terminal o atributo de comparação
        break;
    case 2:
        valor1 = area1;
        valor2 = area2;
        sprintf(atributo1, "Área");
        break;
    case 3:
        valor1 = pib1;
        valor2 = pib2;
        sprintf(atributo1, "PIB");
        break;
    case 4:
        valor1 = pontosturisticos1;
        valor2 = pontosturisticos2;
        sprintf(atributo1, "Número de Pontos Turísticos");
        break;
    case 5:
        valor1 = densidadepopulacional1;
        valor2 = densidadepopulacional2;
        sprintf(atributo1, "Densidade Populacional");
        break;
    case 6:
        valor1 = superpoder1;
        valor2 = superpoder2;
        sprintf(atributo1, "Super Poder");
        break;
    default:
        valor1 = valor2 = 0; // Para garantir que ambas as variáveis estejam "zeradas" antes de usá-las
        printf("Opção inválida!\n");
        break;
    }
    printf("Comparando o atributo: %s\n", atributo1);
    printf("Carta 1 - %s: %.2f\n", cidade1, valor1);
    printf("Carta 2 - %s: %.2f\n", cidade2, valor2);

    // Para todos os atributos, o maior valor vence, exceto para a densidade populacional
    if (opcao1 == 5) {  // Se a comparação for pela densidade populacional, a menor densidade vence
        resultado = (valor1 < valor2) ? 1 : (valor1 > valor2) ? 2 : 0;
    } else {  // Para os outros atributos, o maior valor vence
        resultado = (valor1 > valor2) ? 1 : (valor1 < valor2) ? 2 : 0;
    }

    if(resultado == 1){
        printf("Resultado: carta 1 - (%s) Venceu!\n",cidade1);
    }else if(resultado == 2){
        printf("Resultado: carta 2 - (%s) Venceu!\n",cidade2);
    }else{
        printf("Empate!\n");
    }

    // Comparação do segundo atributo
    switch(opcao2){
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            sprintf(atributo2, "População"); //sprint para armazenar e exibir no terminal o atributo de comparação
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            sprintf(atributo2, "Área");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            sprintf(atributo2, "PIB");
            break;
        case 4:
            valor1 = pontosturisticos1;
            valor2 = pontosturisticos2;
            sprintf(atributo2, "Número de Pontos Turísticos");
            break;
        case 5:
            valor1 = densidadepopulacional1;
            valor2 = densidadepopulacional2;
            sprintf(atributo2, "Densidade Populacional");
            break;
        case 6:
            valor1 = superpoder1;
            valor2 = superpoder2;
            sprintf(atributo2, "Super Poder");
            break;
        default:
            valor1 = valor2 = 0;
            printf("Opção inválida!\n");
            break;
    }
    
    // Exibição de atributo a ser comparado e carta vencedora
    printf("Comparando o atributo: %s\n", atributo2);
    printf("Carta 1 - %s: %.2f\n", cidade1, valor1);
    printf("Carta 2 - %s: %.2f\n", cidade2, valor2);
    
     // Para todos os atributos, o maior valor vence, exceto para a densidade populacional
     if (opcao1 == 5) {  // Se a comparação for pela densidade populacional, a menor densidade vence
        resultado = (valor1 < valor2) ? 1 : (valor1 > valor2) ? 2 : 0;
    } else {  // Para os outros atributos, o maior valor vence
        resultado = (valor1 > valor2) ? 1 : (valor1 < valor2) ? 2 : 0;
    }

    if(resultado == 1){
        printf("Resultado: carta 1 - (%s) Venceu!\n",cidade1);
    }else if(resultado == 2){
        printf("Resultado: carta 2 - (%s) Venceu!\n",cidade2);
    }else{
        printf("Empate!\n");
    }

    return 0;
}
