#include<iostream>
using namespace std;

int findfirstGreater(int arr[],int size,int target){
    
    int start = 0, end = size - 1;
    int mid = start + (end-start)/2;
    int ans  = -1;
    
    while(start<=end){
       
        if(arr[mid] <= target){
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
    int arr[] = {1, 2, 3, 5, 6, 8, 10, 12};
    int size = 8;
    int target = 5;

    int ans = findfirstGreater(arr,8,target);
    cout<<"First Positive Index: "<<ans;
    
    return 0;
}
