#include <stdio.h>

float obliczObjetosc(float dlugosc, float szerokosc, float wysokosc) {
	float objetosc = dlugosc * szerokosc * wysokosc;
	return objetosc;
}

int main() {
	float dlugosc, szerokosc, wysokosc;

	printf("Podaj dlugosc prostopadloscianu: ");
	scanf("%f", &dlugosc);

	printf("Podaj szerokosc prostopadloscianu: ");
	scanf("%f", &szerokosc);

	printf("Podaj wysokosc prostopadloscianu: ");
	scanf("%f", &wysokosc);

	float objetosc = obliczObjetosc(dlugosc, szerokosc, wysokosc);

	printf("Objetosc prostopadloscianu rowna sie: %.2f\n", objetosc);

	return (0);
}
