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

int cnt = 1;

void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solveTime(string s, string& timeRes)
{
    int k = s.find("/");
    string d = s.substr(0, k);
    s = s.substr(k + 1);

    k = s.find("/");
    string m = s.substr(0, k);
    s = s.substr(k + 1);

    string y = s;

    timeRes += y + d + m;
    //cout << timeRes << endl;
}

class NhanVien
{
public:
    string id, name, sex, timeBorn, address, thue, day;
    string timee;

    friend istream& operator >> (istream& in, NhanVien& nv)
    {
        scanf("\n");
        if(cnt < 10) nv.id = "0000" + to_string(cnt++);
        else nv.id = "000" + to_string(cnt++);
        getline(in, nv.name);
        getline(in, nv.sex);
        getline(in, nv.timeBorn);
        getline(in, nv.address);
        getline(in, nv.thue);
        getline(in, nv.day);
        solveTime(nv.timeBorn, nv.timee);
        return in;
    }

    friend ostream& operator << (ostream& out, NhanVien nv)
    {
        out << nv.id << " " << nv.name << " " << nv.sex << " " << nv.timeBorn <<
        " " << nv.address << " " << nv.thue << " " << nv.day << endl;
        return out;
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    return a.timee < b.timee;
}

void sapxep(NhanVien nv[], int n)
{
    sort(nv, nv + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}