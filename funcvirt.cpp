#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int divide(int x, int y){
    if(y == 0)
        throw 0;
    return static_cast<double>(x)/y;
}

int main()
{
    int x,y;
    int result;

    cin>>x>>y;

    try{
        result = divide(x,y);
        cout<<"result= " <<result<<endl;
    }
    catch(int &e){
        std::cerr<<"error"<<endl;
    }
}