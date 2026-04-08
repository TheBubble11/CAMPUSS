// A. Abyan Fathin Asyam
// 13020250147

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <iomanip>  

void merge(std::vector<int>& arr, int l, int m, int r) {
    std::vector<int> temp(r - l + 1);
    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r) {
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];
    for (i = 0; i < k; i++) arr[l + i] = temp[i];
}

void mergeSort(std::vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) std::swap(arr[j], arr[j + 1]);
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx]) min_idx = j;
        std::swap(arr[min_idx], arr[i]);
    }
}

int main() {
    std::srand(0);

    for (int size : {100, 1000, 10000}) {
        std::cout << "\n-------------------------------------------------\n";
        std::cout << "Analisis Performa untuk " << size << " Elemen\n";
        std::cout << "-------------------------------------------------\n";
        // Buat dataset acak
        std::vector<int> original_data(size);
        std::generate(original_data.begin(), original_data.end(), std::rand);
        std::vector<int> arr;
        
        arr = original_data;
        auto start = std::chrono::high_resolution_clock::now();
        bubbleSort(arr);
        auto duration = std::chrono::high_resolution_clock::now() - start;
        std::cout << "Hasil Bubble Sort:    " << std::fixed << std::setprecision(6) 
                  << std::chrono::duration<double>(duration).count() << " detik\n";

        arr = original_data;
        start = std::chrono::high_resolution_clock::now();
        selectionSort(arr);
        duration = std::chrono::high_resolution_clock::now() - start;
        std::cout << "Hasil Selection Sort: " << std::fixed << std::setprecision(6) 
                  << std::chrono::duration<double>(duration).count() << " detik\n";

        arr = original_data;
        start = std::chrono::high_resolution_clock::now();
        mergeSort(arr, 0, arr.size() - 1);
        duration = std::chrono::high_resolution_clock::now() - start;
        std::cout << "Hasil Merge Sort:     " << std::fixed << std::setprecision(6) 
                  << std::chrono::duration<double>(duration).count() << " detik\n";
    }
    
    return 0;
}
