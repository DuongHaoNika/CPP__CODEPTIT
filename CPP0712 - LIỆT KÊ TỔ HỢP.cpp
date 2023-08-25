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

int N, X[100], K;
 
void inkq()
{
    for(int i = 1; i <= K; i++)
    {
        cout << X[i];
    }
    cout << " ";
}
 
void Try(int i)
{
    for(int j = X[i - 1] + 1; j <= N - K + i; j++)
    {
        X[i] = j;
        if(i == K)
        {
            inkq();
        }
        else Try(i + 1);
    }
}
 
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> N >> K;
        Try(1);
        cout << endl;
    }
}
