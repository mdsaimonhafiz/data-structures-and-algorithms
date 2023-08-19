C++ Program for QuickSort
Similar to the Merge Sort algorithm, the Quick Sort algorithm is a Divide and Conquer algorithm. It initially selects an element as a pivot element and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

    Always pick the first element as a pivot (implemented below).
    Always pick the last element as the pivot.
    Pick a random element as a pivot.
    Pick median as a pivot.

The key process in quickSort is the partition() process. The aim of the partition() function is to receive an array and an element x of the array as a pivot, put x at its correct position in a sorted array and then put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time i.e.  Big O(n) .
Pseudo Code for recursive QuickSort function : 

/* low  --> Starting index,  high  --> Ending index */
quickSort(arr[], low, high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

Method-1 : 
`
// C++ Implementation of the Quick Sort Algorithm.
#include <iostream>
using namespace std;
 
int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}
 
int main()
{
 
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;
 
    quickSort(arr, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}
`
Output

1 2 3 4 8 9 

Method-2 :

This method’s space complexity is O(n). As we will take an extra array in partition function like in merge function of merge sort. 
Algorithm explanation and steps of partition function: 

    Make a new array of size equal to given array.
    push all the smaller elements than pivotElement to the new array.
    Push pivotElement to new array now.
    finally, push all the greater elements than pivotElement to the new array.
    Now, copy the new array to the original array.
    Store the index of the pivotElement from the original array. Return this index.

After this, all the elements in the original array are in the order : smaller than pivotElement -> pivotElement -> greater than pivotElement.

Time Complexity : θ(nlogn).

Space Complexity : O(n).

// added by Manish Sharma
` 
#include <iostream>
using namespace std;
 
int partition(int* arr, int start, int end)
{  
      // assuming last element as pivotElement
    int index = 0, pivotElement = arr[end], pivotIndex;
    int* temp = new int[end - start + 1]; // making an array whose size is equal to current partition range...
    for (int i = start; i <= end; i++) // pushing all the elements in temp which are smaller than pivotElement
    {
        if(arr[i] < pivotElement)
        {
            temp[index] = arr[i];
            index++;
        }
    }
 
    temp[index] = pivotElement; // pushing pivotElement in temp
    index++;
 
    for (int i = start; i < end; i++) // pushing all the elements in temp which are greater than pivotElement
    {
        if(arr[i] > pivotElement)
        {
            temp[index] = arr[i];
            index++;
        }
    }
  // all the elements now in temp array are order :
  // leftmost elements are lesser than pivotElement and rightmost elements are greater than pivotElement
               
     
     
    index = 0;
    for (int i = start; i <= end; i++) // copying all the elements to original array i.e arr
    {  
        if(arr[i] == pivotElement)
        {
              // for getting pivot index in the original array.
              // we need the pivotIndex value in the original and not in the temp array
            pivotIndex = i;
        }
        arr[i] = temp[index];
        index++;
    }
    return pivotIndex; // returning pivotIndex
}
 
void quickSort(int* arr, int start, int end)
{ 
    if(start < end)
    {  
        int partitionIndex = partition(arr, start, end); // for getting partition
        quickSort(arr, start, partitionIndex - 1); // sorting left side array
        quickSort(arr, partitionIndex + 1, end); // sorting right side array
    }
    return;
}
 
int main()
{   
    int size = 9;
    int arr[size] = {5, 12, 7, 1, 13, 2 ,23, 11, 18};
       
      cout << "Unsorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");
 
    quickSort(arr, 0, size - 1);
     
      cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " ";
    }
   
      return 0;
}
`
Output

Unsorted array : 5 12 7 1 13 2 23 11 18 
Sorted array : 1 2 5 7 11 12 13 18 23 