#include <iostream>
#include <vector>
using namespace std;

class People{
    string name;
    vector<People *> parents;
    vector<People *> children;
    public:
        People(string);
        ~People();
        void setParent(People *);
        void setChild(People *);
        void removeChild(People *);
        string getName();
        void showParents();
        void showChildren();
};
People::People(string s){
    name = s;
}
People::~People(){
    cout << name << " was deleted.\n";
    /*for(int i = 0;i<this->parents.size();i++) delete [] this->parents[i]; 
    for(int i = 0;i<this->children.size();i++){
        delete children[i];
    }
    for(int i = 0;i<this->children.size();i++) delete [] this->children[i];
    */
}
void People::setParent(People *p){
    for(int i=0;i < parents.size(); i++){
        if(parents[i] == p) return;
    }
    parents.push_back(p);
    p->setChild(this);
}
void People::setChild(People *p){
    for(int i=0;i < children.size(); i++){
        if(children[i] == p) return;
    }
    children.push_back(p);
    p->setParent(this);
}
void People::removeChild(People *p){
    for(int i=0;i < children.size(); i++){
        if(children[i] == p) children.erase(children.begin()+i);
    }
}
string People::getName(){
    return name;
}
void People::showParents(){
    cout << name << "'s parents: ";
    for(int i=0;i < parents.size(); i++){
        cout << parents[i]->getName() << " ";
    }
    cout << "\n";
}
void People::showChildren(){
    cout << name << "'s children: ";
    for(int i=0;i < children.size(); i++){
        cout << children[i]->getName() << " ";
    }
    cout << "\n";
}
int main(){
    People *a = new People("Alice");
    People *b = new People("Bob");
    People *c = new People("Charlie");
    People *d = new People("David");
    People *e = new People("Eve");
    People *f = new People("Frank");
    People *g = new People("Grace");
    People *h = new People("Heidi");
    People *m = new People("Mallet");
    People *o = new People("Oscar");
    People *p = new People("Peggy");
    People *w = new People("Wendy");
    
    c->setParent(a);
    c->setParent(b);
    d->setParent(a);
    d->setParent(b);
    d->setChild(e);
    d->setChild(g);
    h->setParent(g);
    h->setParent(f);
    p->setParent(m);
    p->setParent(o);
    w->setParent(h);
    w->setParent(p);
    
    a->showChildren();
    d->showChildren();
    h->showParents();
    w->showParents();
    p->showParents();

    delete d;

    a->showChildren();
    d->showChildren();
    h->showParents();
    w->showParents();
    p->showParents();

    return 0;
}

