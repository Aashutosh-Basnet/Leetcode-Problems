#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;          // Initialize largest as root
    int left = 2 * i + 1;     // Left child index
    int right = 2 * i + 2;    // Right child index

    // Check if left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check if right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap root with largest
        heapify(arr, n, largest);  // Recursively heapify the affected subtree
    }
}

// Function to perform Heap Sort
void heapSort(int arr[], int n) {
    // Build a max-heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);   // Move current root to end
        heapify(arr, i, 0);     // Call heapify on the reduced heap
    }
}
int main(){
    
    int n = 10;
    int arr[n] = {2, 1, 3, 5, 4, 6, 10, 7, 8, 9};

    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    heapSort(arr, n);

    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }




    return 0;
}