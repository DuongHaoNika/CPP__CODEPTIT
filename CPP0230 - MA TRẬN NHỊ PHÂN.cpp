#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int a[1000005];

int main()
{
    faster();
    int n; cin >> n;
    int res = 0;
    FOR(i, 1, n)
    {
        int dem0 = 0, dem1 = 0;
        int tmp;
        FOR(j, 1 , 3) 
        {   
            cin >> tmp;
            if(tmp == 0) dem0++;
            else dem1++;
        }
        if(dem1 > dem0) res++;
    }
    cout << res << endl;
}