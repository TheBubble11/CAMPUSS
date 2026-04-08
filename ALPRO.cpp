// A. ABYAN FATHIN ASYAM
// 13020250147

#include <iostream>
#include <ctime>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (arr[i] == key) {
            cout << "Perbandingan Linear: " << count << endl;
            return i;
        }
    }
    cout << "Perbandingan Linear: " << count << endl;
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, count = 0;
    while (low <= high) {
        count++;
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Perbandingan Binary: " << count << endl;
            return mid;
        } else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }      
    cout << "Perbandingan Binary: " << count << endl;
    return -1;
}

int main() {
    const int N = 100000;
    int data[N];
    for (int i = 0; i < N; i++) data[i] = i + 1;
    int key = N;
    clock_t start, end;
    start = clock();
    linearSearch(data, N, key);
    end = clock();
    cout << "Waktu Linear Search: " << double(end - start) /
    CLOCKS_PER_SEC << " detik" << endl;
    start = clock();
    binarySearch(data, N, key);
    end = clock();
    cout << "Waktu Binary Search: " << double(end - start) /
    CLOCKS_PER_SEC << " detik" << endl;
}

