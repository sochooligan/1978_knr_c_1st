#include <stdio.h>

/* fetch the next line of input.
   get line into s, return length.
   lim  means line max.
*/
getline_kr(s, lim)
char s[];
int lim;
{
     int c,i ;

     /* each line end with '\n'; supposed each line's length is less than n */
     for (i=0; i<lim-1 && (EOF!=(c = getchar())) && ('\n'!=c); ++i)
	  s[i] = c;

     /* keep the line end character '\n'.
        a line containing only a newline has length 1 */
     if ('\n' == c) {
	  s[i] = '\n';
	  ++i;
     }
     
     s[i] = '\0';
     return i;
}


copy(s1, s2)    /* copy s1 to s2; assume s2 big enough */
int s1[], s2[];
{
     int i;
     
     i = 0;
     while ('\0' != (s2[i] = s1[i]))
	  ++i;
}
