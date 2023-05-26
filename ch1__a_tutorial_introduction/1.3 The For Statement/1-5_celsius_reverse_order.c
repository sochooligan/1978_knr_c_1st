/* print Farhenreit-Celsius table
   from 300 degrees to 0 */
main()
{
     int fahr;

     printf("Farhenreit-Celsius reverse table\n");
     
     for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
	  printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr -32));
     }
}
