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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

void process()
{
    string s;
    cin >> s;
    bool check = false;
    while (true)
    {
        int sum = 0;
        FOR(i, 0, s.sz - 1)
        sum += (s[i] - '0');
        if (sum < 9)
            break;
        else if(sum == 9)
        {
            check = true;
            break;
        }
        string tmp;
        while (sum)
        {
            tmp += (sum % 10) + '0';
            sum /= 10;
        }
        s = tmp;
    }
    if (check)
        cout << 1;
    else
        cout << 0;
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
}