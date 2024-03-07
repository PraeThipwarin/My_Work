#include <iostream>
#include <vector>
using namespace std;

void removeNegatives(vector<float> &A){
    for(int i = 0;i <= A.size();i++){
        if(A[i] < 0) {
            cout<<A[i]<<" was deleted"<<endl;
            A.erase(A.begin()+(i));
            }
    }
}

int main(){
    vector<float> A;
    A.push_back(0.5);
    A.push_back(-2.0);
    A.push_back(-3.7);
    A.push_back(1.2);
    for(int i = 0;i < A.size();i++){
        cout<<A[i]<<endl;
    }
    removeNegatives(A);

    for(int i = 0;i < A.size();i++){
        cout<<A[i]<<endl;
    }
}
