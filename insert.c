/ C++ program to demonstrate insertion sort algorithm
#include 
using namespace std;
 
// Function to sort an array using insertion sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // Storing the current element

        /* We will compare the current element with each element
        on its left until an element smaller than or equal to it
        is found or we reach the beginning of the array */
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        /* Then we insert the current element at the correct
        position in the sorted subarray arr[0...i] */
        arr[j + 1] = key;
    }
}
 
// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << '\n';
}

// Main Function 
int main() {
    int arr[] = {5, 3, 4, 1, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting :\n";
    printArray(arr, size);
 
    insertionSort(arr, size);

    cout << "Array after sorting :\n";
    printArray(arr, size);
 
    return 0;
    }
