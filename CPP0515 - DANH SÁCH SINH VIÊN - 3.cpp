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

struct SinhVien
{
    string name, grade, id;
    double gpa;
    string timeBorn;
};

string solveName(string s)
{
    string res;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        FOR(i, 1, tmp.sz - 1) tmp[i] = tolower(tmp[i]);
        res += tmp + " ";
    }
    return res;
}

string solveTime(string s)
{
    int k = s.find("/");
    string d = s.substr(0, k);
    s = s.substr(k + 1);

    k = s.find("/");
    string m = s.substr(0, k);
    s = s.substr(k + 1);

    string y = s;

    if(d.sz == 1) d = "0" + d;
    if(m.sz == 1) m = "0" + m;
    string res = d + "/" + m + "/" + y;
    return res;
}

void nhap(SinhVien sv[], int N)
{
    FOR(i, 1, N)
    {
        cin.ignore();
        if(i < 10) sv[i].id = "B20DCCN00" + to_string(i);
        else if(i < 100) sv[i].id = "B20DCCN0" + to_string(i);
        else sv[i].id = "B20DCCN" + to_string(i);
        string ten;
        getline(cin, ten);
        sv[i].name = solveName(ten);
        getline(cin, sv[i].grade);
        string d;
        getline(cin, d);
        sv[i].timeBorn = solveTime(d);
        cin >> sv[i].gpa;
    }
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien sv[], int N)
{
    sort(sv + 1, sv + 1 + N, cmp);
}

void in(SinhVien sv[], int N)
{
    FOR(i, 1, N)
    {
        cout << sv[i].id << " " << sv[i].name << sv[i].grade << " " <<
        sv[i].timeBorn << " " << fixed << setprecision(2) << sv[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}