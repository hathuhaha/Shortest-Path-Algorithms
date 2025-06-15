#include <iostream>
#include <algorithm>
#include <queue>
#include <direct.h>
#include <string>
#include <vector>
#include "inputData.h"
#include "algorithms.h"

using namespace std;

int main() {
	string fileName = "C:\\Users\\ngaod\\OneDrive\\Documents\\Research\\shortestPathAlgorithms\\input.txt";
	int n, m; 
	vector<vector<pair<int, int> > > adj;
	loadData(fileName, adj, n, m);
	vector<long long> dij = Dijkstra(n, m, adj);
	for (int i = 0; i < n; i++) {
		cout << dij[i] << ' ';
	}
	cout << '\n';
	vector<long long> bmf = Bellman_Ford(n, m, adj);
	for (int i = 0; i < n; i++) {
		cout << bmf[i] << ' ';
	}

}