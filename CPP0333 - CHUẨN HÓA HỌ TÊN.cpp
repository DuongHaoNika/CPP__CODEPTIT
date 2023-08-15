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
    vector<string> res;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        int len = tmp.size();
        FOR(i, 0, len - 1) tmp[i] = tolower(tmp[i]);
        tmp[0] = toupper(tmp[0]);
        res.pb(tmp);
    }
    FOR(i, 0, res.size() - 1)
    {
        if(i == res.size() - 1) 
        {
            FOR(j, 0, res[i].size()) res[i][j] = toupper(res[i][j]);
            cout << ", " << res[i];
        }
        else if(i == 0) cout << res[i];
        else cout << " " << res[i];
    }
}