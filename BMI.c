#include <stdio.h>
// https://github.com/CristianNicolasTorres/BMI-Calculator-in-C.git
int main() {
    float peso, altura, imc;

    printf("Colocar peso en Kg: ");
    scanf("%f", &peso);

    printf("Colocar altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Su IMC es de: %.2f\n", imc);

    // "tabla" de resultados
    char *clasificacion[] = {
        "Bajo peso",
        "Peso normal",
        "Sobrepeso",
        "Obeso"
    };

    // convertir IMC a indice (0 a 3)
    int idx =
        (imc >= 18.5) +
        (imc >= 25.0) +
        (imc >= 30.0);

    printf("Clasificacion: %s\n", clasificacion[idx]);

    return 0;
}
