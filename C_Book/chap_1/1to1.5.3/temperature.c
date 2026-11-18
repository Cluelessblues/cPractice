#include <stdio.h>
// print Fahrenheit-Celsius table for fahr = 0,20, ..., 300

int main(void)
{
	float fahr, celsius, lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper) {
		fahr = (celsius / (5.0/9.0)) + 32;
		printf("%3.0f C\t\t%6.0f F\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
