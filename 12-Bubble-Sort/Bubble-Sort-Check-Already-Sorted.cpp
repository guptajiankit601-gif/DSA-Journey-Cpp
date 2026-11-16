#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    bool sorted = true;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            sorted = false;
            break;
        }
    }

    if(sorted){
        cout<<"Already Sorted";
    }else{
        cout<<"Not Sorted";
    }
    return 0;
}
