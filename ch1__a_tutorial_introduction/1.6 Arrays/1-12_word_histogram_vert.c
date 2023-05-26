
#include <stdio.h>

#define   YES   1
#define   NO    0
#define   MAXWORD   1000

main() {    /* prints the input words one per line */

     int c, inword;
     int n_word;
     int word_length;
     int max_wl;
     int save[MAXWORD];
     int width[MAXWORD];
     int len;
     int bits;
     
     n_word = 0;
     word_length = 0;
     max_wl = 0;
     inword = NO;
     while (EOF != (c = getchar())) {
	  if (' ' != c && '\n' != c && '\t' != c) {
	       if (NO == inword)
		    inword = YES;
	       ++word_length;
	  } else if (YES == inword) {
	       inword = NO;
	       save[n_word] = word_length; /* save word length */
	       
	       len = word_length;
	       bits = 0;
	       while (len) {
		    len = len / 10;
		    ++bits;
	       }
	       width[n_word] = bits + 1;
	       
	       if (word_length > max_wl) 
		    max_wl = word_length;  /* save max word length */
	       word_length = 0;
	       ++n_word;
	  }
     }

     /* print histogram vertically, layer by layer */
     int i, layer, w;
     for (layer = max_wl; layer >= 0; layer--) {
	  for (i = 0; i < n_word; ++i) {
	       if (0 == layer) { /* print word length number */
		    printf("%d ", save[i]);
		    continue;
	       }

	       w = width[i];	       
	       if (layer > save[i]) {
		    while (w--) {
			 putchar(' ');
		    }
	       }
	       else {
		    putchar('-');
		    w = w - 1;
		    while (w--){
			 putchar(' ');
		    }
	       }
	  }
	  putchar('\n');	  
     }
}
