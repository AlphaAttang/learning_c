#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;


	lower = 0;
	upper = 300;
	step =20;

	fahr = lower;
	printf("celsius\t\tfahr\n");

	while(fahr <= upper)
	{
		celsius = 5 * (fahr -32) / 9;
		printf("%.2f\t\t%.2f\n", celsius, fahr);
		fahr = fahr + step;
	}

	return 0;
}
