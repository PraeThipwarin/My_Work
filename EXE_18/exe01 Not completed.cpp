#include<iostream>
using namespace std;

class People{
    public:
        char gender;
        int age;
        long long int money;
        double height; 
        double weight;
        People * in_relation_with;
        bool flirt(People &);
};
bool People::flirt(People &target){
    if(target.age > 20){
        return true;
        this->in_relation_with = &target;

    }
    
    else return false;
}
