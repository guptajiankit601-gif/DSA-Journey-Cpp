#include<iostream>
using namespace std;
void duplicateElement(int arr[],int size){
    bool found = false;
    
    for(int i = 0; i<size; i++){
        for(int j = i + 1; j<size; j++){
            if(arr[i] == arr[j]){
            cout<<"Duplicate element: "<<arr[i]<<endl;
            found = true;
            return;
            }
        }
    }
    if(found == false){
        cout<<"No duplicate element";
    }
}

int main(){
    int arr[5] = {10, 20, 10, 40, 50}; 

    duplicateElement(arr,5);
    
    return 0;
}
