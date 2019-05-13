#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main() {
	vector<int> queue;
	string key;
	int n;

	while (cin >> key) {
		if (key == "push") {
			cin >> n;
			queue.push_back(n);
			cout << "ok" << endl;
		}
		else if (key == "pop") {
			cout << queue[0] << endl;
			queue.erase(queue.begin());
		}
		else if (key == "front") {
			cout << queue[0] << endl;
		}
		else if (key == "size") {
			cout << queue.size() << endl;
		}
		else if (key == "clear") {
			queue.clear();
			cout << "ok" << endl;
		}
		else if (key == "exit") {
			cout << "bye" << endl;
			return 0;
		}
	}





	return 0;
}
