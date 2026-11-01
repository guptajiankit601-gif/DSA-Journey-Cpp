#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int target){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }else if(target > arr[mid]){
            s = mid + 1;
        }else{
            e  = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int target){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }else if(target > arr[mid]){
            s = mid + 1;
        }else{
            e  = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};
    
    int first = firstOcc(arr,11,3);
    int last = lastOcc(arr,11,3);

    int occurance = (last - first) + 1;

    cout<<"Total number of occurance of 3 is: "<<occurance<<endl;

    
    return 0;
}
