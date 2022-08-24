#include <bits/stdc++.h>
using namespace std;

int demo[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int n = sizeof(demo) / sizeof(demo[0]);

void min(int V)
{
	sort(demo, demo + n);

	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {
		while (V >= demo[i]) {
			V -= demo[i];
			ans.push_back(demo[i]);
		}
	}
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}

int main()
{
	int n = 80;
	cout << "the minimal number of change for " << n<< ": ";
	min(n);
	return 0;
}
