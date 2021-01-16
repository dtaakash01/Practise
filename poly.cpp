#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Base{
    public:
        virtual void say_hello() const{
            cout<<"Base class"<<endl;
        }

        virtual ~Base(){}
};

class Derived1 : public Base {
    public:
        virtual void say_hello() const override{
            cout<<"Derived Class 1"<<endl;
        }

        virtual ~Derived1(){}
};

class Derived2 : public Base {
    public:
        virtual void say_hello() const{
            cout<<"Derived Class 2"<<endl;
        }
        virtual ~Derived2(){}
};

class Derived3 : public Base {
    public:
        void say_hello(){
            cout<<"Derived Class 3"<<endl;
        }
};


int main(){
    Base *ptr1 = new Base();
    Base *ptr2 = new Derived1();
    Base *ptr3 = new Derived2();
    Base *ptr4 = new Derived3();

    ptr1->say_hello();
    ptr2->say_hello();

}
