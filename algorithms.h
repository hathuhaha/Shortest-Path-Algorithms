#pragma once
#ifndef ALGORITHMS_H
#include <string>
#include <vector>
#include <queue>
#define f first
#define s second
#define inf 10000000000000
using namespace std;
vector<long long> Dijkstra(int& n, int& m, vector<vector<pair<int, int>>>& adj);
vector<long long> Bellman_Ford(int& n, int& m, vector<vector<pair<int, int>>>& adj);
#endif // !ALGORITHMS_H
