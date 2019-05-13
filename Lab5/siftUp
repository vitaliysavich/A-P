#include <iostream>
#include <string>
#include <vector>



using namespace std;
int siftUp(vector<int>& key, int parent) {
	while((parent > 1) && (key[parent] > key[parent / 2])) {
		swap(key[parent], key[parent / 2]);
		parent /= 2;
	}
	return parent;
}


int main() {
	int size, request;
	cin >> size;
	vector<int> heap(size + 1);
	for (int i = 0; i < size; i++) {
		cin >> heap[i + 1];
	}

	cin >> request;

	for (int i = 0; i < request; ++i) {
		int a, m;
		cin >> a >> m;
		heap[a] += m;
		cout << siftUp(heap, a) << endl;
	}
	for (int k = 0; k < size; k++) {
		cout << heap[k + 1] << " ";
	}









	return 0;
}
