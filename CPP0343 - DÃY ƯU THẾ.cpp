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
    faster();
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        int a = 0, b = 0, c = 0;
        while(ss >> tmp)
        {
            int k = tmp[tmp.sz - 1] - '0';
            if(k % 2 == 0) b++;
            else c++;
            a++;
        }
        if((a % 2 == 0 && b > c) || (a % 2 == 1 && c > b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}