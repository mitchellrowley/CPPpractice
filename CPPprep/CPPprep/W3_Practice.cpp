#include "common.h"


int Main()
{
	int n = 0;
	int sum = 0;
	for (int n = 1; n < 999; n++)
	{
		
		for (int i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum = sum + i;

				std::cout << "The number " << n << "is divisable" << std::endl;

			}
		}
	}
}