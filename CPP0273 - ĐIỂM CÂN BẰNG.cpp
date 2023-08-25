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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        ll sum1[n + 5];
        ll sum2[n + 5];
        sum1[0] = 0;
        sum2[n + 1] = 0;
        int idx = -1;
        FOR(i, 1, n) 
        {
            cin >> a[i];
            sum1[i] = sum1[i - 1] + a[i];
        }
        FORD(i, n, 1)
        {
            sum2[i] = sum2[i + 1] + a[i];
        }
        FOR(i, 2, n - 1)
        {
            if(sum1[i - 1] == sum2[i + 1]) 
            {
                idx = i;
                break;
            }
        }
        cout << idx << endl;
    }
}