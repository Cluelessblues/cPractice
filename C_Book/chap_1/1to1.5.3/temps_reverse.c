#include <stdio.h>

int main(void){

	int celsius;
	char table;

	table = ("Celsius\t|\tFahrenheit\n");	
	printf("%c",table);
	for (celsius = 300; celsius >= 0; celsius -= 20)
		printf("%3d\t  |\t%6.1f\n", celsius, (celsius / (5.0/9.0)) +32);


}


