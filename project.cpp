#include <stdio.h>

float ConvertToFahrenheit(float celcius);

int main() {
	float celcius;
	float fahrenheit;
	printf("Celcius to Fahrenheit Calculator! \n");
	printf("Enter the value in Celcius :");
	scanf("%f", &celcius);
	printf("The value in Fahrenheit will be : %f", fahrenheit = ConvertToFahrenheit(celcius));
	return 0;
}

float ConvertToFahrenheit(float celcius) {
	float fahrenheit = (celcius * (9/5)) + 32;
	return fahrenheit;
}
