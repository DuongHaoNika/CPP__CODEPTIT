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

const int N = 1e5 + 1;
const int K = 101;
const int M = 1e9 + 7;

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        int maxRes = -1e9;
        bool check = false;
        FOR(i, 0, n - 1) cin >> a[i];
        FOR(i, 0, n - 1)
        {
            FOR(j, 0, i - 1)
            {
                int k = a[i] - a[j];
                if(k > 0)
                {
                    check = true;
                    maxRes = max(maxRes, k);
                }
            }
        }
        if(!check) cout << -1 << endl;
        else cout << maxRes << endl;
    }
}
