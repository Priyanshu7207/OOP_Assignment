// Write a C++ program to find the second largest element in an array of integers.

#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "The Entered Array should have at least 2 elements." << endl;
        return INT_MIN;
    }
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int size;

    cout << "Give the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Give the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != INT_MIN) {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}