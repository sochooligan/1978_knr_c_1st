#include <stdio.h>

main()    /* count lines in input */
{
     int c, nl;

     nl = 0;
     while (EOF != (c = getchar()))
	  if ('\n' == c)
	       ++nl;
     
     printf("%d\n", nl);
}
