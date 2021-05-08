int closestToZero(int arr[], int n)
        {
               sort(arr,arr+n);
               int l=0;
              int r=n-1;
              int x=0;
              int y=n-1;
              int min=INT_MAX;
              while(l<r)
              {
                  int sum=arr[l]+arr[r];
                  if(abs(min)>abs(sum))
                  {
                      
                    min=sum;
                      x=l;
                      y=r;
                  }
                  if(abs(min)==abs(sum))
                  {
                      if(sum>0&&min<0)
                      {
                          min=sum;
                          x=l;
                          y=r;
                      }
                  }
                  if(sum<0)
                  {
                      l++;
                  }
                  else
                  r--;
              }
              return(min);
        }