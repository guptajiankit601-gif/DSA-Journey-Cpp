#include<iostream>
using namespace std;

int countNegative(int arr[],int size){
    
    int start = 0, end = size - 1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
       
        if(arr[mid] < 0){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int main(){
    int arr[] = {-8, -5, -3, -1, 0, 2, 4, 6};
    int size = 8;

    cout<<"Total Negative Numbers: "
        <<countNegative(arr,8);
    
    return 0;
}
