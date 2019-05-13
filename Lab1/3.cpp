#include <iostream>
using namespace std;

int main()
{
	int size;
	int size2;
	cin >> size >> size2;

	if (size <= 0) {
		return 1;
	}

	if (size2 > 20000) {
		return 1;
	}

	int *arr = new int[size];
	int *arr2 = new int[size2];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < size2; j++) {
		cin >> arr2[j];
	}







	for (int k = 0; k < size2; k++) {
		int mid = 0;
		int l = 0;
		int r = size - 1;
		int index1 = 0;
		int index2 = 0;
		while (l <= r)
		{
			int mid = (l + r) / 2;
			if (arr[mid] == arr2[k])
			{
				index1 = mid + 1;
				r = mid - 1;
			}
			else if (arr[mid] > arr2[k])
			{
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}
		mid = 0;
		l = 0;
		r = size - 1;
		while (l <= r)
		{
			int mid = (l + r) / 2;
			if (arr[mid] == arr2[k])
			{
				index2 = mid + 1;
				l = mid + 1;
			}
			else if (arr[mid] > arr2[k])
			{
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		if (index2 == 0 || index1 == 0) {
			cout << "0" << endl;
		}
		else
			cout << index1 << " " << index2 << endl;
	}

    return 0;
}
