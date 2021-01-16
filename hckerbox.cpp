#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


class Box{

    

    private:
        int l;
        int b;
        int h;
    
    public:

        
        friend std::ostream & operator<<(std::ostream &out, const Box &b);
        
        //Constructors

        Box(): Box{0,0,0}{

        }

        Box(int length, int breadth , int height): l(length), b(breadth), h(height){

        }

        Box(const Box &);

    int getLength() const{return l;}

    int getBreadth() const{return b;}

    int getHeight() const{return h;}

    long long CalculateVolume(){return (long long) l * b * h;}
   
    //Operator Overload
    bool operator<(const Box &b);

    ~Box(){}
};

Box::Box(const Box &source) {
    this->l = source.l;
    this->b = source.b;
    this->h = source.h;
}

std::ostream & operator << (std::ostream &out, const Box &b) 
{ 
    out << b.l << " " << b.b << " " << b.h << std::flush;
	return out;
}

bool Box::operator<(const Box &B){
    
    /*if(this->l < b.l || (this->b < b.b && this->l  == b.1) ||  (this->h < b.h && 
    (this->l == b.l) && (this->b == b.b )){
        return true;
    }
    else 
        return false; */

   if (l < B.l) 
        {
            return true;
        } 
        else if (l == B.l) 
        {
            if (b < B.b) 
            {
                return true;
            } 
            else if (b == B.b) 
            {
                if (h < B.h) 
                {
                return true;
                }
            }
        }
		return false;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}