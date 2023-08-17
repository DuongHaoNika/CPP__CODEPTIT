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

int cnt = 1;

struct NhanVien
{
    string name, sex, birthdate, address, date, msthue;
    int id;
};

void nhap(NhanVien& x)
{
    x.id = cnt++;
    scanf("\n");
    getline(cin, x.name);
    getline(cin, x.sex);
    getline(cin, x.birthdate);
    getline(cin, x.address);
    getline(cin, x.msthue);
    getline(cin, x.date);
}

void inds(NhanVien ds[], int N)
{
    FOR(i, 0, N - 1)
    {
        printf("%0.5d ", ds[i].id);
        cout << ds[i].name << " " << ds[i].sex << " " << ds[i].birthdate << " " << ds[i].address << " " << ds[i].msthue 
        << " " << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}