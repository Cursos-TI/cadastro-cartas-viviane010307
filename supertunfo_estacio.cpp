#include <stdio.h>

int main() {
	//carta1//
	char estado_carta1[3];
	char codigo_carta1[4];
	char cidade_carta1[50];
	int populacao_carta1;
	float area_carta1;
	float PIB_carta1;
	int pontos_turisticos_carta1;

	//carta 2//
	char estado_carta2;
	char codigo_carta2[4];
	char cidade_carta2[50];
	int populacao_carta2;
	float area_carta2;
	float PIB_carta2;
	int pontos_turisticos_carta2;

	//carta 1//
	printf("Qual o estado da carta1\n");
	scanf("%s",&estado_carta1);

	printf("Qual o codigo da carta1\n");
	scanf("%s",&codigo_carta1);

	printf("Qual a cidade da carta1\n");
	// scanf("%s",&cidade_carta1);
	scanf(" %99[^\n]", cidade_carta1);

	printf("Qual o numero da populacao da carta1\n");
	scanf(" %d",&populacao_carta1);

	printf("Qual a area da carta1\n");
	scanf("%f",&area_carta1);

	printf("Qual o PIB da carta11\n");
	scanf("%f",&PIB_carta1);

	printf("Quantos pontos turisticos da carta1\n");
	scanf("%d",&pontos_turisticos_carta1);

	printf("\n\n\n");

//carta 2"
	printf("Qual o estado da carta2\n");
	scanf("%s",&estado_carta2);

	printf("Qual o codigo da carta2\n");
	scanf("%s",codigo_carta2);

	printf("Qual a cidade da carta2\n");
	// scanf("%s",cidade_carta2);
	scanf(" %99[^\n]", cidade_carta2);

	printf("Qual o numero da populacao da carta2\n");
	scanf("%d",&populacao_carta2);

	printf("Qual a area da carta2\n");
	scanf("%f",&area_carta2);

	printf("Qual o PIB da carta2\n");
	scanf("%f",&PIB_carta2);

	printf("Quantos pontos turisticos da carta2\n");
	scanf("%d",&pontos_turisticos_carta2);

	printf(" O estado da carta1 %s\n", estado_carta1);
	printf(" O codigo da carta1 %s\n", codigo_carta1 );
	printf(" a cidade da carta1 %s\n", cidade_carta1);
	printf(" O numero da populacao da carta1  %d\n", populacao_carta1);
	printf(" A area da carta1 %f\n", area_carta1);
	printf(" O PIB da carta1 %f\n", PIB_carta1);
	printf(" O numero de pontos turisticos da carta1  %d\n", 	pontos_turisticos_carta1);
	printf(" O estado da carta2 %s\n", estado_carta2);
	printf(" O codigo da carta2 %s\n", codigo_carta2 );
	printf(" a cidade da carta2 %s\n", cidade_carta2);
	printf(" O numero da populacao da carta2 %d\n", populacao_carta2);
	printf(" A area da carta2 %f\n", area_carta2);
	printf(" O PIB da carta2 %f\n", PIB_carta2);
	printf(" O numero de pontos turisticos da carta1 %d\n", pontos_turisticos_carta2);

	return 0;
}
