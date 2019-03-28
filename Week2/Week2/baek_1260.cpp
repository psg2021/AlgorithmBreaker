#include <iostream>
#include <queue>

using namespace std;
int graph[1001][1001] = { 0 };
int isVisit_dfs[1001] = { 0 };
int isVisit_queue[1001] = { 0 };
queue<int> q;
int n;

void dfs(int start) {
	isVisit_dfs[start] = 1;
	cout << start << " ";
	for (int j = 1; j <= n; j++) {
		if (graph[start][j] == 1 && isVisit_dfs[j] == 0) {
			dfs(j);
		}
	}
	return ;
}

void bfs(int start) {
	q.push(start);
	isVisit_queue[start] = 1;
	cout << start << " ";
	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (isVisit_queue[i] == 0 && graph[temp][i] == 1) {
				q.push(i);
				isVisit_queue[i] = 1;
				cout << i << " ";
			}
		}
	}

	return;
}


int main() {
	int m, v;
	cin >> n >> m >> v;
	int a, b;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	dfs(v);

	cout << endl;

	bfs(v);
	return 0;
}