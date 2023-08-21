  #include <bits/stdc++.h>
  using namespace std;
  
  void heap(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heap(arr, n, largest);
    }
  }
  
  // main function to do heap sort
  void heapSort(int arr[], int n) {
 
    for (int i = n / 2 - 1; i >= 0; i--)
      heap(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
  
      // Heapifying root element
      heap(arr, i, 0);
    }
  }
  
  void printData(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }
  
  // main function
  int main() {
    int arr[6] = {1, 12, 9, 5, 6, 10};
    heapSort(arr, 6);
  
    cout << "Result is \n";
    printData(arr, 6);
  }
