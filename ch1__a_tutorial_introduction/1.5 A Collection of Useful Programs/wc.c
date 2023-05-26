#include <stdio.h>

#define   YES   1
#define   NO    0

main()    /* count lines, words, chars in input */
{     
     int c, nl, nw, nc, inword;
     
     inword = NO;
     nl = nw = nc = 0;
     while (EOF != (c = getchar())) {
	  ++nc;
	  if ('\n' == c)
	       ++nl;

	  if (' ' == c || '\t' == c  || '\n' == c) {
	       inword = NO;
	  } else if (NO == inword) {
	       inword = YES;
	       ++nw;
	  }
     }
     printf("lines: %d words: %d chars: %d\n", nl, nw, nc);
}
