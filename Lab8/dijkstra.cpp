#include <vector>
#include <iostream>
using namespace std;

const int INF = 1000000000;


int main()
{
	int n, s, e;
	cin >> n >> s >> e;
	s--;
	e--;
	vector<vector<int>> g(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> g[i][j];
	
	
	vector<int> d(n, INF);
	vector<bool> used(n);
	
	d[s] = 0;
	for (int i = 0; i < n; i++) {
		int was = -1;
		for (int j = 0; j < n; j++) {
			if (used[j] == false) {
				if (was == -1) {
					was = j;
				}
				else
					if (d[j] < d[was])
						was = j;
			}
		}
		if (d[was] == INF) {
			break;
		}
		used[was] = true;
		for (int j = 0; j < n; j++) {
			if (g[was][j] >= 0) {
				if ((d[was] + g[was][j]) < d[j])
					d[j] = d[was] + g[was][j];

			}
		}

	}
	if (d[e] == INF)
		cout << "-1";
	else
		cout << d[e];


    return 0;
}
