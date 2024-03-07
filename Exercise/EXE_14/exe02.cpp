#include <iostream>
using namespace std;

void myfunc1(int &x,int &y){
    int temp = x;
    x += y/2;
    y += temp/2;
}

void myfunc2(int *x,int *y){
    int temp = *x;
    *x += *y/2;
    *y += temp/2;
}

int main(){
    int a = 2,b = 3;
    myfunc1(a,b);
    cout<<a<<" "<<b<<endl;
    int c = 2,d = 3;
    myfunc2(&c,&d);
    cout<<c<<" "<<d<<endl;

    return 0;
}