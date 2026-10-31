#include <iostream>
using namespace std;
void findFrequency(int arr[],int size){
    for(int i = 0; i<size; i++){
        bool alreadyCounted = false;
        for(int k = 0; k<i; k++){
            if(arr[i] == arr[k]){
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted == false){
            int count = 0;
            for(int j = 0; j<size; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            cout<<arr[i] <<" occurs "<<count<<" times"<<endl;
        }
    }
}
int main() {

    int arr[7] = {1, 2, 2, 3, 1, 4, 2};
    
    findFrequency(arr,7);

    return 0;
}
