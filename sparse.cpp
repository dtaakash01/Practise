#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class elements{
    public:
        int i;
        int j;
        int val;
};

class dimensions{
    public:
        int m;
        int n;
        int num;
        elements *el;

};

int main(){
    dimensions p;
    p.m = 9;
    p.n = 8;
    p.num = 4;
    p.el  = new elements[p.num];

    for(int i = 0; i < p.num; i++){
        cin>>p.el[i].i>>p.el[i].j>>p.el[i].val;

    }

     for(int i = 0; i < p.num; i++){
        cout<<p.el[i].i<<" "<<p.el[i].j<<" "<<" "<<p.el[i].val<<endl;
        
    }
}