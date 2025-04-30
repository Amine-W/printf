#include <stdio.h>
#include <stdarg.h>

void testit (int n, ...)
{
    va_list argptr;
	int	i;
    va_start(argptr, n);

	i = 0;
	while(i < n)
	{
		printf("%d ", va_arg(argptr, int));
		i++;
	}
	va_end(argptr);
}

int main()
{
    // testit(0, 0xFFFFFFFF);  1st problem: 0xffffffff is not an int
    // testit(1, NULL);        2nd problem: NULL is not a char*
	testit(3, 6, 8, 4);
}