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

void MinA(string& s)
{
    int len = s.sz;
    FOR(i, 0, len - 1)
    {
        if(s[i] == '6') s[i] = '5';
    }
}

void MaxA(string& s)
{
    int len = s.sz;
    FOR(i, 0, len - 1)
    {
        if(s[i] == '5') s[i] = '6';
    }
}

ll StringToInt(string s)
{
    ll res = 0;
    FOR(i, 0, s.sz - 1)
    {
        res = res*10 + (s[i] - '0');
    }
    return res;
}

int main()
{
    faster();
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        MinA(s1); MinA(s2);
        cout << StringToInt(s1) + StringToInt(s2) << " ";
        MaxA(s1); MaxA(s2);
        cout << StringToInt(s1) + StringToInt(s2) << endl;
    }
}