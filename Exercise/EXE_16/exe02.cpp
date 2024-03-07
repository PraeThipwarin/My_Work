#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string textline;
    vector<float> A;
    while(getline(score,textline)){
        A.push_back(atof(textline.c_str()));
    }
    for(int i = 0;i < A.size();i++) 
        cout << A[i]<<endl;
}