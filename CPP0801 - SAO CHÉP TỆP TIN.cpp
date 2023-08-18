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

int main()
{
    string file1 = "PTIT.in", file2 = "PTIT.out";
    string infor;
    string line;
    ifstream input(file1);
    while(getline(input, line))
    {
        infor += line + "\n";
    }
    input.close();
    ofstream output(file2);
    output << infor;
    output.close();
    return 0;
}