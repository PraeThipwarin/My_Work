#include<iostream>
using namespace std;

int main(){
    char a,*b = &a;
    float c,*d = &c;
    double e,*f = &e;

    cout << sizeof(a);
    cout << sizeof(b);
    cout << sizeof(c);
    cout << sizeof(d);
    cout << sizeof(e);
    cout << sizeof(f);

    return 0;
}