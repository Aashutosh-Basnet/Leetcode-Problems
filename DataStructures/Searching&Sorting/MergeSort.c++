#include <iostream>

using namespace std;

void merge(int arr[], int left, int right, int mid){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for (int i = 0 ; i < n1 ; i++)
        leftArr[i] = arr[left + i];
    
    for (int i = 0 ; i < n2 ; i++ )
        rightArr[i] = arr[mid + i + 1];

    int i = 0 , j = 0, k = left;
    while (i < n1 && j < n2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while ( i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while ( j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        merge(arr, left, right, mid);
    }
}

int main(){

    int n = 10;

    int arr[n] = {2, 1, 3, 4, 5, 6, 10, 9, 7, 8};

    for ( int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";

    cout << endl;

    mergeSort(arr, 0, n-1);

    for(int i = 0 ; i < n ; i++ )
        cout << arr[i] << " ";

    cout << endl;


    return 0;
};