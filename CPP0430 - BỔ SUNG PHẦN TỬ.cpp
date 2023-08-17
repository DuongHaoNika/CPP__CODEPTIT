#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, int> m;
        int tmp;
        int maxA = -1e9, minA = 1e9;
        FOR(i, 0, n - 1) 
        {
            cin >> tmp;
            maxA = max(maxA, tmp);
            minA = min(minA, tmp);
            m[tmp]++;
        }
        int cnt = 0;
        FOR(i, minA, maxA)
        {
            if(m[i] == 0) cnt++;
        }
        cout << cnt << endl;
    }
}