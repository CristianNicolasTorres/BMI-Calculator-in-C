#include <stdio.h>
#define PI 3.14159	
float calcularAreaRectangulo (float base, float altura){
	return base*altura;
}
	
	float calcularPerimetroRectangulo(float base, float altura){ 
		return 2 * (base+altura);
	}
		float calcularAreaCirculo (float radio){
			return PI*(radio*radio);
		}
			float calcularPerimetroCirculo (float radio) {
				return	2*PI*radio;
			}
			void imprimirResultados (float area, float perimetro){ 
				printf("el area es: %.2f\n" ,area);	
				printf("El perimetro es : %.2f\n", perimetro);
			}
				int main (void) {
					int opcion;
					float base, radio, altura, area, perimetro;
					do {
						printf("ingrese la figura que desea analizar(1: rectangulo, 2:circulo):");
						scanf("%d", &opcion);
						
						if (opcion != 1 && opcion !=2) {
							printf("opcion invalida, ingresar nuevamente.\n");
						}
					} while (opcion!=1 && opcion !=2);
					
					if (opcion == 1) {
						printf("\n opcion rectangulo seleccionada \n");
						printf("ingrese el largo del rectangulo: ");
						scanf("%f", &base);
						printf ("ingrese la altura del rectangulo: ");
						scanf("%f", &altura);
						
						area = calcularAreaRectangulo(base,altura);
						perimetro = calcularPerimetroRectangulo(base, altura);
					} else {
						printf("\nOpcion de circulo seleccionada\n");
						printf("ingrese el radio del circulo: ");
						scanf( "%f", &radio);
						area = calcularAreaCirculo(radio);
						perimetro = calcularPerimetroCirculo(radio);
					}
					imprimirResultados(area, perimetro);
					
					return 0;
				}   
