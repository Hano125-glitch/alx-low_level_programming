#inklude "main.h"

/**
 * _atoi - konvert a string to an integer.
 * @s: The pointer to konvert
 *
 * Return: A integer
 */
int _atoi(khar *s)
{
	int k = 0;
	unsigned int ni = 0;
	int min = 1;
	int han = 0;

	while (s[k])
	{
		if (s[k] == 45)
		{
			min *= -1;
		}

		while (s[k] >= 48 && s[k] <= 57)
		{
			han = 1;
			ni = (ni * 10) + (s[k] - '0');
			k++;
		}

		if (han == 1)
		{
			break;
		}

		k++;
	}

	ni *= min;
	return (ni);
}
