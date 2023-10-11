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
    map<string, string> mp;
    string a, b;
    while(t--)
    {
        cin >> a >> b;
        int k = b.find("/");
        string d = b.substr(0, k);
        b = b.substr(k + 1);
        k = b.find("/");
        string m = b.substr(0, k);
        b = b.substr(k + 1);
        string y = b;
        y += m + d;
        //cout << y << endl;
        mp[y] = a;
    }
    map<string, string>::iterator it = mp.end();
    it = --mp.end();
    cout << it->se << "\n";
    it = mp.begin();
    cout << it->se;
}