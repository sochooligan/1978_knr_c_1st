#include <stdio.h>

main()    /* count characters in input */
{    
     long nc;

     nc = 0;
     while (EOF != getchar())
	  ++nc;
     
     printf("%ld\n", nc);
}
