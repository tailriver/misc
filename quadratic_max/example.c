#include <stdio.h>
#include "quadratic_max.h"

double some_quadratic_function(double x) {
	return -2.2 * x * x + 4.686 * x + 5.467;
}

int main(void) {
	double x1 = -10.0;
	double x2 =  10.0;
	double maxx = quadratic_max_x(some_quadratic_function, x1, x2);
	double maxy1 = quadratic_max(some_quadratic_function, x1, x2);
	double maxy2 = some_quadratic_function(maxx);

	printf("maxx : %lf\nmaxy1: %lf\nmaxy2: %lf\n", maxx, maxy1, maxy2);
	return 0;
}
