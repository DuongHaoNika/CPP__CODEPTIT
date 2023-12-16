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

class KhachHang;
class MatHang;

map<string, KhachHang> mkh;
map<string, MatHang> mmh;

int cnt1 = 1, cnt2 = 1, cnt3 = 1;

class KhachHang
{
public:
    string id, name, sex, timeBorn, address;
    friend class HoaDon;

    friend istream& operator >> (istream& in, KhachHang& kh)
    {  
        scanf("\n"); 
        if(cnt1 < 10) kh.id = "KH00" + to_string(cnt1++);
        else if(cnt1 < 100) kh.id = "KH0" + to_string(cnt1++);
        else kh.id = "KH" + to_string(cnt1++);
        getline(in, kh.name);
        getline(in, kh.sex);
        getline(in, kh.timeBorn);
        getline(in, kh.address);
        mkh[kh.id] = kh;
        return in;
    }
};

class MatHang
{
public:
    string id, name, dvi;
    ll giaMua, giaBan;
    friend class HoaDon;

    friend istream& operator >> (istream& in, MatHang& mh)
    {   
        getchar();
        if(cnt2 < 10) mh.id = "MH00" + to_string(cnt2++);
        else if(cnt2 < 100) mh.id = "MH0" + to_string(cnt2++);
        else mh.id = "MH" + to_string(cnt2++);
        getline(in, mh.name);
        getline(in, mh.dvi);
        in >> mh.giaMua >> mh.giaBan;
        mmh[mh.id] = mh;
        return in;
    }
};

class HoaDon
{
public:
    string id, personID, matHangID;
    ll quantity;

    friend istream& operator >> (istream& in, HoaDon& hd)
    {
        scanf("\n");
        if(cnt3 < 10) hd.id = "HD00" + to_string(cnt3++);
        else if(cnt3 < 100) hd.id = "HD0" + to_string(cnt3++);
        else hd.id = "HD" + to_string(cnt3++); 
        in >> hd.personID >> hd.matHangID >> hd.quantity;
        return in;
    }

    friend ostream& operator << (ostream& os, HoaDon hd)
    {
        os << hd.id << " ";
        KhachHang kh = mkh[hd.personID];
        os << kh.name << " " << kh.address << " ";
        MatHang mh = mmh[hd.matHangID];
        os << mh.name << " " << mh.dvi << " " << mh.giaMua << " " << mh.giaBan << " " << 
        hd.quantity << " " << hd.quantity*mh.giaBan << endl;
        return os;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}