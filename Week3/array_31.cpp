void pushZerosToEnd(int arr[], int n) {
	    int a=0;
	    for(int i=0;i<n;i++)
	       if(arr[i]!=0)
	        arr[a++]=arr[i];
	        while(a<n)
	        arr[a++]=0;
	    
	}