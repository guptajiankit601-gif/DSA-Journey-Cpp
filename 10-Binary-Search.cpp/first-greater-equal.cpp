#include<iostream>
using namespace std;

int findFirstGreaterEqual(int arr[], int size, int target){
    int s = 0;
    int end  = size - 1;
    int mid = s + (end - s)/2;
    int ans = -1;

    while(s <= end){
        if(arr[mid] < target){
            s = mid + 1;
        }else{
            ans = mid;
            end = mid - 1;
        }
        mid = s + (end - s)/2;
    }
    return ans;
}
int main(){
    int arr[] = {1, 2, 3, 5, 6, 8, 10, 12};
    int size = 8;
    int target = 7;

    int result = findFirstGreaterEqual(arr, size, target);

    cout<<"First Greater or Equal Index: "<<result<<endl;

    if(result != -1){
        cout<<"Element: "<<arr[result]<<endl;
    }
    else{
        cout<<"No Element Found"<<endl;
    }

    return 0;
}
