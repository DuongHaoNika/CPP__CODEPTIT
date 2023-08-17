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

struct SinhVien
{
    string name, grade;
    int d, m, y;
    double gpa;
    string id;

    void nhap()
    {
        getline(cin, name);
        getline(cin, grade);
        scanf("%d/%d/%d", &d, &m, &y);
        cin >> gpa;
        id = "B20DCCN001";
    }

    void xuat()
    {
        cout << id << " " << name << " " << grade << " ";
        printf("%0.2d/%0.2d/%4.d ", d, m, y);
        cout << fixed << setprecision(2) << gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}