#include <stdio.h>

void main(void)
{
	int pix_ancho, pix_altura, X_izq, Y_izq, X_der, Y_der;
	float porX, porY, por_ancho, por_altura;
	// "pix" significa pixeles, "por" significa porcentajes, "izq" significan valores a la izquierda, "der" significan valores a la derecha

	scanf_s("%i", &pix_ancho);
	scanf_s("%i", &pix_altura);
	scanf_s("%f", &porX);
	scanf_s("%f", &porY);
	scanf_s("%f", &por_ancho);
	scanf_s("%f", &por_altura);

	X_izq = porX * pix_ancho;
	Y_izq = porY * pix_altura;
	X_der = pix_ancho * por_ancho + X_izq;
	Y_der = pix_altura * por_altura + Y_izq;

	printf_s("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", pix_ancho, pix_altura, porX, porY, por_ancho, por_altura, X_izq, Y_izq, X_der, Y_der);

}