#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }

        if(target > arr[mid]){
            start = mid + 1;
        }
        if(target < arr[mid]){
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int even[6] = {10,23,34,45,56,67};
    int odd[5] = {12,23,34,45,45};
    
    int evenIndex = binarySearch(even,6,98);
    cout<<"index of 98 is: "<<evenIndex<<endl;
    
    int oddIndex = binarySearch(odd,5,34);
    cout<<"index of 34 is: "<<oddIndex;

    return 0;
}
