#include<iostream>
using namespace std;
int countOccurance(int arr[],int size,int key){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[6] = {5,2,5,4,5,3};
    int key = 5;

    cout<<"Count is: "<<countOccurance(arr,6,key)<<endl;

    return 0;
}
