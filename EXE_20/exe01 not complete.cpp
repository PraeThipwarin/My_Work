#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
class Monster{
    public:
    int hp;
    int atk;
    int def;
    vector<string> skills;
    Monster(double,double,double,vector<string>);
    Monster operator+(Monster);
};
Monster::Monster(double h,double a,double d,vector<string> s){
    hp = h; atk = a; def = d;
    skills = s;
}
Monster Monster:: operator+(Monster x){
    hp = rand()%(abs(hp-x.hp))+min(hp,x.hp);
    atk = rand()%(abs(atk-x.atk))+min(atk,x.atk);
    def = rand()%(abs(def-x.def))+min(def,x.def);
    int num = rand()%2;
    switch (num)
    {
    case 0:
        skills.push_back(skills[rand()%(skills.size())]);
        break;
    case 1:
        skills.push_back(skills[rand()%(x.skills.size())]) ;
        break;
    default:
        break;
    }
}

int main(){
    srand(time(0));
    vector<string> Pikachu_skills;
    Pikachu_skills.push_back("Tail Whip");
    Pikachu_skills.push_back("Spark");
    Pikachu_skills.push_back("Thunder");
    Monster Pikachu(100,40,20,Pikachu_skills);
    
    vector<string> Nidoran_skills;
    Nidoran_skills.push_back("Tail Whip");
    Nidoran_skills.push_back("Double Kick");
    Nidoran_skills.push_back("Toxic Spikes");
    Nidoran_skills.push_back("Poison Fang");
    Monster Nidoran(200,25,50,Nidoran_skills);
    
    Monster Nidochu = Nidoran+Pikachu;
    cout << "HP = " << Nidochu.hp;
    cout << "\t ATK = " << Nidochu.atk;
    cout << "\t DEF = " << Nidochu.def << "\n";
    cout << "SKILLS: \n";
    for(int i = 0; i < Nidochu.skills.size();i++){
    cout << "\t" << Nidochu.skills[i] << "\n";
    }
    return 0;
}

