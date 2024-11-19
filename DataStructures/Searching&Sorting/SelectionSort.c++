#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int n){

    for (int i = 0 ; i < n-1 ; i++){
        int minimum = i;
        for ( int j = i+1 ; j < n ; j++){
        if (arr[j] < minimum){
            minimum = j;
        }
        }
        swap(arr[i], arr[minimum]);
    }
}

int main(){

    int n = 10;

    int arr[n] = {2, 1, 3, 4, 5, 6, 10, 9, 7, 8};

    for ( int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";

    cout << endl;

    SelectionSort(arr, n);

    for(int i = 0 ; i < n ; i++ )
        cout << arr[i] << " ";

    cout << endl;


    return 0;
};