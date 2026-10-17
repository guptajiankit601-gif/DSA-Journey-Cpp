#include<iostream>
using namespace std;
int main(){


// #Pattern:-
            // - - - 1
            // - - 1 2 1
            // - 1 2 3 2 1 
            // 1 2 3 4 3 2 1

            // - denotes spaces

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int row = 1;

    // while(row <= n){

    //     int spaces = n - row;
    //     while(spaces){
    //         cout<<" ";
    //         spaces--;
    //     }
    //     int col = 1;
    //     while(col <= row){
    //         cout<<col;
    //         col++;
    //     }

    //     int start = row - 1;
    //     while(start){
    //         cout<<start;
    //         start--;
    //     }
    //     cout<<endl;
    //     row++;
    // }



// #Pattern:-
            // 1 2 3 4 5 5 4 3 2 1
            // 1 2 3 4 * * 4 3 2 1
            // 1 2 3 * * * * 3 2 1
            // 1 2 * * * * * * 2 1
            // 1 * * * * * * * * 1
            
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int i = 1;

    // while(i <= n){
    //     int col = 1;
    //     while(col <= n - i + 1){
    //         cout<<col<<" ";
    //         col++;
    //     }

    //     int k = 1;
    //     while(k <= 2 * (i - 1)){
    //         cout<<"* ";
    //         k++;
    //     }

    //     int l = 5 - i + 1;
    //     while(l >= 1){
    //         cout<<l<<" ";
    //         l--;
    //     }
    //     cout<<endl;
    //     i++;
    
    return 0;
}
