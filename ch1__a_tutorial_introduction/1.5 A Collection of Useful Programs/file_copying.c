#include <stdio.h>

main()    /* copy input to output; 1st version */
{
     int c;
     
     c = getchar();
     while (EOF != c) {
	  putchar(c);
	  c = getchar();
     }
}
