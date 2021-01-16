#include<iostream>
//#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Player{
    private:
        int health;
        int xp;
        string name;
    
    public:
        Player(int h, int x, string n): health(h), xp(x) ,name(n){
        }

        Player(Player &);
        int get_health(){
            return health;
        }

        ~Player(){cout<<"destructor"<<endl;}
};

Player::Player(Player &source):health(source.health), xp(source.xp), name(source.name){

}

int main(){
    Player p1(5,6,"ll");
    Player p2(p1);
}