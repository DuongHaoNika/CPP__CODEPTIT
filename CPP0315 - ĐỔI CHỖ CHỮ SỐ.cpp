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
        string s; cin >> s;
        int len = s.sz;
        bool check = false;
        int idx = -1;
        FOR(i, 0, len - 2)
        {
            if(s[i] > s[i + 1])
            {
                idx = i;
            }
        }
        if(idx == -1) cout << -1;
        else
        {
            char c = s[idx];
            char tmp = s[idx + 1];
            int index = idx + 1;
            FOR(i, idx + 2, len - 1)
            {
                if(s[i] > tmp && s[i] < c) 
                {
                    tmp = s[i];
                    index = i;
                }
            }
            swap(s[idx], s[index]);
            cout << s;
        }
        cout << endl;
    }
}