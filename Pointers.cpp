#include <iostream>
using namespace std;
void out(int *a,int *b) {
    // Complete this function  
    cout << *a + *b <<endl;
    cout << abs(*a - *b);  
}

int main() {
    int *a = new int ,*b = new int;
    cin>>*a>>*b;
    
    out(a, b);

    return 0;
}
