#include<iostream>
#include<cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
char current_marker = 'X';
int current_player;

void drawboard(){

    cout<<" "<<board[0][0] << " | " <<board[0][1] << " | " <<board[0][2] <<endl;
    cout<<"------------\n";

    cout<<" "<<board[1][0] <<" | " <<board[1][1] << " | " <<board[1][2] <<endl;
    cout<<"------------\n";

    cout<<" " <<board[2][0] <<" | " <<board[2][1] <<" | " <<board[2][2] <<endl;

    cout<<endl;
   
}

int winner(){
    

    //column
    for(int i = 0 ; i < 3 ; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return current_player;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return current_player;
        }
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return current_player;
    if(board[0][2] == board[1][1] && board[2][0]){
        return current_player;
    }
    return 0;
}

bool place_marker(int slot){
    
    int row,col;

    if(slot % 3 == 0){
        row = (slot/3) -1;
    }else{
        row = (slot /3);
    }

    if(slot % 3 ==  0){
        col = 2;
    }else{
        col = (slot%3) - 1;
    }
    if(board[row][col] != 'X' && board[row][col] != 'O')
    {
    board[row][col] = current_marker;
    return true;}

    return false;

}

void swap(){
    if (current_marker == 'X'){
        current_marker = 'O';
    }
    else{
        current_marker = 'X';
    }
    if (current_player == 1){
        current_player = 2;
    }
    else{
        current_player = 1; 
    }
}

void play_game(){
    
    int s;
    int won;
    cin.ignore();
    for(int i = 0; i < 9 ; i++){
        cin>>s;
        if(s > 9 || s < 1 )
        {
            cout << "Number between 1 and 9 only" <<endl;
            i--;
            continue;
        }
      
       if(place_marker(s)){
           place_marker(s);
        swap();
       }
       else{
           cout<<"Already Occcupied:- "<< endl;
           i--;
       }
        
        drawboard();
        won = winner();
        if(won){
            cout<<"Player " << current_player << " has won this fucking tournament" <<endl;
            break;
        }
    }
}


int main(){

    play_game();
}