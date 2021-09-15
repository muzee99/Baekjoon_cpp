#include <iostream>
#include <algorithm>

using namespace std;
int N;
int arr[10000];

// recursive function
int search(int left, int right, int num) {
    if(left>right) return -1;
    int mid = (left+right)/2;
    if(arr[mid] > num) search(left, mid, num);
    else if(arr[mid] < num) search(mid+1, right, num);
    else return mid;
}

int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    // array ascending sorting
    sort(arr,arr+N);

    int num = 1;                // target number

    // binary search with loop
    int right=N-1, left=0;      
    while(left<=right) {
        int mid = (right+left)/2;
        if(arr[mid] > num) {
            right = mid;
        }
        else if(arr[mid] < num) {
            left = mid+1;
        }
        else {
            cout << arr[mid] << " " << mid;
            break;
        }
    }
    // recursive function result
    cout << search(0,N-1,6);
}