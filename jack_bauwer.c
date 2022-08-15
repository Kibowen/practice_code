#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			for (k = 0; k <= 59; k++)
			{
			    for (l = 0; l <= 999; l++)
			    {
			        putchar((i / 10) + '0');
        			putchar((i % 10) + '0');
        			putchar(':');
        			putchar((j / 10) + '0');
        			putchar((j % 10) + '0');
        			putchar(':');
        			putchar((k / 10) + '0');
        			putchar((k % 10) + '0');
        			putchar(':');
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