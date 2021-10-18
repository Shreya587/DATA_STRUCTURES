// There are N students in section A. The i-th student got Ai marks. The class teacher of section B was absent so sections A and B were merged. The students of section B did not want to humiliate themselves, so they decided to sit with students having the same marks as them. You are given the marks of students of section B in order of their entry in the class. You have to tell whether the i-th student of section B can sit with a student with the same marks as him. If there is at least 1 person in the room with the same marks, print ‘YES’ else print ‘NO’. (without the quotes)

// See Sample Test Cases.

// Input Format

// The first line of the input contains one integer T - the number of test cases. Then T test cases follow.
// The first line of each test case contains two space-separated integers N and M - the number of students in sections A and B respectively.
// The second line of each test case contains N space-separated integers A1, A2, …, AN - the grades of students of section A.
// The third line of each test case contains M space-separated integers B1, B2, …, BM - the grades of students of section B.

// Output Format

// For each test case, print M strings on a new line. Print ‘YES’ if there is at least 1 person in the room with the same IQ. Otherwise, print ‘NO’. (without the quotes)

// Constraints

// 1≤ T ≤ 10
// 1≤ N, M ≤ 10^5
// 1≤ Ai , Bi ≤ 10^12



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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    w(x) {
        int n, m; cin >> n >> m;
        map<int, bool> mp;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            mp[x] = 1;
        }
        for (int i = 0; i < m; ++i)
        {
            int x;
            cin >> x;
            if (mp.count(x)) {
                cout << " YES" << "\n";
            }
            else {
                cout << "NO" << "\n";
                mp[x] = 1;
            }

        }
    }
}

int main()
{
    solve();
    return 0;
}
