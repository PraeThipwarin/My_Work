#include<iostream>
using namespace std;

int sumNonZero(int *,int **,int **);

int main(){
    int A[] = {0,0,0,0,0,1,3,2,1,1,0,0,0,1,6,9,0,0,0,1,1,0,0};
    int sum;
    int *start, *end; 
    
    sum = sumNonZero(A,&start,&end);
    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n" ;
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout <<"--------------------------------------\n";
    sum = sumNonZero(end+1,&start,&end);
    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n" ;
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout <<"--------------------------------------\n";
    sum = sumNonZero(end+1,&start,&end);
    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n" ;
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout <<"--------------------------------------\n";
}

int sumNonZero(int *d,int **s,int **e){
    *s = d;
    int n = (d+22)-(d),locs,loce,sum = 0,i,j,k;
    for(i = 0;i<n;i++){
        if(*(d+i) != 0){
            *s = d+i;
            locs = i;
            break;
        }
    }for(j = locs;j<n;j++){
        if(*(d+j) == 0){
            *e = d+(j-1);
            loce = j;
            break;
        }
    }
    for(k = locs;k < loce;k++){
        sum += *(d+k);
    }

return sum;
}