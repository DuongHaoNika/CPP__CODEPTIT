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

char CharToInt(char s)
{
    if(s >= 'A' && s <= 'C') return '2';
    else if(s >= 'D' && s <= 'F') return '3';
    else if(s >= 'G' && s <= 'I') return '4';
    else if(s >= 'J' && s <= 'L') return '5';
    else if(s >= 'M' && s <= 'O') return '6';
    else if(s >= 'P' && s <= 'S') return '7';
    else if(s >= 'T' && s <= 'V') return '8';
    else if(s >= 'W' && s <= 'Z') return '9';
    return '1';
}

bool check(vector<char> v)
{
    int l = 0, r = v.sz - 1;
    while(l <= r)
    {
        if(v[l] != v[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        vector<char> v;
        FOR(i, 0, s.sz - 1) 
        {
            s[i] = toupper(s[i]);
            v.pb(CharToInt(s[i]));
        }
        if(check(v)) cout << "YES\n";
        else cout << "NO\n";
    }
}