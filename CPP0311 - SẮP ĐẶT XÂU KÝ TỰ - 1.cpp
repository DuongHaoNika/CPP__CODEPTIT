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
        map<char, int> m;
        int check = 1;
        int k = (len + 1)/2 + 1;
        FOR(i, 0, len - 1) 
        {
            if(++m[s[i]] >= k)
            {
                check = 0;
                break;
            }
        }
        cout << check << endl;
    }
}