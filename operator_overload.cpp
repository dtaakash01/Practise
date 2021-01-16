#include<iostream>
//#include<vector>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class MyString{
    private:
        char *str;
    public:

        MyString(){}

        MyString(const char *s): str(nullptr){
            if(s == nullptr){
                str = new char[1];
                *str = '\0';
            }
        else{
            str = new char[std::strlen(s) + 1];
            std::strcpy(str,s);
        }
        }

        MyString &operator=(const MyString &rhs){
            if (this == &rhs)
                return *this;
            
           delete [] this->str;
            str = new char[std::strlen(rhs.str) + 1];
            
            std::strcpy(this->str, rhs.str);
            return *this;
        }

        ~MyString(){
            cout<<"Destructor"<<endl;
        }
};


int main(){
    MyString ss("LfL");
    MyString b ;
    b = ss;

    b = "Overload";
}