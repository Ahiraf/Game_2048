#include<bits/stdc++.h>
using namespace std;

struct Game2048{
    int board[4][4];
    bool has_game_ended(){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
               if ((board[i][j]==0 || (i < 3 && board[i][j] == board[i + 1][j]) || (j < 3 && board[i][j] == board[i][j + 1]))) {
                 return false;
                }
            }
        }
        return true;
    }
     bool has_won() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j] == 2048) {
                    return true;
                }
            }
        }
        return false;
    }

    void init(){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                board[i][j]=0;
            }
        }
        random_populate();
        random_populate();
    }
    void swipe_right(int arr[]){
        int last_placed=4;
        int can_merge=0;
        for(int i=3;i>=0;i--){
            if(arr[i]!=0){
                if(can_merge){
                    if(arr[i]==arr[last_placed]){
                        arr[last_placed]*=2;
                        if(i!=last_placed) arr[i]=0;
                        can_merge=0;
                    }
                    else{
                        arr[last_placed-1]=arr[i];
                        last_placed--;
                        if(i!=last_placed) arr[i]=0;
                        can_merge=1;
                    }
                }
                else{
                    arr[last_placed-1]=arr[i];
                    last_placed--;
                    if(i!=last_placed) arr[i]=0;
                    can_merge=1;
                }
            }
        }
    }
    void random_populate(){ //to give value to the board//
       while(1){
           int i = rand()%4; //so that the value stays between 0 to 3
           int j = rand()%4; //rand = to call new numbers
           if(board[i][j]==0){
                int ch=rand()%2;
                if(ch==0)
                {
                   board[i][j]=2;
                }
                else
                {
                   board[i][j]=4;
                }
                return;
            }
        }
    }

    bool up(){
        for(int col=0;col<4;col++){
            int arr[4];
            for(int row=0;row<4;row++){
                arr[3-row]=board[row][col];//to make the upward column into row and then swipe them to the right
            }
        swipe_right(arr);
        for(int row=0;row<4;row++){
               board[row][col]=arr[3-row];
            }
        }
             move_end();
    }
    bool down(){
        for(int col=0;col<4;col++){
            int arr[4];
            for(int row=0;row<4;row++){
                arr[row]=board[row][col];//to make the upward column into row and then swipe them to the right
            }
        swipe_right(arr);
        for(int row=0;row<4;row++){
               board[row][col]=arr[row];
            }
        }
            move_end();

    }
    bool left(){
        for(int row=0;row<4;row++){
            int arr[4];
            for(int col=0;col<4;col++){
                arr[3-col]=board[row][col];//to make the upward column into row and then swipe them to the right
            }
        swipe_right(arr);
        for(int col=0;col<4;col++){
               board[row][col]=arr[3-col];
            }
        }
             move_end();

    }
    bool right(){
        for(int row=0;row<4;row++){
            int arr[4];
            for(int col=0;col<4;col++){
                arr[col]=board[row][col];//to make the upward column into row and then swipe them to the right
            }
        swipe_right(arr);
        for(int col=0;col<4;col++){
               board[row][col]=arr[col];
            }
        }
            move_end();
    }
    void printboard(){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(board[i][j]){
                    cout<<board[i][j]<<"\t";
                }
                else{
                    cout<<".\t";
                }
            }
            cout<<"\n";
        }
    }
    bool move_end(){
    if(has_game_ended()){
                return true;
            }
            else{
                random_populate(); //It is under the  struct function so dot is not needed;
                return false;
            }
    }
};
int main(){
    srand(time(0)); //to call new number every time
    Game2048 mygame;
    mygame.init();
     while(1){
        mygame.printboard();
        if(mygame.has_won()){
            cout<<"Kudos you have won the game!\n";
            return 0;
        }
        cout<<"Which move?(L,D,R,U)";
        char ch;
        cin>>ch;
        int ended;
        if(ch=='U'){
            ended=mygame.up();
        }
        else if(ch=='D'){
            ended=mygame.down();
        }
        else if(ch=='L'){
            ended=mygame.left();
        }
        else if(ch=='R'){
            ended=mygame.right();
        }
        else{
            cout<<"Invalid\n";
            continue;
        }
        if(ended){
            mygame.printboard();
            cout<<"The game has ended\n";
            return 0;
        }
     }
    return 0;
}
