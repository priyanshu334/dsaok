#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int n, int k) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {
            return mid;
        }

        if (arr[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    // Element not found
    return -1;
}

void printarr(vector<int> arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = binarysearch(arr, n, 5);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    printarr(arr, n);

    return 0;
}
