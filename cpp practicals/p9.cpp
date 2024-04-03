// Write a c ++ program to find the second smaller elements in a given array of integer.
#include <iostream>
#include <climits>
using namespace std;

int findSecondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int secondSmallest = findSecondSmallest(arr, size);

    if (secondSmallest != INT_MAX) {
        cout << "The second smallest element in the array is: " << secondSmallest << endl;
    } else {
        cout << "There is no second smallest element in the array." << endl;
    }

    return 0;
}
