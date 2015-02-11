#include <stdio.h>

int main()
{
	int intArray[1000];
	int index = 0;
	float sum1 = 0;

	//read in input and store in array
	scanf_s("%d", &intArray[index]);
	while (intArray[index] > 0)
	{
		sum1 += intArray[index];
		index++;
		scanf_s("%d", &intArray[index]);
	}

	//if there is any input
	if (index > 0)
	{
		//calculate avg
		float firstAvg = sum1 / index;

		//go through the array and calculate the above average mean
		float sum2 = 0;
		int count = 0;
		for (int i = 0; i < index; i++)
		{
			if (intArray[i] >= firstAvg)
			{
				sum2 += intArray[i];
				count++;
			}
		}
		float secondAvg = sum2 / count;
		printf("%f\n", secondAvg);
	}
	//if there is no input
	else
	{
		printf("No input\n");
	}
	return 0;
}
