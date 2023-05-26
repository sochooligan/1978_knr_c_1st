#include <stdio.h>

#define    YES  1
#define    NO   0

main()
{
     int c, in_blank;
     
     in_blank = NO;
     while (EOF != (c = getchar()))
	  if (' ' != c) {
	       putchar(c);
	       if (YES == in_blank)
		    in_blank = NO;
	  } else if (NO == in_blank) {
	       putchar(c);
	       in_blank = YES;
	  }
}
