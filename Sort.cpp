#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(12);
	cout << v[0] << " " << v[1] << endl;;
	swap(v[0], v[1]);
	cout << v[0] << " " << v[1];

	return 0;
}