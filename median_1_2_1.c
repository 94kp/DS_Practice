#include <stdio.h>
#include <math.h>
#define ARR_SIZE 5 

int main()
{
	int sort_arr(int []);
	int arr[ARR_SIZE];
	int find_med(int []);

	printf("PROGRAM BEGIN\n\n");

	// for(int i = 0; i < ARR_SIZE; arr[i] = 0);

	printf ("\nEnter %d elements for the array\n", ARR_SIZE);

	for (int i = 0; i < ARR_SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort_arr(arr);

	printf("The median of the entered array is: %d\n", find_med(arr));
}

int sort_arr(int arr[])
{
	int current_num;
	int temp;

	printf("\nArray before sorting is:\n");

	for(int i = 0; i < ARR_SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		current_num = arr[i];

		for (int j = 0; j < ARR_SIZE; j++)
		{
			if (current_num <= arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("The new sorted array is:\n");

	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int find_med(int arr[])
{
	if (ARR_SIZE % 2 == 0)
	{
		return arr[((ARR_SIZE/2) + (ARR_SIZE/2)+1)/2];
	}
	else
	{
		return arr[(int)ceil(ARR_SIZE / 2)];
	}

}
