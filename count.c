#include <stdio.h>

/* count characters in input */

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '	')
		nl++;
	printf("%.d\n", nl);
}
