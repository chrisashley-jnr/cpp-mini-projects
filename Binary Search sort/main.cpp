#include <iostream>
using namespace std;

int binarySearch(int arr[], int length, int searchItem);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = 9;
	int searchItem = 1;

	cout << searchItem << " is at " << binarySearch(arr, length, searchItem)
		 << "th index of the array." << endl;

	return 0;
}

int binarySearch(int arr[], int length, int searchItem)
{
	int start = 0, end = length - 1, pivot;

	for (int i = 0; i < length / 2; i++)
	{
		pivot = (start + end) / 2;

		if (searchItem == arr[pivot])
		{
			return pivot;
		}
		else if (searchItem > arr[pivot])
		{
			start = pivot + 1;
		}
		else
		{
			end = pivot - 1;
		}
	}

	return -1;
}
