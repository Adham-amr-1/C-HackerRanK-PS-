#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int nt;
    long ln;
    char ch;
    float fl;
   long double db;
    cin>>nt>>ln>>ch>>fl>>db;
    cout<<nt<<endl;
    cout<<ln<<endl;
    cout<<ch<<endl;
    cout<<fixed<<setprecision(3)<<fl<<endl;
    cout<<fixed<<setprecision(9)<<db;
    return 0;
}
