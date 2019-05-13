#include <stdio.h>

#include <iostream>
using namespace std;


int main()
{
	int num;
	int size;
	cout << endl;
	cout << endl;
	
	cin >> size;
	if (size > 1000) {
		return 1;
	}


	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		//cout << "Write " << i << " array element ";
		cin >> arr[i];
		if (arr[i] > 1000 && arr[i] < -1000) {
			
			return 1;
		}
	}
	
	/*for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;*/

	//cout << "Write a number for search: ";
	cin >> num;


	int mem = 0;
	if (mem > 1000 && mem < -1000) {
		
		return 1;
	}


	for (int j = 0; j < size; j++)
	{
		if (arr[j] == num)
			mem++;
	}
	cout << mem;






	
    return 0;
}
