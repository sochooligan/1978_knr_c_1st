lower(c)
char c;     
{
     if (c >= 'A' && c <= 'Z') {
	  c = 'a' - 'A' + c;
     }
     return (c);
}
