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
        int tmp;
        map<int, int> m;
        FOR(i, 1, n)
        {
            cin >> tmp;
            m[tmp]++;
        }
        if(m.size() > 1)
        {
            int cnt = 0;
            for(auto it : m) 
            {
                if(cnt == 2) break;
                cout << it.first << " ";
                cnt++;
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}