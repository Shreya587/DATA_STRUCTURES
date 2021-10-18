// There are N objects, and each object has some price. The price of ith object is Ai.
// You have total money M, and you want to buy as many objects as possible.
// Find the maximum objects that you can buy?

// Input Format

// The first line contains T, the number of test cases.
// The first line of each test case contains N, the number of objects, and M, the money you have.
// The second line of each test case contains N space-separated integers A1, A2, ..., AN.

// Output Format

// For each test case, print a single number representing the maximum objects that you can buy.

// Constraints

// 1 ≤ T ≤ 10^5
// 1 ≤ N ≤ 10^5
// 1 ≤ Ai ≤ 10^8
// 1 ≤ M ≤ 10^8
// Sum of N over all test cases ≤ 5 * 10^5.




#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define pr pair<int,int>
#define vt vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define inf 1e18
#define w(x) int x; cin>>x; while(x--)

void solve()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
#ifndef RAVINDRA
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(x) {
		int n, m; cin >> n >> m;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int c = 0;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] > m) break;
			c++;
			m -= a[i];
		}
		cout << c << "\n";

	}

}

int main()
{
	solve();
	return 0;
}
