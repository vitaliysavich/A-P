#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<int>> g;

const int INF = 1000000000;

int main()
{

	int n;
	cin >> n;
	g.resize(n, vector<int>(n));
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n; ++i) {
			cin >> g[i][j];
		}
	}

	int s, e;
	cin >> s >> e;
	s--;
	e--;
	queue<int> q;
	q.push(s);
	vector<int> used(n, INF);
	vector<int> p(n);
	p[s] = -1;
	used[s] = 0;
	while (!q.empty()) {


		int cur = q.front();
		q.pop();
		if (cur == e) {
			cout << used[e] << endl;
		}
		

		for (int i = 0; i < n; ++i) {
			if (used[i] == INF && g[cur][i] == 1) {
				q.push(i);
				used[i] = used[cur] + 1;
				p[i] = cur;
			}

		}
		
	}

	if (used[e] == INF)
		cout << "-1";
	else {
		vector<int> path;
		for (int v = e; v != -1; v = p[v])
			path.push_back(v);
		reverse(path.begin(), path.end());
		if (path.size() > 1) {
			for (int i = 0; i < path.size(); ++i)
				cout << path[i] + 1 << " ";
		}
	}
	
	return 0;
}
