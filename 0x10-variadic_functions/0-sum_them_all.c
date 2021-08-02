#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all its parameter
 * @n: number of arguments
 * Return: two cases a 0 when n == 0 and sum otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum;
unsigned int i;
sum = 0;
va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
