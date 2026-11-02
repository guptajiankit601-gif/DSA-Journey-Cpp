#include<iostream>
using namespace std;

int findLastSmaller(int arr[], int size, int target){
    int s = 0;
    int end  = size - 1;
    int mid = s + (end - s)/2;
    int ans = -1;

    while(s <= end){
        if(arr[mid] < target){
            ans = mid;
            s = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = s + (end - s)/2;
    }
    return ans;
}
int main(){
    int arr[6] = {1,2,4,6,7,8};
    int target = 7;

    int result = findLastSmaller(arr,6,target);
    cout<<"Last Smaller Element Index: "<<result<<endl;

    if(result != -1){
        cout<<"Element: "<<arr[result]<<endl;
    }else{
        cout<<"No smaller element found";
    }

    return 0;
}
