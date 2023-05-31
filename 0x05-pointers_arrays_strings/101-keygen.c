#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random password for
 * the program 101-crackme
 * Return: Always 0 (success)
 */

int main(void)
{
	char pswd[84];
	int index = 0,
	int sum = 0,
	int diffhalf1,
	int diffhalf2,

	srand(time(0));

	while (sum < 2772)

	{
		pswd[index] = 33 + rand() % 94;
		sum += pswd[index++];
	}

	pswd[index] = '\0';

	if (sum != 2772)
	{
		diffhalf1 = (sum - 2772) / 2;
		diffhalf2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diffhalf1++;

		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + diffhalf1))
			{
				pswd[index] -= diffhalf1;
				break;
			}}

		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + diffhalf2))
		{
			pswd[index] -= diffhalf2;
			break;
		}}}
	printf("%s", pswd);
	return (0);
}
