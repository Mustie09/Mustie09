#include <stdio.h>

/**
 * main -  copy input to output
 */

main()
{
	int c;

	c = getchar();
	while ((c = getchar()) != EOF)
		putchar(c);
}
