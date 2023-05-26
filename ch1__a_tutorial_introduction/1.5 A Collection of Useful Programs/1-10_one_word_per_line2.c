#include <stdio.h>

#define   YES   1
#define   NO    0

main()    /* prints the input words one per line */
{    
     int c, inword;

     inword = NO;
     while (EOF != (c = getchar())) {
	  if (' ' != c && '\n' != c && '\t' != c) {
	       inword = YES;
	       putchar(c);
	  } else if (YES == inword) {
	       inword = NO;
	       putchar('\n');
	  }
     }
}
