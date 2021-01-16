#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int x,y;
    double d;

    cin>>x>>y;

    try{
        if (y == 0)
            throw 0;
        
        d = static_cast<double>(x)/y;
        cout<<"Result: "<< d <<endl;
    } catch(int &ex){
        std::cerr<<"Divide by zero"<<endl;
    }
}