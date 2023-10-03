class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int left = 0, right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is a peak
        if (arr[mid] > arr[mid + 1]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    // 'left' now points to a peak element
    return left;
    }
};
