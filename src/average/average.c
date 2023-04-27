#include "average.h"

float average(float arr[], unsigned int size)
{
	float total = 0;
	if(size == 0)
		return 0;
	else
	{
	  for (unsigned int i = 0; i< size ; i++)
		{
		total += arr[i];
		}
	return total/(float)size;
	}
}