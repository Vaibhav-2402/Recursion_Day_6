#include<iostream>
using namespace std;

bool Is_sort(int arr[], int size){

    //base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    bool ans = Is_sort(arr+1, size-1);
    return ans;
}

int main() {

    int arr[5] = {1,3, 5, 6, 7};
    bool ans = Is_sort(arr, 5);

    if(ans)
    cout << endl << "Array is sorted !!!";
    else
    cout << endl << "Array is not sorted!!!";
    return 0;
}