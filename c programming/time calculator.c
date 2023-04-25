#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 23; i++) //the hour hand. prints 23 lines that represent hours.
	{
		for (j = 0; j <= 59; j++) //the minute hand.
		{
			for (k = 0; k <= 59; k++) // seconds
			{
			    for (l = 0; l <= 999; l++) //milliseconds 
			    {
                    //prints the first 2 digits of the hour hand.
			        putchar((i / 10) + '0');
        			putchar((i % 10) + '0');

        			putchar(':');
                    // prints the minutes values
        			putchar((j / 10) + '0');
        			putchar((j % 10) + '0');

        			putchar(':');
                    // prints seconds
        			putchar((k / 10) + '0');
        			putchar((k % 10) + '0');
                    
        			putchar(':');
                    //prints millie seconds.
        			putchar((l / 100) + '0');
        			putchar((l / 10) % 10 + '0');
        			putchar((l % 10) + '0');
        			putchar('\n');
			    }
			}
			
		}
	}
	return (0);
}
