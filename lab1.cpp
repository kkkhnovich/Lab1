#include <iostream>
#include "Solution.h"
using namespace std;
int main() {
	int n;
	int a;
	cout << "Enter the size:";
	cin >> n;
	cout << "Enter the massive:";
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	cout << endl;
	Class sol;
	cout << sol.minStartValue(v);
	return 0;
}