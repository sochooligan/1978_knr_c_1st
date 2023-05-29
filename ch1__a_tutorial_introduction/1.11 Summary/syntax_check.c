#include <stdio.h>

#define    MAXLINE  1000

#define    L_BRACES       '{'
#define    R_BRACES       '}'
#define    L_BRACKETS     '['
#define    R_BRACKETS     ']'
#define    L_PARENTHESES  '('
#define    R_PARENTHESES  ')'

#define    DOUBLE_QUOTES  '\"'
#define    SINGLE_QUOTE   '\''

#define    COMMENT_DASH   '/'
#define    COMMENT_STAR   '*'

#define    L_COMMENT      'L'
#define    R_COMMENT      'R'


#define    YES   1
#define    NO    0

/* syntax check by line
     1. collect the chars
     2. print
     3. give check result */
main()
{
     int len;
     char line[MAXLINE];
     
     while ((len = collect(line, MAXLINE)) >= 0) {
	  printf("%d: %s\n", len, line);
	  conclude(line, MAXLINE, len);
     }
}

/* {} [] () " ' L R 
    need add other inspection, such as [(]) kind error */
conclude(s, lim, len)
char s[];
int lim;
int len;
{
     int c, i;
     
     int braces = 0;
     int brackets = 0;
     int parentheses = 0;
     int double_quotes = 0;
     int single_quotes = 0;
     int comments = 0;
     
     for (i = 0; i < len; ++i) {
	  switch (s[i]) {
	  case '{':
	       ++braces;
	       break;
	  case '}':
	       --braces;
	       break;
	  case '[':
	       ++brackets;
	       break;
	  case ']':
	       --brackets;
	       break;
	  case '(':
	       ++parentheses;
	       break;
	  case ')':
	       --parentheses;
	       break;
	  case '\"':
	       ++double_quotes;
	       break;
	  case '\'':
	       ++single_quotes;
	       break;
	  case 'L':
	       ++comments;
	       break;
	  case 'R':
	       --comments;
	       break;
	  default:
	  }
     }

     if (braces > 0) {
	  printf("} is missing %d\n", braces); 
     } else if (braces < 0) {
	  printf("{ is missing %d\n", -braces); 
     }

     if (brackets > 0) {
	  printf("] is missing %d\n", brackets); 
     } else if (brackets < 0) {
	  printf("[ is missing %d\n", -brackets); 
     }

     if (parentheses > 0) {
	  printf(") is missing %d\n", parentheses); 
     } else if (parentheses < 0) {
	  printf("( is missing %d\n", -parentheses); 
     }
     
     if (0 != double_quotes % 2) {
	  printf("\" Not matched!\n");
     }
     
     if (0 != single_quotes % 2) {
	  printf("\' Not matched!\n");
     }

     if (comments > 0) {
	  printf("*/ is missing %d!\n", comments);
     } else if (comments < 0) {
	  printf("/* is missing %d!\n", -comments);
     }
}
     
/* collect chars; return length.
   special logic:
     1. single quotes, return char at the same time
     2. in double quotes comments not take effect.
     */
collect(s, lim)
char s[];
int lim;
{
     int c, i;
     
     int indoublequotes;
     int in_old_comments;
     int old_comments_half;
     int old_comments_half_pos;
     int in_new_comments;

     i = 0;
     old_comments_half_pos = 0;
     indoublequotes = NO;
     in_old_comments = NO;
     in_new_comments = NO;
     
     while (i<lim-1 && EOF != (c = getchar()) && '\n' != c) {
	  if (L_PARENTHESES == c || R_PARENTHESES == c
	      || L_BRACES == c || R_BRACES == c
	      || L_BRACKETS == c || R_BRACKETS == c
	      || SINGLE_QUOTE == c)
	  {
	       s[i++] = c;
	  } else {
	       if (DOUBLE_QUOTES == c) {
		    if (NO == indoublequotes) {
			 if (NO == in_old_comments && NO == in_new_comments) {
			      indoublequotes = YES;
			      s[i++] = c;
			 }
		    } else {
			 indoublequotes = NO;
			 s[i++] = c;
		    }
	       } else if ('/' == c) {
                    /* process comments not in double quotes */		    
		    if (NO == indoublequotes) {
			 if (YES == in_old_comments) {
			      if (YES == old_comments_half) {
				   if (old_comments_half_pos == i) {
					in_old_comments = NO; /* old comments end */
					s[i++] = R_COMMENT;
					old_comments_half = NO;
					old_comments_half_pos = 0;
				   }
			      } 
			 } else {
			      if (YES == old_comments_half) {
				   if (i == old_comments_half_pos) {
					in_new_comments = YES;  /* // style comments */
					old_comments_half_pos = 0;
				   }
			      } else {
				   old_comments_half = YES;   /* first / of // or /* */
				   old_comments_half_pos = i;
			      }
			 }
		    }
	       } else if ('*' == c) {
		    if (NO == indoublequotes) {
			 if (YES == in_old_comments) {
			      if (YES != old_comments_half) { 
				   old_comments_half = YES;
			      }
			      old_comments_half_pos = i;
			 } else {
			      if (YES == old_comments_half) {
				   if (old_comments_half_pos == i) {
					in_old_comments = YES;
					s[i++] = L_COMMENT;
				   } else {
					old_comments_half = NO;
					old_comments_half_pos = 0;
				   }
			      }
			 }
		    }
	       }
	  }
     }

     s[i] = '\0';

     if (EOF == c)
       i = -1;

     return i;
}
