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

int N;
vi v;

void in()
{
    FOR(i, 0, v.size() - 1) cout << v[i];
    cout << " ";
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        v.pb(j);
        if(i == N) in();
        else if(v.size() < N) Try(i + 1);
        v.pop_back();
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> N;
        Try(1);
        cout << endl;
    }
}