#define MAXLINE  1000 /* maximum input line size */

main()    /* find longest line */
{
     int  len; /* current line length */
     int  max; /* maximum length seen so far */
     char line[MAXLINE]; /* current input line */
     char save[MAXLINE]; /* longest line, saved */
     
     max = 0;
     while ((len = getline_kr(line, MAXLINE)) > 0)
	  if (len > max) {
	       max = len;
	       copy(line, save);
	  }
     
     if (max > 0)    /* there was a line */
	  printf("%d: %s\n", max, save);
}
