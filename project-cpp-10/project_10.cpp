#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], n, choice, key, result;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
    
        cout << "press for 1 Selection Sort" << endl;
       cout << "press for 2  marge Sort" <<  endl;
        cout << "press for 3 Linear Search" << endl;
        cout << "press for 4 Binary Search" << endl;
        cout << "press for 5 Display Array" << endl;
        cout << "press for 6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bubbleSort(arr, n);
                cout << "Array sorted using Bubble Sort." << endl;
                break;

            case 2:
                selectionSort(arr, n);
                cout << "Array sorted using Selection Sort." << endl;
                break;

            case 3:
                cout << "Enter element to search: " << endl;
                cin >> key;
                result = linearSearch(arr, n, key);
                if (result != -1)
                    cout << "Element found at index " << result << endl;
                else
                    cout << "Element not found."<< endl;
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> key;
                result = binarySearch(arr, n, key);
                if (result != -1)
                    cout << "Element found at index " << result << " ";
                else
                    cout << "Element not found." << endl;
                break;

            case 5:
                cout << "Array elements: ";
                displayArray(arr, n);
                break;

            case 6:
                cout << "Exiting program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Try again." << endl;

}
}
}
