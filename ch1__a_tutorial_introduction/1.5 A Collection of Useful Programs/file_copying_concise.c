#include <stdio.h>

main()    /* copy input to output; 2st version */
{
     int c;    

     /* shrinks the program by one call to getchar */
     while (EOF != (c = getchar()))
	  putchar(c);
}
