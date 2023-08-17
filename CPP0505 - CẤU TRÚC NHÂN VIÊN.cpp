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

struct NhanVien
{
    string name, sex, Birthdate, dc, sdt, date, id;
};

void nhap(NhanVien& x)
{
    getline(cin, x.name);
    getline(cin, x.sex);
    getline(cin, x.Birthdate);
    getline(cin, x.dc);
    getline(cin, x.sdt);
    getline(cin, x.date);
    x.id = "00001";
}

void in(NhanVien x)
{
    cout << x.id << " " << x.name << " " << x.sex << " " << x.Birthdate << " " << x.dc << " " << x.sdt << " " << x.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}