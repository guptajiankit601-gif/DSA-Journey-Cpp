#include <iostream>
using namespace std;

int search(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(arr[start] <= arr[mid]){

            if(target >= arr[start] && target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        else{

            if(target > arr[mid] && target <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {

    int arr[] ={4, 5, 6, 7, 0, 1, 2};
    int size = 7;
    int target = 0;

    int ans = search(arr, size, target);

    if(ans != -1){
        cout<<"Element found at index: "<<ans;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}
