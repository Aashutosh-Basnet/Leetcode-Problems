#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InsertionSort(int arr[], int n){

    for (int i = 0 ; i < n ; i++){
        int sorted_till = arr[i];
        int j = i - 1;

        while ( j>= 0 && arr[j] > sorted_till){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = sorted_till;
    }

}

int main(){

    int n = 10;

    int arr[n] = {2, 1, 3, 4, 5, 6, 10, 9, 7, 8};

    for ( int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";

    cout << endl;

    InsertionSort(arr, n);

    for(int i = 0 ; i < n ; i++ )
        cout << arr[i] << " ";

    cout << endl;


    return 0;
};