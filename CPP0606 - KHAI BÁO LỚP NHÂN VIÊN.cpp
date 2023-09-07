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
#define endl '\n'

class NhanVien
{
public: 
    string name, gender, timeBorn, location, phoneNumber, timeA;

    friend istream& operator >> (istream& in, NhanVien& nv)
    {
        getline(cin, nv.name);
        getline(cin, nv.gender);
        getline(cin, nv.timeBorn);
        getline(cin, nv.location);
        getline(cin, nv.phoneNumber);
        getline(cin, nv.timeA);
        return in;
    }

    friend ostream& operator << (ostream& out, const NhanVien& nv)
    {
        out << "00001" << " " << nv.name << " " << nv.gender << " " << nv.timeBorn << " " << nv.location << " " 
        << nv.phoneNumber << " " << nv.timeA;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}