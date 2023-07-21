#include<iostream>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	int a;
	cin >> a;

	int am = a;
	int aM = a;

	

	for (int i = 1; i < n; i++) {
		int ai;
		cin >> ai;

		if (ai > aM) aM = ai;
		if (ai < am) am = ai;
	}

	int mtl = max(2 * am, aM);

	for (int i = 0; i < m; i++) {
		int bi;

		cin >> bi;

		if (bi <= mtl) {
			cout << -1;
			return 0;
		}
	}

	cout << mtl;
}
