#include <stdio.h>

#define    YES   1
#define    NO    0

getline_kr(s, lim)    /* get line into s, return length */
char s[];
int lim;
{
     int c, i;
     int line_end; /* also is the tariling start position */
     int inblank_or_intab;
     
     inblank_or_intab = NO;
     for (i=0; i<lim-1 && EOF!=(c=getchar()) && '\n'!=c; ++i) {
	  s[i] = c;
	  if (' ' != c && '\t' != c) {
	       if (YES == inblank_or_intab) {
		    inblank_or_intab = NO;
	       }
	  } else if (NO == inblank_or_intab) {
	       inblank_or_intab = YES;
	       line_end = i;
	  }
     }

     if (YES == inblank_or_intab) {
	  s[line_end] = '\0';
	  i = line_end + 1; /* line with only blanks or tabs return 1 */
     }

     /* special logic: line with only '\n' return 1 */
     if ( 0 == i && '\n' == c) {
         s[i] = '\0';
         ++i;
     }
     
     s[i] = '\0'; /* end string */

     return i;
}

copy(s1, s2)    /* copy s1 to s2; assume s2 bit enough */
char s1[], s2[];
{
     int i;
     
     i = 0;
     while ('\0' != (s2[i] = s1[i]))
	  ++i;
}
