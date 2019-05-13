#include <stdio.h>

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

	if (size2 > 100000) {
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
		bool flag = false;
		int l = 0, mid;
		int r = size - 1;
		while ((l <= r) && (flag != true)) {
			mid = (l + r) / 2;
			if (arr[mid] == arr2[k]) {
				flag = true;
			}
			else if (arr[mid] > arr2[k]) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}


		}
		if (flag == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	system("pause");
	return 0;
	
}
