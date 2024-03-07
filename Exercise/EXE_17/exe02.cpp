#include<iostream>
using namespace std;
struct Rect{
double x,y,w,h;
};
Rect merge(Rect &a,Rect &b){
    double NewW = max(a.x+a.w,b.x+b.w)-min(a.x,b.x);
    double NewH = max(a.y,b.y)-min(a.y-a.h,b.y-b.h);
    double NewX = min(a.x,b.x);
    double NewY = max(a.y,b.y);
    return {NewX,NewY,NewW,NewH};
};

int main(){
    Rect R1,R2,R3,R4,R5;
    cout << "Please input Rect 1 (x y w h): ";
    cin >> R1.x >> R1.y >> R1.w >> R1.h;
    cout << "Please input Rect 2 (x y w h): ";
    cin >> R2.x >> R2.y >> R2.w >> R2.h;
    cout << "Please input Rect 3 (x y w h): ";
    cin >> R3.x >> R3.y >> R3.w >> R3.h;
    cout << "Please input Rect 4 (x y w h): ";
    cin >> R4.x >> R4.y >> R4.w >> R4.h;
    Rect R6 = merge(R1,R2);
    Rect R7 = merge(R3,R4);
    R5 = merge(R6,R7);
    cout << "Merged Rect = ";
    cout << R5.x << " " << R5.y << " " << R5.w << " " << R5.h << " ";
    
    return 0;
}