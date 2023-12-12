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
#define PI 3.141592653589793238
#define endl '\n'

void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class SV
{
public:
    int stt;
    string msv, name, grade, email, cty;
};

bool cmp(SV a, SV b)
{
    return a.msv < b.msv;
}

int main()
{
    faster();
    int n; cin >> n;
    cin.ignore();
    SV sv[n + 5];
    FOR(i, 1, n)
    {
        sv[i].stt = i;
        getline(cin, sv[i].msv);
        getline(cin, sv[i].name);
        getline(cin, sv[i].grade);
        getline(cin, sv[i].email);
        getline(cin, sv[i].cty);
    }
    sort(sv + 1, sv + 1 + n, cmp);
    int t; cin >> t;
    while(t--)
    {
        string tmp; cin >> tmp;
        FOR(i, 1, n)
        {
            if(sv[i].cty == tmp)
            {
                cout << sv[i].stt << " " << sv[i].msv << " " << sv[i].name << " " << sv[i].grade << " " << sv[i].email << " " << sv[i].cty << endl;
            }
        }
    }
}