#pragma once
#ifndef INPUTDATA_H
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <ctime>
void generateData(std::string& inputFile);
void loadData(std::string& inputFile, std::vector<std::vector<std::pair<int, int>>>& adj, int &n, int &m);
#endif // !INPUTDATA_H
