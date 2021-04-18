int indexOfFirstOne(int arr[], int l, int r)
{
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
  if (arr[mid] == 1 && 
            (mid == 0 || arr[mid - 1] == 0))
            break;
        else if (arr[mid] == 1)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return mid;
}
  

int posOfFirstOne(int arr[])
{
   
    int l = 0, r = 1;
    while (arr[r] == 0) {
  
        // lower bound
        l = r;
  
        // upper bound
        r = 2 * r;
    }
    return indexOfFirstOne(arr, l, r);
}