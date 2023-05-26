#include <stdio.h>

main()    /* count blanks, tabs, and newlines */
{
     long n_white;
     int c;

     n_white = 0;
     
     while (EOF != (c = getchar()))
	  if (' ' == c || '\t' == c || '\n' == c)
	       ++n_white;
     
     printf("%ld\n", n_white);
}
