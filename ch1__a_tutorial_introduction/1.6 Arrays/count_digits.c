#include <stdio.h>

main()    /* count digits, white space, others */
{
     int c, i, n_white, n_other;
     int n_digit[10];

     n_white = n_other = 0;
     for (i = 0; i < 10; ++i)
	  n_digit[i] = 0;

     while (EOF != (c = getchar()))
	  if (c >= '0' && c <= '9')
	       ++n_digit[c-'0'];
	  else if (' ' == c || '\n' == c || '\t' == c)
	       ++n_white;
	  else
	       ++n_other;

     printf("digits =");
     for (i = 0; i < 10; ++i)
	  printf(" %d", n_digit[i]);
     printf("\nwhite space = %d, other = %d\n", n_white, n_other);
}
