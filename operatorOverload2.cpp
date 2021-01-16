#include<iostream>
#include<cstring>

using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::flush;


class Mystring{
    private:
        char *str;
    public:
        Mystring(){}

        Mystring(const char *s):str(nullptr){
            if(s == nullptr) {
                str = new char[1];
                str[0] = '\0';
            }else{

            str = new char[std::strlen(s)];
            strcpy(str,s);}
        }

        Mystring(Mystring &&rhs): str(rhs.str){
            rhs.str = nullptr;
            
        }

        Mystring &operator=(Mystring &&rhs){
            if( this == &rhs)
                return *this;
            
            this->str == rhs.str;
            rhs.str=nullptr;
            return *this;
        }

        ~Mystring(){}
};


int main(){
    Mystring s1;
    s1 = Mystring("lih");
    s1 = "Over";
}