#include <iostream>
using namespace std;

int recursiveCalls = 0;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        recursiveCalls++;
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    cout << "Array Awal: ";
    printArray(data, n);
    quickSort(data, 0, n - 1);

    cout << "Array Setelah Diurutkan: ";
    printArray(data, n);
    cout << "Jumlah total pemanggilan rekursif: " << recursiveCalls << endl;

    return 0;
}
