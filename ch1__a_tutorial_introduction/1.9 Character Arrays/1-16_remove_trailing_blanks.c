#define MAXLINE  1000 /* maximum input line size */

main()    /* find longest line */
{
     int  len; /* current line length */
     char line[MAXLINE]; /* current input line */
     char save[MAXLINE]; /* longest line, saved */
     
     while ((len = getline_kr(line, MAXLINE)) > 0) {
          /* len = 0 line with only EOF */
	  /* len = 1 means:
	     entirely blank lines and line only with '\n', delete them */
          /* warn: A Not empty line with end EOF, because line length
	           is larger than 1, this EOF will not take effect,
		   this is not correct logic, but current is this */
	  if (len > 1) {
	       copy(line, save);
	       printf("%s|\n", save);
	  }
     }
}
