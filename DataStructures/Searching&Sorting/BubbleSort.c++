#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void BubbleSort(int arr[], int n){

    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if ( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){

    int n = 10;

    int arr[n] = {2, 1, 3, 4, 5, 6, 10, 9, 7, 8};

    for ( int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";

    cout << endl;

    BubbleSort(arr, n);

    for(int i = 0 ; i < n ; i++ )
        cout << arr[i] << " ";

    cout << endl;


    return 0;
};