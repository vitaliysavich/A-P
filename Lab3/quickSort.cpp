#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int someArray = arr[(left + right) / 2];

	
	while (i <= j) {
		while (arr[i] < someArray)
			i++;
		while (arr[j] > someArray)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};
	
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);

}

int main()
{
	int size;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	quickSort(arr, 0, size - 1);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	
    return 0;
}
