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
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        int tmp; 
        int n; cin >> n;
        FOR(i, 1, n)
        {
            cin >> tmp;
            if(tmp == 0) cnt0++;
            else if(tmp == 1) cnt1++;
            else if(tmp == 2) cnt2++;
        }
        FOR(i, 1, cnt0) cout << 0 << " ";
        FOR(i, 1, cnt1) cout << 1 << " ";
        FOR(i, 1, cnt2) cout << 2 << " ";
        cout << endl;
    }
}