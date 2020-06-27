#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int m;
    double n,a;
    cin>>m;
    cin>>n;
    string o;
    getline(cin,o);
    getline(cin,o);
    a=d+n;
    cout<<i+m<<endl;
    cout<<fixed<<setprecision(1)<<a<<endl;
    cout<<s+o<<endl;

    return 0;
}
