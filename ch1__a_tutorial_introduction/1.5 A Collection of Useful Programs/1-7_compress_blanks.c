#include <stdio.h>

#define    YES  1
#define    NO   0

main()
{
     int c, in_blank;
     
     in_blank = NO;
     while (EOF != (c = getchar()))
	  if (' ' != c) {
	       putchar(c);	    /* print non-blank character */
	       if (YES == in_blank) /* end in_blank, if already in it */
		    in_blank = NO;
	  } else if (NO == in_blank) { /* print first blank */
	       putchar(c);
	       in_blank = YES;
	  }
}
