#include <stdio.h>
main() {    /* count characters in input */
     double nc;    /* use double cope with even bigger numbers */
     
     for (nc = 0; EOF != getchar(); ++nc)
	  ;
     printf("%.0f\n", nc);
}
