#include <iostream>
#include <string>
#include <vector>



using namespace std;
int siftDown(vector<int>& key, int desc) {
	while (desc * 2 < key.size()) {
		int maxIndex = desc * 2;
		if ((desc * 2 + 1 < key.size()) && (key[desc * 2 + 1] > key[desc * 2])) {
			maxIndex = desc * 2 + 1;
		}
		if (key[maxIndex] > key[desc]) {
			swap(key[desc], key[maxIndex]);
			desc = maxIndex;
		}
		else {
			break;
		}
	}
	
	return desc;
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
		heap[a] -= m;
		cout << siftDown(heap, a) << endl;
	}
	for (int k = 0; k < size; k++) {
		cout << heap[k + 1] << " ";
	}








	
	return 0;
}
