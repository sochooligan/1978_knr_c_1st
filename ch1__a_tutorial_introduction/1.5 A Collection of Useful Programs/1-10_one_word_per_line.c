#include <stdio.h>

#define   YES   1
#define   NO    0

main()    /* prints the input words one per line */
{    
     int c, inword;

     inword = NO;
     while (EOF != (c = getchar())) {
	  if (' ' == c || '\n' == c || '\t' == c) {
	       if (YES == inword) {
		    putchar('\n');
	       }
	       inword = NO;
	  } else if (NO == inword) {
	       inword = YES;
	       putchar(c);
	  }
     }
}
