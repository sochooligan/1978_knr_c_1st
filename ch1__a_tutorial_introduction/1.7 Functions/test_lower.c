#include <stdio.h>

main() {
     int c;
     
     while (EOF != (c = getchar())) {
	  putchar(lower(c));
     }
}
