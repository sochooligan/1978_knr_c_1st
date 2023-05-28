
#include <stdio.h>

#define   MAXLINE   1000  /* maxmum input line size */

main()    /* find longest line */
{
     int  len;           /* current line enough */
     int  max;		 /* maxmum length seen so far */
     char line[MAXLINE]; /* current input line */
     char save[MAXLINE]; /* longest line, saved */
     
     max = 0;
     while ((len = getline_kr(line, MAXLINE)) > 0)
	  if (len > max) {
	       max = len;
	       copy(line, save);
	  }
     if (max > 0)    /* there was a line */
	  printf("%s", save);
}
