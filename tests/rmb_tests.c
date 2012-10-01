#include "../src/cTemplate/dbg.h"
#include "minunit.h"
#define EPSILON 0.0000001 // for float_check

int float_check(double a, double b);
/* Helpers */

int float_check(double a, double b)
{
	return (a - b) < EPSILON;
}

char *all_tests()
{
	mu_suite_start();
	return NULL;
}

RUN_TESTS(all_tests);


