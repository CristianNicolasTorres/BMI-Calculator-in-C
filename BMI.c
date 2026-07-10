#include <stdio.h>

int main() {
	float peso, altura_cm, altura_m, imc;
	

	do {
		printf("Colocar peso en Kg: ");
		scanf("%f", &peso);
		if (peso <= 0) {
			printf("Error: El peso debe ser un numero positivo mayor a cero.\n\n");
		}
	} while (peso <= 0);
	
	do {
		printf("Colocar altura en centimetros (ej. 186): ");
		scanf("%f", &altura_cm);
		if (altura_cm <= 0) {
			printf("Error: La altura debe ser un numero positivo mayor a cero.\n\n");
		}
	} while (altura_cm <= 0);
	

	altura_m = altura_cm / 100.0;
	
	
	imc = peso / (altura_m * altura_m);
	
	printf("\nSu IMC es de: %.2f\n", imc);
	
	printf("\n=========================================\n");
	printf("         TABLA DE REFERENCIA IMC         \n");
	printf("=========================================\n");
	printf("  Menor a 18.5   ->  Bajo peso\n");
	printf("  18.5 a 24.9    ->  Peso normal\n");
	printf("  25.0 a 29.9    ->  Sobrepeso\n");
	printf("  30.0 o mayor   ->  Obeso\n");
	printf("=========================================\n\n");
	

	char *clasificacion[] = {
		"Bajo peso",
			"Peso normal",
			"Sobrepeso",
			"Obeso"
	};
	

	int idx =
		(imc >= 18.5) +
		(imc >= 25.0) +
		(imc >= 30.0);
	
	
	printf("Clasificacion actual del usuario: %s\n", clasificacion[idx]);
	
	return 0;
}
