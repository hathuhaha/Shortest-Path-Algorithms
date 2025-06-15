#include "algorithms.h"

vector<long long> Dijkstra(int& n, int& m, vector<vector<pair<int, int>>>& adj) {
	vector<long long> shortestPath;
	shortestPath.resize(n);
	priority_queue<pair<long long, int>> pq;
	shortestPath[0] = 0;
	for (int i = 1; i < n; i++)
		shortestPath[i] = inf;
	pq.push({0, 0});
	while (pq.size()) {
		int u = pq.top().s;
		long long shortestPath_u = pq.top().f;
		pq.pop();
		if (shortestPath[u] < shortestPath_u)
			continue;
		for (pair<int, int> ad : adj[u]) {
			int v = ad.first;
			long long w = ad.second;
			if (shortestPath[v] > shortestPath[u] + w) {
				shortestPath[v] = shortestPath[u] + w;
				pq.push({ shortestPath[v], v });
			}
		}
	}
	return shortestPath;
}

vector<long long> Bellman_Ford(int& n, int& m, vector<vector<pair<int, int>>>& adj) {
	vector<long long> shortestPath;
	shortestPath.resize(n);
	shortestPath[0] = 0;
	for (int i = 1; i < n; i++)
		shortestPath[i] = inf;
	for (int i = 0; i < n; i++) {
		for (int u = 0; u < n; u++) {
			for (pair<int, int> ad : adj[u]) {
				int v = ad.first;
				long long w = ad.second;
				if (shortestPath[v] > shortestPath[u] + w) {
					shortestPath[v] = shortestPath[u] + w;
				}
			}
		}
	}
	for (int u = 0; u < n; u++) {
		for (pair<int, int> ad : adj[u]) {
			int v = ad.first;
			long long w = ad.second;
			if (shortestPath[v] > shortestPath[u] + w) {
				vector<long long> ans(n, -inf);
				return ans;
			}
		}
	}
	return shortestPath;
}
