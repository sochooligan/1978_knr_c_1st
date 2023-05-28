#include <stdio.h>

#define    NTH_COLUMN   20
#define    MAXLINE   1000
#define    YES   1
#define    NO    0

/* fold after the last non-blank character
   before n-th column */
main()    
{
     int len;
     char line[MAXLINE];
     
     while ((len = line_fold(line, MAXLINE, NTH_COLUMN)) > 0) {
	  printf("%d: %s|\n", len, line);
     }
}

line_fold(s, lim, nth)
char s[MAXLINE];
int lim, nth;
{
     int c, i, inblank;
     int line_end; /* position after last non-blank */

     line_end = 0;
     inblank = NO;
     i = 0;
     while (i<lim-1 && (EOF!=(c=getchar())) && '\n'!=c) {
       	  if (i < nth) {
	       s[i] = c;

	       if (' ' != c && '\t' != c) {
		    if (YES == inblank) {
			 inblank = NO;
		    }
	       } else if (NO == inblank) {
		    inblank = YES;
		    line_end = i;
	       }
	       ++i;
	  }
     }

     if (YES == inblank) {
	  s[line_end] = '\0';
	  i = line_end + 1;
     }

     if (i >= nth)
	  i = nth;
     
     s[i] = '\0';

     /* special logic */
     if (0 == i && '\n' == c)
	  i = 1;
       
     return i;
}
