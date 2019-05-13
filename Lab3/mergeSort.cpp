#include <iostream>

using namespace std;



int arr[1000000];
int buf[1000000];



void merge(int l, int r) {
	if (r == l)
		return;
	if (r - l == 1) {
		if (arr[r] < arr[l])
			swap(arr[r], arr[l]);
		return;
	}
	int m = (r + l) / 2;
	merge(l, m);
	merge(m + 1, r);
	int xl = l;
	int xr = m + 1;
	int cur = 0;
	while (r - l + 1 != cur) {
		if (xl > m)
			buf[cur++] = arr[xr++];
		else if (xr > r)
			buf[cur++] = arr[xl++];
		else if (arr[xl] > arr[xr])
			buf[cur++] = arr[xr++];
		else buf[cur++] = arr[xl++];

	}
	for (int i = 0; i < cur; i++)
		arr[i + l] = buf[i];
}


int main() {
	int size;
	
	
	cin >> size;

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	merge(0, size - 1);

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";




	
	return 0;
}
