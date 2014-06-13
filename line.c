

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char **argv ) {
	if (argc !=5) {
		printf ("error! please input x1, y1, x2, y2");
		exit (1);
	}
	double x1, y1, x2, y2, a, b;
	x1 = atof (argv[1]);
	y1 = atof (argv[2]);
	x2 = atof (argv[3]);
	y2 = atof (argv[4]);
	printf ("x1 = %g\ny1 = %g\nx2 = %g\ny2 = %g\n", x1, y1, x2, y2);
	if (x1 == x2) {
		printf ("error!\n");
		exit (1);
	}

	a = (y1-y2) / (x1-x2);
	b =  y1 - x1 * a;

	printf ("直线方程：\n");
	if (a == 0 && b != 0)
		printf ("y = %.3g\n", b);
	else if (a != 0 && b == 0) {
		if (a ==1)
			printf ("y = x");
		else
			printf ("y = %.3g * x", a);
	}
	else {
		if (a == 1)
			printf ("y = x %+.3g\n", b);
		else
			printf ("y = %.3g * x %+.3g\n", a, b);
	}
	printf ("---------------------------------");
	return 0;
}


