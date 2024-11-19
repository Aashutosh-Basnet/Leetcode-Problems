#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high){

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low ; j < high ; j++){
        if (arr[j] < pivot ){
        i++;
        swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort(int arr[], int low, int high){

    if (low < high){
        int pi = partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi+1,   high);

    }

}


int main(){

    int n = 10;

    int arr[n] = {2, 1, 3, 4, 5, 6, 10, 9, 7, 8};

    for ( int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";

    cout << endl;

    QuickSort(arr, 0, n-1);

    for(int i = 0 ; i < n ; i++ )
        cout << arr[i] << " ";

    cout << endl;


    return 0;
};