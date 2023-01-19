#include <stdio.h>
#include <math.h>

int main () {

	float zahl1, zahl2, ergebnis;
	char funktion;

	printf("Zahl 1:\n");
	scanf("%f", &zahl1);

	printf("Rechenfunktion: + für Addition | - für Subtraktion | * für Multiplikation | / für Division | p für Potenz | w für Wurzel\n"); 
	scanf("\n%c", &funktion);

	if (funktion != 'w') {

		printf("Zahl 2:\n");
		scanf("%f", &zahl2);

	}

	switch (funktion) {

		case '+': ergebnis = zahl1 + zahl2;
		break;

		case '-': ergebnis = zahl1 - zahl2;
		break;

		case '*': ergebnis = zahl1 * zahl2;
		break;

		case '/': ergebnis = zahl1 / zahl2;
		break;

		case 'p': ergebnis = pow(zahl1, zahl2);
		break;

		case 'w': ergebnis = sqrt(zahl1);
		break;

	}

	printf("Ergebnis: %.2f\n", ergebnis);

	return 0;

}
