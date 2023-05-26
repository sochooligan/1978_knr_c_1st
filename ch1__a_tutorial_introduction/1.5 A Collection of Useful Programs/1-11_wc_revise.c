#include <stdio.h>

#define NO 0
#define YES 1

main() {     /* count lines, words, chars in input */
     int c, nl, nw, nc, inword; 

     inword = NO;
     nl = nw = nc = 0;
     while (EOF != (c = getchar())) {
	  ++nc;
	  if ('\n' == c)
	       ++nl;

	  if (' ' == c || '\t' == c  || '\n' == c) {
	       inword = NO;
	  } else if (NO == inword) {  /* words must begins with a letter */
	       if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		    ++nw;
	       inword = YES;
	  }
     }
     printf("lines: %d, words: %d, chars: %d\n", nl, nw, nc);
}
