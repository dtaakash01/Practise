#include<iostream>

using std::cin;
using std::cout;
using std::endl;


class Base{
    private:
        int x;
    
    public:
        Base():Base{0}{

        }

        Base(int x):x{x}{

        }

        Base(Base &rhs):x(rhs.x){
            cout<<"Copy Base";
        }

        Base &operator=(Base &rhs){
             if(this != &rhs){
                 x = rhs.x;
                 return *this;
             }
             return *this;
        }

        ~Base(){
            cout<<"Destructor Base"<<endl;
        }

};


class Derived : public Base{
    private:
        int d_val;

    public:
        Derived():Base{}{

        }

        Derived(int y):Base{y}, d_val(y*2){
                cout<<"Derived Constructor"<<endl;
        }

        Derived(Derived &other):Base(other), d_val(other.d_val){

        }

        Derived operator=(Derived &rhs){
            if (this == &rhs)
                return *this;
            Base:operator=(rhs);
            d_val = rhs.d_val;
            return *this;
        }

        ~Derived(){
            cout<<"Destructor Derived"<<endl;
        }
};

int main(){
    Base b;

    Derived a;
}