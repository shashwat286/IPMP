int findMaximum(int arr[],int n)
{
    int l=0;
	int r=n-1;
	if (l == r)
		return arr[l];
	if ((r == l + 1) && arr[l] >= arr[r])
		return arr[l];
	if ((r == l + 1) && arr[l] < arr[r])
		return arr[r];
	while(l<=r)
	{
	  int mid=(l+r)/2;
	  if(arr[mid]>=arr[mid-1]&&arr[mid]>=arr[mid+1])
	      return arr[mid];
		 if(arr[mid]>=arr[mid-1]&&arr[mid]<=arr[mid+1]
		   l=mid+1;
		   if(arr[mid]<=arr[mid-1]&&arr[mid]>=arr[mid+1])
		   r=mid-1;
	}
	   return 0;
	}   
     		   