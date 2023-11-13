int transitionPoint(int arr[], int n)
    {
        int low = 0;
        int high = n - 1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(arr[mid] == 1 && arr[mid - 1] == 0)
            {
                return mid;
            }
            else if(arr[mid == 0])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return -1;
    }
