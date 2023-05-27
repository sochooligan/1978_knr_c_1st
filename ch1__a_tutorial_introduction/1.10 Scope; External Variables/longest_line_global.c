main()    /* find longest line; specialized version */
{
     int  len; /* current line length */
     extern int max;
     extern char save[];
	  
     max = 0;
     while ((len = getline_kr()) > 0)
	  if (len > max) {
	       max = len;
	       copy();
	  }
     if (max > 0)    /* there was a line */
	  printf("%s", save);
}
