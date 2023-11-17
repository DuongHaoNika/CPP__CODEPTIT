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
#define pii pair<int, int>
#define endl '\n'
#define maxN 1000006
const ll MOD = 1e9 + 7;
const int base = 31;

struct SinhVien
{
    string name, id, grade;
    double p1, p2, p3;
};

bool cmp(SinhVien x, SinhVien y)
{
    return x.id < y.id;
}

void nhap(SinhVien& x)
{
    cin.ignore();
    getline(cin, x.id);
    getline(cin, x.name);
    getline(cin, x.grade);
    cin >> x.p1 >> x.p2 >> x.p3;
}

void in_ds(SinhVien* x, int n)
{
    FOR(i, 0, n - 1)
    {
        cout << i + 1 << " " << x[i].id << " " << x[i].name << " " << x[i].grade << " ";
        cout << fixed << setprecision(1) << x[i].p1 << " " << x[i].p2 << " " << x[i].p3 << endl;
    }
}

void sap_xep(SinhVien* x, int n)
{
    sort(x, x + n, cmp);
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}