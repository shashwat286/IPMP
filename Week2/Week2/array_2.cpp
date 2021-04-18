 int getOddOccurrence(int arr[], int n) {
        int b=0;
        for(int i=0;i<n;i++)
        {
            b=b^arr[i];
        }
        return b;
    }