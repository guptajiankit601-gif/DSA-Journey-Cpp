#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int target = 9;

    for(int i = 0; i<4; i++){
         for(int j = i+1; j<4; j++){
            for(int k = j+1; j<4; j++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout<<"Pair is: "<<arr[i]<<" "
                                    <<arr[j]<<" "
                                    <<arr[k]<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Triplet not found";
    return 0;
}
