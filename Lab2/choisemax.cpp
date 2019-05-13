#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int *array = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	for (int i = size - 1; i >= 0; --i)
	{
		int max_i = i;
		for (int j = i; j >= 0; --j)
		{
			if (array[j] > array[max_i])
			{
				max_i = j;
			}
		}
		swap(array[i], array[max_i]);
	}

	for (int k = 0; k < size; k++) {
		cout << array[k] << " ";
	}






	return 0;
}
