#include "inputData.h"


void generateData(std::string& inputFile) {
	std::ofstream output(inputFile);
	int n = (rand() % 6 + 5) * (rand() % 6 + 5) * (rand() % 6 + 5);
	int demo_m = std::min(n * (n - 1) / 2, (rand() % n + 1) * (rand() % (n / 2) + 1));
	std::vector<std::vector<int> > weight;
	weight.resize(n);
	for (int i = 0; i < n; i++)
		weight[i].resize(i);
	for (int i = 0; i < demo_m; i++) {
		int u = rand() % n + 1;
		int v = u + rand() % (n - u + 1);
		if (u < v) {

		}
	}


}
void loadData(std::string& inputFile, std::vector<std::vector<std::pair<int, int>>>& adj, int& n, int& m) {
	std::fstream input(inputFile);
	input >> n >> m;
	adj.resize(n);
	for (int i = 0; i < n; i++)
		adj[i].resize(n);
	for (int i = 0; i < m; i++) {
		int u, v, w; 
		input >> u >> v >> w;
		u--;
		v--;
		adj[u].push_back({ v, w });
		adj[v].push_back({ u, w });
	}
}
