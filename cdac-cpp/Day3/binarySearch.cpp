#include <iostream>
#define max 10
using namespace std;

int binary(int arr[], int num);

int main(){
    int arr[max] = {1,2,4,5,6,7,8,9,10,12};
    int index = binary(arr, 66);
    cout << index;

    return 0;
}

int binary(int arr[], int num){
    int left = 0;
    int right = max-1;

    while(left<right){
        int mid = (left+right)/2;
        if(num>arr[mid]){
            left = mid+1;
        }
        else if(num<arr[mid]){
            right = mid-1;
        }
        else{
            if(arr[mid] == num){
                return mid;
            }
            else{
                return -1;
            }

        }
    }
    return -1;
}