#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr, int target, int st, int end){
    if (st <= end){
        int mid = st + (end - st) / 2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            return bs(arr, target, mid + 1, end);
        }
        else{
            return bs(arr, target, st, mid - 1);
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;

    cout << bs(arr, target, 0, arr.size() - 1);
    return 0;
}