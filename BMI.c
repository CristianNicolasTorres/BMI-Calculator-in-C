#include <stdio.h>
// https://github.com/CristianNicolasTorres/BMI-Calculator-in-C.git
int main() {
    float peso, altura, imc;

    // Obtener datos del usuario
    printf("Colocar peso en Kg: ");
    scanf("%f", &peso);
    printf("Colocar altura en metros: ");
    scanf("%f", &altura);

    // Calcular IMC
    imc = peso / (altura * altura);
    printf("Su IMC es de: %.2f\n", imc);

    // clasificar IMC
    if (imc < 18.5) {
        printf("Clasificacion: Bajo peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Clasificacion: Peso normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Clasificacion: Sobrepeso\n");
    } else {
        printf("Clasificacion: Obeso\n");
    }

    return 0;
}