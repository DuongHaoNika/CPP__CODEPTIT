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

int main()
{
    faster();
    int t; cin >> t;
    cin.ignore();
    map<string, int> m;
    while(t--)
    {
        string s; 
        getline(cin, s);
        stringstream ss(s);
        vector <string> v;
        string tmp;
        while(ss >> tmp)
        {
            FOR(i, 0, tmp.sz - 1) tmp[i] = tolower(tmp[i]);
            v.pb(tmp);
        }
        tmp = v[v.sz - 1];
        FOR(i, 0, v.sz - 2) tmp += v[i][0];
        if(m[tmp] == 0)
        {
            cout << tmp << "@ptit.edu.vn\n";
            m[tmp]++;
        }
        else if(m[tmp] > 0) 
        {
            cout << tmp << ++m[tmp] << "@ptit.edu.vn\n";
        }
    }
}