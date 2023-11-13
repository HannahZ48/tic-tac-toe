#include <iostream>
using namespace std;

 char spot[10]={'n','1','2','3','4','5','6','7','8','9'};
 
int checkIfWin();
void showBoard();

int main() {
   int player=0;
   int num;
   showBoard();
   
   while (checkIfWin()==-1){
       cout << "\nPlayer "<< player%2 +1 << " : Choose a spot: ";
       cin >> num;
       while (true){
           if (spot[num]!= 'X' && spot[num]!= '0' && player%2==0){
           spot[num]= 'X';
           break;
           }else if (spot[num]!= 'X' && spot[num]!= '0' && player%2==1){
           spot [num]= '0';
           break;
           }
           else{
               cout << "Invalid! Please enter an open spot: ";
               cin >> num;
           }
       }
       showBoard();
       player++;
   }
   if (checkIfWin()==0){
       cout << "Draw!";
   }
   if (checkIfWin()==1){
       cout << "Player 1 Wins!";
   }
   if (checkIfWin()==2){
       cout << "Player 2 Wins!";
   }
    
    return 0;
}
void showBoard(){
    cout << "Player 1 (X)  -  Player 2 (O)" << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << spot[1] << "  |  " << spot[2] << "  |  " << spot[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << spot[4] << "  |  " << spot[5] << "  |  " << spot[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << spot[7] << "  |  " << spot[8] << "  |  " << spot[9] << endl;

    cout << "     |     |     " << endl << endl;
}


int checkIfWin() {
    if (spot[1]=='X' && spot[1] == spot[2] && spot[2] == spot[3]) return 1;
    else if (spot[4]=='X' && spot[4] == spot[5] && spot[5] == spot[6]) return 1;
    else if (spot[7]=='X' && spot[7] == spot[8] && spot[8] == spot[9]) return 1;
    else if (spot[1]=='X' && spot[1] == spot[4] && spot[4] == spot[7]) return 1;
    else if (spot[2]=='X' && spot[2] == spot[5] && spot[5] == spot[8]) return 1;
    else if (spot[3]=='X' && spot[3] == spot[6] && spot[6] == spot[9]) return 1;
    else if (spot[1]=='X' && spot[1] == spot[5] && spot[5] == spot[9])return 1;
    else if (spot[3]=='X' && spot[3] == spot[5] && spot[5] == spot[7]) return 1;
    else if (spot[1]=='0' && spot[1] == spot[2] && spot[2] == spot[3]) return 2;
    else if (spot[4]=='0' && spot[4] == spot[5] && spot[5] == spot[6]) return 2;
    else if (spot[7]=='0' && spot[7] == spot[8] && spot[8] == spot[9]) return 2;
    else if (spot[1]=='0' && spot[1] == spot[4] && spot[4] == spot[7]) return 2;
    else if (spot[2]=='0' && spot[2] == spot[5] && spot[5] == spot[8]) return 2;
    else if (spot[3]=='0' && spot[3] == spot[6] && spot[6] == spot[9]) return 2;
    else if (spot[1]=='0' && spot[1] == spot[5] && spot[5] == spot[9])return 2;
    else if (spot[3]=='0' && spot[3] == spot[5] && spot[5] == spot[7]) return 2;
    
    else if (spot[1] != '1' && spot[2] != '2' && spot[3] != '3' 
                    && spot[4] != '4' && spot[5] != '5' && spot[6] != '6' 
                  && spot[7] != '7' && spot[8] != '8' && spot[9] != '9') return 0;
    else
        return -1;
}