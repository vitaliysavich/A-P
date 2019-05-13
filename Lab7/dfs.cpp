#include <vector>
#include <iostream>
using namespace std;

int cnt = 0;
vector<vector<int>> g;

void dfs(int st, vector<bool>& vis) {
	
	vis[st] = true;
	cnt++;
	for (int i = 0; i < vis.size(); i++) {
		if (g[st][i] == 1 && !vis[i])
			dfs(i, vis);
	}
}

int main()
{

	int n, s;
	cin >> n >> s;
	vector<bool> visited(n, false);

	g.resize(n, vector<int>(n));
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n; ++i) {
			cin >> g[i][j];
		}
	}
	dfs(s - 1, visited);
	
	cout << cnt;

	return 0;
}

