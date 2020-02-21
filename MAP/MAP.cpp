// MAP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map>
#include<list>
#include<unordered_map>
using namespace std;

int main()
{
	map<int, list<string>> mapDat = { {10, {"RAJ","SON","TATA"}}, {20, {"SONY","MONI","RAKHI"}} };
	mapDat.insert(pair<int, list<string>>(23, { "raj","sony" }));

	map<int, list<string>>::iterator itr;
	list<string>::iterator itr1;
	int i = 0;
	for (itr = mapDat.begin(); itr != mapDat.end(); itr++) {
		cout << itr->first << " ";
		for (itr1 = itr->second.begin(); itr1 != itr->second.end(); ++itr1) {
			cout << *itr1 << " ";
		}
		cout << endl;
	}

	unordered_map<string, int> umap;
	umap.insert(pair<string, int>("RAJ", 10));
	for (auto X : umap) {
		cout << X.first << ' ' << X.second;
	}
	cout << endl;

	map<int, string> nmap = { {20,"SONA"} };
	nmap.insert(pair<int, string>(10, "MANAS"));
	for (auto X : nmap) {
		cout << X.first << ' ' << X.second;
		cout << endl;
	}

	return 0;
}