#include <stdio.h>

#define    MAXLINE   1000 /* maximum input line size */

getline_kr()    /* specialized version */
{
     int c, i;
     extern char line[];

     for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && '\n'!=c; ++i)
	  line[i] = c;
     
     if ('\n' == c) {
	  line[i] = '\n';
	  ++i;
     }

     line[i] = '\0';
     return i;
}

copy()    /* specialized version */
{
     int i;
     extern char line[], save[];
     
     i = 0;
     while ('\0' != (save[i] = line[i]))
	  ++i;
}
