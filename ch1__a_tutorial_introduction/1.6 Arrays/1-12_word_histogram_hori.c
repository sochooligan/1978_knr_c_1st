#include <stdio.h>

#define   YES   1
#define   NO    0

main()    
{    
     int c, inword;

     inword = NO;
     while (EOF != (c = getchar())) {
	  if (' ' != c && '\n' != c && '\t' != c) {
	       if (NO == inword)
		    inword = YES;	       
	       /* putchar(c); */
	       putchar('-');
	  } else if (YES == inword) {
	       inword = NO;
	       putchar('\n');
	  }
     }
}
