#include <stdio.h>

main()    /* copy input to output; 1st version */
{
     /* declare c to b an int, so it can hold the value
          which getchar returns.  It must be capable of
          representing EOF in addition to all possible
          char's */
     int c;
     
     c = getchar();
     while (EOF != c) {
	  putchar(c);
	  c = getchar();
     }
}
