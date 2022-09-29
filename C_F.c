#include <stdio.h>

/* print F-C table */

main()
{
	int F;

	for (F =300; F >= 0; F -= 20)
		printf("%3d %6.1f\n", F, (5.0/9.0) * (F - 32));
}
