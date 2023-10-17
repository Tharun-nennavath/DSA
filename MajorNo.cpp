class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int element = a[0];
        int count = 1;
        for(int i = 1; i < size; i++)
        {
            if(a[i] == element)
            {
                count ++;
            }
            else
            {
              count --;
                if(count == 0)
                {
                    count = 1;
                    element = a[i];
                }
            }
        }
            count = 0;
    for (int i = 0; i < size; ++i) {
        if (a[i] == element) {
            count++;
        }
    }

    if (count > size / 2) {
        return element;
    } else 
    {
        return -1;
    }
    }
};
