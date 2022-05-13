#include <stdio.h>

//Mike Lecciso 13.05.2022

int main(){
	int integer;
	float float1;
	char character;
	char string[25];

	printf("Zuerst werden die 4 geforderten Datenobjekte in Variablen abgelegt, dazu folgende Abfrage: \n");

	printf("Ganzzahl eingeben: ");
	scanf("%d", &integer);
	printf("Gleitkommazahl eingeben: ");
	scanf("%f", &float1);
	printf("Character eingeben: ");
	scanf(" %c", &character);
	printf("String eingeben: ");
	scanf("%s", &string[0]);

	printf("\nDie Ausgabe der 4 Datentypen: \n");
	printf("Integer: %i \n", integer);
	printf("Gleitkommazahl: %.2f \n", float1);
	printf("Character: %c \n", character);
	printf("String: %s \n", string);

	return 0;	
}
