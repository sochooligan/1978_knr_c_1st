#include <stdio.h>

#define    TAB_STOPS   5

main() {
     int c, i;
     
     while (EOF != (c = getchar())) {
	  if ('\t' != c)
	       putchar(c);
	  else	  
	       for (i = 0; i < TAB_STOPS; ++i)
		    putchar(' ');
     }
}
