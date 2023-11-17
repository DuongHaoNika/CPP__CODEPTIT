#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'
#define maxn 100005

int main()
{
    faster();
    int n; cin >> n;
    int k = n*n;
    int a[k + 5];
    int b[n + 5][n + 5];
    FOR(i, 0, k - 1) cin >> a[i];
    sort(a, a + k);
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int cnt = 0;
    while(left <= right && top <= bottom)
    {
        FOR(i, left, right) b[top][i] = a[cnt++]; 
        top++;
        FOR(i, top, bottom) b[i][right] = a[cnt++];
        right--;
        if(left <= right && top <= bottom)
        {
            FORD(i, right, left) b[bottom][i] = a[cnt++];
            bottom--;
            FORD(i, bottom, top) b[i][left] = a[cnt++];
            left++;
        }
    }
    FOR(i, 0, n - 1)
    {
        FOR(j, 0, n - 1) cout << b[i][j] << " ";
        cout << endl;
    }
}