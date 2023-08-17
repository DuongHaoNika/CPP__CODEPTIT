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
        vi a;
        vi b;
        int n, k; cin >> n >> k;
        int tmp1, tmp2;
        bool check = false;
        FOR(i, 1, n)
        {
            if(i == 1) 
            {
                cin >> tmp1;
            }
            else 
            {
                cin >> tmp2;
                if(tmp2 < tmp1)
                {
                    check = true;
                    a.pb(tmp1);
                }
                else
                {
                    if(check == false) a.pb(tmp1);
                    else b.pb(tmp1);
                }
                tmp1 = tmp2;
            }
        }
        b.pb(tmp2);
        int e = lower_bound(a.begin(), a.end(), k) - a.begin();
        if(e > 0) cout << e + 1 << endl;
        else
        {
            e = lower_bound(b.begin(), b.end(), k) - b.begin();
            cout << a.size() + e + 1 << endl;
        }
    }
}