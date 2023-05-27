#define MAXLINE  1000 /* maximum input line size */
#define    THRESHOLD    80

main()    /* print all lines longer than 80 characters */
{
     int  len; /* current line length */
     char line[MAXLINE]; /* current input line */
     int  save_len[MAXLINE];
     char save[MAXLINE][MAXLINE]; /* longest line, saved */
     int  nl;
     
     nl = 0;
     while ((len = getline_kr(line, MAXLINE)) > 0)
	  if (len > THRESHOLD) {
	       copy(line, save[nl]);
	       save_len[nl] = len;
	       ++nl;
	  }

     int i;
     for (i = 0 ; i < nl; ++i)
	  printf("%d: %s\n", save_len[i], save[i]);
}
