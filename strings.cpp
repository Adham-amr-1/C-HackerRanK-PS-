#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b , su;
    char temp;
    int lena,lenb;
    cin>>a>>b;
    lena = a.size();
    lenb = b.size();
    cout<<lena<<" "<<lenb<<endl;
    
    su = a + b;
    cout<<su<<endl;
    
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    
    cout<<a<<" "<<b;
    
    
    return 0;
}
