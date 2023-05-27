main () {
     char s[] = "abcde123";
     printf("pre reverse: %s\n", s);
     reverse(s, 8);
     printf("after reverse: %s\n", s);
     reverse(s, 8);     
     printf("after reverse_2nd: %s\n", s);     
}
