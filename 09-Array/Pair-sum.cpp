#include<iostream>
using namespace std;

int main(){
    int arr[4] = {2,7,11,15};
    int target = 9;

    for(int i = 0; i<4; i++){
         for(int j = i+1; j<4; j++){
            if(arr[i] + arr[j] == target){
                cout<<"Pair is: "<<arr[i]<<" "<<arr[j];
                return 0;
            }
        }
    }
    cout<<"Pair not found";
    return 0;
}
