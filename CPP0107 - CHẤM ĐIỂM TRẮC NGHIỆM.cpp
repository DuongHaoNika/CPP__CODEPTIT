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
    char a_101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    char a_102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
    while(t--)
    {
        int n; cin >> n;
        if(n == 101)
        {
            double cnt = 0;
            char a[15];
            FOR(i, 0, 14) 
            {
                cin >> a[i];
                if(a[i] == a_101[i]) cnt++;
            }
            cout << fixed << setprecision(2) << double(cnt/15) * 10 << endl;
        }
        else
        {
            double cnt = 0;
            char a[15];
            FOR(i, 0, 14) 
            {
                cin >> a[i];
                if(a[i] == a_102[i]) cnt++;
            }
            cout << fixed << setprecision(2) << double(cnt/15) * 10 << endl;
        }
    }
}