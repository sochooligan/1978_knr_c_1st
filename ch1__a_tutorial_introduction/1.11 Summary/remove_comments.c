#include <stdio.h>

#define    MAXLINE   1000
#define    YES   1
#define    NO    0

main() {
     int len;
     char line[MAXLINE];
     
     while (len = getline_remove_comments(line, MAXLINE)) {
	  if (len > 0)
	       printf("%s\n", line);
     }
}

getline_remove_comments(s, lim)
char s[];
int lim;
{
     int c;
     int i;

     int comment_half;
     int incomment;
     int comment_half_pos;
     int incomment_pos;
     int inquoted;

     int uncomment_half;
     
     incomment = NO;
     inquoted = NO;
     i = 0;
     while (i<lim-1 && (EOF!=(c=getchar())) && '\n' != c) {
	  if (YES == inquoted) {
	       s[i++] = c;
	       if ('\"' == c)
		    inquoted = NO; /* end quoted */
	       }
	  else {
	       if (NO == incomment) {		/* start comment */
		    if (NO == comment_half) {
			 if ('/' == c) { /* incomment begin */
			      comment_half = YES;
			      comment_half_pos = i;
			 } else {
			      if ('\"' == c) {
				   inquoted = YES;
			      }
			      s[i++] = c;
			 }
		    } else {
			 if ('*' == c && comment_half_pos == i) {
			      incomment = YES;
			      comment_half = NO;
			 } else {
			      s[i++] = '/';
			      s[i++] = c;
			      if ('\"' == c) {
				   inquoted = YES;
			      }
			 }
		    }
	       } else {
		    if (NO == comment_half) {  /* uncomment begin */
			 if ('*' == c) {
			      comment_half = YES;
			      comment_half_pos = i;
			 }
		    } else {
			 if ('/' == c && comment_half_pos == i) {
			      incomment = NO;
			 }
			 comment_half = NO;			 
		    }
	       }
	  }
     }

	  
     s[i] = '\0';

     if (EOF == c)
       i = -1;

     return i;
}
