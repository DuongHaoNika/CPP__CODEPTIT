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
        vi v;
        FOR(i, 1, n) 
        {
            v.pb(i);
            cout << i;
        }
        cout << " ";
        while(next_permutation(v.begin(), v.end()))
        {
            FOR(i, 0, n - 1) cout << v[i];
            cout << " ";
        }
        cout << endl;
    }
}
