#define MAXLINE  1000 /* maximum input line size */

main()    /* find longest line */
{
     int  len; /* current line length */
     char line[MAXLINE]; /* current input line */
     char save[MAXLINE]; /* longest line, saved */
     
     while ((len = getline_kr(line, MAXLINE)) >= 0) {
	  if (len > 0) {
	       /* reverse(line, len); */
	       printf("befor: %s|\n", line);
	       reverse(line, len);	       
	       /* reverse_2nd(line); */
	       printf("after: %s|\n", line);
	  }
     }
}
