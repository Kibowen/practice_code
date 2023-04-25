#include <stdio.h>

float result(int a, float z)
{
	float result;

	result = a / z;
	printf("The result of a / z is %.2f\n", result);
	return result;
}

int main()
{
	result(200, 4);

	return 0;
}
