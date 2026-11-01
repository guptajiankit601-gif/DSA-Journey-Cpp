#include<iostream>
using namespace std;

int findfirstPositive(int arr[],int size){
    
    int start = 0, end = size - 1;
    int mid = start + (end-start)/2;
    int ans  = -1;
    while(start<=end){
       
        if(arr[mid] <= 0){
            start = mid + 1;
        }else{
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[] = {-8, -5, -3, -1, 0, 2, 4, 6};
    int size = 8;

    int ans = findfirstPositive(arr,8);
    cout<<"First Positive Index: "<<ans;
    
    return 0;
}
