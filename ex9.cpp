#include <iostream>
#include <stdio.h>
#include<stdlib.h>

/*9. Fazer uma rotina que recebe como par�metro um array de 5 posi��es
contendo as notas de um aluno ao longo do ano e devolve a m�dia do aluno. */

float calcula_media(float *notas){
	float media;
	
	media = (notas[1] + notas[2] + notas[3] + notas[4] + notas[5]) / 5;
	return media;
}

int main() {
	
	float notas[5];
	float nota_media;
	int x;
	
	for(x = 1; x<6; x++){
		printf("Qual a %d� nota? ", x);
		scanf("%f", &notas[x]);
	}	
		
	nota_media = calcula_media(notas);
	
	printf("\nA m�dia �: %.2f\n", nota_media);

	return 0;
}
