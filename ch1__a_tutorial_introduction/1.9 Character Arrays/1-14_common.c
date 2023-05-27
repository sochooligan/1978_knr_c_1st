#include <stdio.h>
     
getline_kr(s, lim)    /* get line into s, return length */
char s[];
int lim;
{
     int c, i, len;

     /* each line end with '\n'; supposed each line's length is less than n */
     for (i=0, len=0; EOF!=(c=getchar()) && '\n'!=c; ++len) {
	  if (i<lim-1) {
	       s[i] = c;
	       ++i;
	  }
     }

     if ('\n' == c) {
       s[i] = '\n';
       ++i;       
       ++len;
     }
	 
     s[i] = '\0';
     return len;
}

copy(s1, s2)    /* copy s1 to s2; assume s2 bit enough */
char s1[], s2[];
{
     int i;
     
     i = 0;
     while ('\0' != (s2[i] = s1[i]))
	  ++i;
}
