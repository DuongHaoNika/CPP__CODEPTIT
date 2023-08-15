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

int check(int n)
{
    int chan = 0, le = 0;
    while(n)
    {
        int k = n % 10;
        if(k % 2 == 1) le++;
        else chan++;
        n /= 10;
    }
    if(chan == le) return 1;
    return 0;
}

int main()
{
    int n; cin >> n;
    int l = pow(10, n - 1);
    int r = pow(10, n);
    int count = 0;
    FOR(i, l, r - 1)
    {
        if(check(i)) 
        {
            count++;
            cout << i;
            if(count % 10 == 0) cout << endl;
            else cout << " ";
        }
    }
}