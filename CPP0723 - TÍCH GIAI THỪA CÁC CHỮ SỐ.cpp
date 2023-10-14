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

bool cmp(char a, char b)
{
    return a > b;
}

int main()
{
    faster();
    //ll A[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int t; cin >> t;
    while(t--)
    {
        vector<char> res;
        int n;
        string s;
        cin >> n >> s;
        FOR(i, 0, n - 1)
        {
            if(s[i] == '2') res.pb('2');
            else if(s[i] == '3') res.pb('3');
            else if(s[i] == '4') 
            {
                res.pb('2');
                res.pb('2');
                res.pb('3');
            }
            else if(s[i] == '5') res.pb('5');
            else if(s[i] == '6') 
            {
                res.pb('3');
                res.pb('5');
            }
            else if(s[i] == '7') res.pb('7');
            else if(s[i] == '8')
            {
                res.pb('2');
                res.pb('2');
                res.pb('2');
                res.pb('7');
            }
            else if(s[i] == '9')
            {
                res.pb('3');
                res.pb('3');
                res.pb('2');
                res.pb('7');
            }
        }
        if(res.sz > 0)
        {
            sort(res.begin(), res.end(), cmp);
            FOR(i, 0, res.sz - 1) cout << res[i];
        }
        else cout << 1;
        cout << endl;
    }
}