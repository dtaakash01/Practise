#include<iostream>


using std::cout;
using std::endl;
using std::cin;
using std::string;

class Entity{

    public:
        Entity()
        {}

       virtual string get_name(){
            return "Entity";
        }

      virtual ~Entity(){
            cout<<"Entity Dest" <<endl;
        }
};


class Player : public Entity{
    public:
        Player()
        {}

       virtual string get_name(){
            return "Player";
        }

        virtual ~Player()
        {cout << "Player dest" <<endl;
        }
};



int main(){
    Entity *e = new Entity();

    cout<<e->get_name()<<endl;

    Player *p = new Player();

    cout<<p->get_name()<<endl;

    Entity *o = new Player();

    cout<<o->get_name()<<endl;
    

    delete p;
    delete e;
    delete o;

}