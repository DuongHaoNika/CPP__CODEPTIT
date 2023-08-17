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

struct ThiSinh
{
    string name, date;
    double p1, p2, p3;
    double sump;
};

void nhap(ThiSinh& a)
{
    getline(cin, a.name);
    getline(cin, a.date);
    cin >> a.p1 >> a.p2 >> a.p3;
    a.sump = a.p1 + a.p2 + a.p3;
}

void in(ThiSinh a)
{
    cout << a.name << " " << a.date << " " << fixed << setprecision(1) << a.sump;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}