#include "common.h"

int n = 0;
int Main()
{
	for (int n = 1; n < 999; n++)
	{
		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum = sum + i;

				std::cout << "The number " << n << "is a whole number" << std::endl;

			}
		}
	}
}