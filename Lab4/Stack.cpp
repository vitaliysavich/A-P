#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main() {
	vector<int> stack;
	string key;
	int n;

	while (cin >> key) {
		if (key == "push") {
			cin >> n;
			stack.push_back(n);
			cout << "ok" << endl;
		}
		else if (key == "pop") {
			cout << stack[stack.size() - 1] << endl;
			stack.pop_back();
		}
		else if (key == "back") {
			cout << stack[stack.size() - 1] << endl;
		}
		else if (key == "size") {
			cout << stack.size() << endl;
		}
		else if (key == "clear") {
			stack.clear();
			cout << "ok" << endl;
		}
		else if (key == "exit") {
			cout << "bye" << endl;
			return 0;
		}
	}





	return 0;
}
