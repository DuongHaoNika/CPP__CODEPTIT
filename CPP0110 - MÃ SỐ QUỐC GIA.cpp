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
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int len = s.size();
        string tmp = "084";
        int k = s.find(tmp);
        FOR(i, 0, k - 1) cout << s[i];
        FOR(i, k + 3, len - 1) cout << s[i];
        cout << endl;
    }
}