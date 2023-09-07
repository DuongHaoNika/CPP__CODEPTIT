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

class SinhVien
{
public: 
    string name, grade, timeBorn;
    double gpa;
    string d, m, y;

    friend ostream& operator << (ostream& out, const SinhVien& sv)
    {
        out << "B20DCCN001" << " " << sv.name << " " << sv.grade << " " <<
        sv.d << "/" << sv.m << "/" << sv.y << " " << fixed << setprecision(2) << sv.gpa; 
        return out;
    }

    friend istream& operator >> (istream& in, SinhVien& sv)
    {
        getline(cin, sv.name);
        getline(cin, sv.grade);
        in >> sv.timeBorn;
        in >> sv.gpa;

        string tmp;
        stringstream ss(sv.name);
        string res;
        while(ss >> tmp)
        {
            tmp[0] = toupper(tmp[0]);
            FOR(i, 1, tmp.sz - 1) tmp[i] = tolower(tmp[i]);
            res += tmp + " ";
        }
        sv.name = res;

        int k = sv.timeBorn.find("/");
        sv.d = sv.timeBorn.substr(0, k);
        if(sv.d.sz == 1) sv.d = "0" + sv.d;
        sv.timeBorn = sv.timeBorn.substr(k + 1);

        k = sv.timeBorn.find("/");
        sv.m = sv.timeBorn.substr(0, k);
        if(sv.m.sz == 1) sv.m = "0" + sv.m;

        sv.timeBorn = sv.timeBorn.substr(k + 1);
        sv.y = sv.timeBorn;
        if(sv.y.sz < 4) 
        {
            while(sv.y.sz < 4)
            {
                sv.y = "0" + sv.y;
            }
        }
        return in;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}