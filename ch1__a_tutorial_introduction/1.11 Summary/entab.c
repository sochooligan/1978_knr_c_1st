#include <stdio.h>

#define    TAB_STOPS    8
#define    SUBSTITUTE   '\t'
#define    YES   1
#define    NO    0

/* replace blanks with minimum tabs + blanks */
main()
{
     int c, i, inblank, blank_count;

     inblank = NO;
     blank_count = 0;
     
     /* this logic process input like:
	  "1  EOF\n" or "1  2EOF\n" correct but not show pretty */
     while (EOF != (c = getchar())) {
	  if (' ' == c) {
	       if (NO == inblank)
		    inblank = YES;
	       
	       ++blank_count;
	       if (TAB_STOPS == blank_count) {
		    blank_count = 0;
		    putchar('*'); /* us * as \t */
	       }
	  } else {
	       if (YES == inblank) {
		    inblank = NO;
	       }
	       
	       for (i = 0; i < blank_count; ++i) {
		    putchar('-'); /* us - as a space */		 		 
	       }
	       blank_count = 0;
	       
	       putchar(c);	       
	  }
     }
}
