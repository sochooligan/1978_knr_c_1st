#include <stdio.h>

getline_kr(s, lim)    /* get line into s, return length */
char s[];
int lim;
{
     int c, i;
     
     i = 0;
     while (i<lim-1 && EOF!=(c=getchar()) && '\n'!=c)
	  s[i++] = c;
     
     if ('\n' == c) {
	  s[i++] = '\n';
     }

     s[i] = '\0';
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
