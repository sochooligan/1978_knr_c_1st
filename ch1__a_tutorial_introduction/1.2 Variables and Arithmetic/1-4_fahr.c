
/* print Celsius-Fahrenheit table
     for c = -30, -25, -20, ..., 100 */

main()
{
     int lower, upper, step;
     float celsius, fahr;
     
     lower = -30;    /* lower limit of temperature table */
     upper = 100;    /* upper limit */
     step = 5;	     /* step size */

     printf("Celsius-Fahrenheit table\n");
     celsius = lower;
     while (celsius <= upper) {
	  fahr = (9.0/5.0) * celsius + 32.0;
	  printf("%4.0f % 6.1f\n", celsius, fahr);
	  celsius = celsius + step;
     }
}
