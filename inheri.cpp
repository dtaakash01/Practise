#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Base{
    private:
        int x;

    public:

        Base(){
            cout<<"No Args"<<endl;
        }

        Base(int x):Base{x}{

        }

        ~Base(){

        }
};


class Derived{
    private:
        int y;

    public:

        Derived():Base{2}, Derived{x+9}{
            cout<<"No args Derived"<<endl;
        }

        Derived():Base{x}, Derived(x+9)


}