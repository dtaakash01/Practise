#include<iostream>
#include<map>
#include<vector>

using std::vector;
using std::cin;
using std::endl;
using std::cout;
using std::map;
using std::string;
using std::make_pair;

int main(){
    map<string, int> q;
    
    
    cin>>n;

    for(int i = 0; i < n; i++ ){
        int x;
        cin>>x;

        if(x == 1){
            string s;
            int y;
            cin>>s>>y;

            q.insert(make_pair(s,y));
        }

        if(x == 2 || x == 3){
            string s;
            cin>>s;

            map<string,int>::iterator itr=q.find(s);

            if(itr != q.end()){
                cout<<itr->second<<endl;
                q.erase(s);
            }

        }
    }
}