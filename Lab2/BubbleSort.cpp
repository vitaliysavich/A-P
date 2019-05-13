#include <iostream>
using namespace std;

int main()
{
	int temp;
	int size;
	cin >> size;
	if (size > 1000) {
		return 1;
	}
	int *array = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[j] > array[i]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int k = 0; k < size; k++) {
		cout << array[k] << " ";
	}


	return 0;
}
