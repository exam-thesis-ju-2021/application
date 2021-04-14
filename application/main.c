#include "library/module_a.h"
#include <stdio.h>

int main()
{
	initialize_hardware();

	printf("%f\n", divide_by_half(128));
	printf("%f\n", multiply_by_two(128));
	printf("%f\n", power_of_two(128));
	printf("%f\n", square_root(128));

	reset_hardware();

	return 0;
}