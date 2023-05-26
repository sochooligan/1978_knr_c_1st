#include <stdio.h>

main()
{
     int c;
     
     while (EOF != (c = getchar()))
	  if ('\t' == c)
	       printf(">\b-");
          else
	       putchar(c);
}
