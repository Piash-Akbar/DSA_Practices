#include <iostream>
using namespace std;

int uniquevalues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << endl;
        }
    }
    return 0;
}

int main() {
    // Initialize array
    int nums[] = {5, 7, -9, 7, 20, -9};
    int size = sizeof(nums) / sizeof(int);
    uniquevalues(nums, size);

    return 0;
}
