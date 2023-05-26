#include <stdio.h>

main()    /* Not totally the same as Exercise 1-8 expected */
{
     int c;

     while (EOF != (c = getchar()))
	  if ('\t' != c && '\b' != c)
	       putchar(c);
	  else {
	       if ('\t' == c) {
		    putchar('>');
	       }
	       
	       if ('\b' == c) {
		    putchar('<');

	       }
	  }
}

/*
  input backspace: C-q C-h
  that is: 
*/
