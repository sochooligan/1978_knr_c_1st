#include <stdio.h>

#define    YES   1
#define    NO    0
     
getline_kr(s, lim)    /* get line into s, return length */
char s[];
int lim;
{
     int c, i;
     int j;  /* to be test traling blanks and tabs starting point*/
     int test_start;
     
     test_start = NO;
     for (i=0; i<lim-1 && (c=getchar())!=EOF && '\n'!=c; ++i) {
	  s[i] = c;
	  // trailing blanks check
	  if (' ' != c && '\t' != c) {
	       if (YES == test_start) {
		    test_start = NO;
		    j = 0;
	       }
	  } else if (NO == test_start) {
	       test_start = YES;
	       j = i;	       
	  }
     }

     if (YES == test_start) {
	  s[j] = '\0';
	  i = j;
     }
     else
	  s[i] = '\0';

     if (EOF == c && 0 == i)
	  return -1;
     
     return i;
}

copy(s1, s2)    /* copy s1 to s2; assume s2 bit enough */
char s1[], s2[];
{
     int i;
     
     i = 0;
     while ('\0' != (s2[i] = s1[i]))
	  ++i;
}

/* reverses the character string s */
/* n is string s's character number */
reverse(s, n)
char s[];
int n;
{
     int i;
     int c;
     
     for (i = 0; i < n / 2; ++i) {
	  c = s[i];
	  s[i] = s[n - 1 - i];
	  s[n - 1 - i] = c;
     }
}

reverse_2nd(s)
char s[];
{
     int len, i, c;
     
     len = 0;
     for (len = 0; '\0' != s[len]; ++len)
	  ;
     
     for (i = 0; i < len / 2; ++i) {
	  c = s[i];
	  s[i] = s[len - 1 - i];
	  s[len - 1 - i] = c;
     }
}
