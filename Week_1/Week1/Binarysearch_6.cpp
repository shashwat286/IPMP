int valueEqualToIndex(int arr[], int n) {
	      int l=0;
	      int r=n-1;
	      while(l<=r)
	      {
	          int mid=(r+l)/2;
	          if(arr[mid]==mid)
	          return mid;
	          if(arr[mid]>mid)
	           r=mid-1;
	           if(arr[mid]<mid)
	           l=mid+1;
	      }
	      return -1;
	}
