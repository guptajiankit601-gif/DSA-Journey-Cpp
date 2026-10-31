#include<iostream>
using namespace std;

void findIntersection(int arr1[],int size1,int arr2[],int size2){
    cout<<"Common Elenment: ";
    
    for(int i = 0; i<size1; i++){
        bool alreadyPrinted = false;

        for(int k = 0; k<i; k++){
            if(arr1[i] == arr1[k]){
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted == true){
            continue;
        }

        for(int j = 0; j<size2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr1[] = {1,3,5,7,8};
    int arr2[] = {2,3,5,6,7,9};

    int size1 = 5;
    int size2 = 5;

    findIntersection(arr1,size1,arr2,size2);

    return 0;
}
