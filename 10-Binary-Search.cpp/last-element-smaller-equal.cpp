#include<iostream>
using namespace std;

int findLastSmallerEqual(int arr[], int size, int target){
    int s = 0;
    int end  = size - 1;
    int mid = s + (end - s)/2;
    int ans = -1;

    while(s <= end){
        if(arr[mid] <= target){
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
    int arr[] ={1, 2, 3, 5, 6, 8, 10, 12};
    int size = 8;
    int target = 8;

    int result = findLastSmallerEqual(arr, size, target);

    cout<<"Last Smaller or Equal Index: "<<result<<endl;

    if(result != -1){
        cout<<"Element: "<<arr[result]<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }

    return 0;
}
