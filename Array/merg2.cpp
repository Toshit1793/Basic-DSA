#include<iostream>
using namespace std;

int main() {
    int nums1[] = {1, 6, 7, 10};
    int nums2[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int n = 4;
    int m = 8;
    int result[n + m];

    int i = 0;
    int j = 0;
    int k = 0;

    // Merging the two arrays
    while (i < n && j < m) {
        if (nums1[i] < nums2[j]) {
            result[k] = nums1[i];
            i++;
        } else {
            result[k] = nums2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in nums1
    while (i < n) {
        result[k] = nums1[i];
        i++;
        k++;
    }

    // If there are remaining elements in nums2
    while (j < m) {
        result[k] = nums2[j];
        j++;
        k++;
    }

    // Printing the merged result
    for (int k = 0; k < n + m; k++) {
        cout << result[k] << " ";
    }

    return 0;
}
