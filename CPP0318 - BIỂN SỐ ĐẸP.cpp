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

string solve(string s, string& s2)
{
    int k;
    s = s.substr(5);
    k = s.find(".");
    string s1 = s.substr(0, k);
    s2 = s.substr(k + 1);
    return s1;
}

bool CheckTangChat(string s1, string s2)
{
    if(s1[0] < s1[1] && s1[1] < s1[2])
    {
        if(s2[0] < s2[1]) return true;
    }
    return false;
}

bool CheckBangNhau(string s1, string s2)
{
    if(s1[0] == s1[1] && s1[1] == s1[2])
    {
        if(s2[0] == s2[1]) return true;
    }
    return false;
}

bool Check68(string s1, string s2)
{
    FOR(i, 0, 2) 
    {
        if(s1[i] != '6' && s1[i] != '8') return false;
    }
    FOR(i, 0, 1)
    {
        if(s1[i] != '6' && s1[i] != '8') return false;
    }
    return true;
}

int main()
{
    faster();
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; 
        getline(cin, s);
        string s1, s2;
        s1 = solve(s, s2);
        if(CheckBangNhau(s1, s2) || CheckTangChat(s1, s2) || Check68(s1, s2)) cout << "YES\n";
        else cout << "NO\n";
        //cout << s1 << " " << s2 << endl;
    }
}