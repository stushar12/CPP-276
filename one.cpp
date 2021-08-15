int check(vector<int> arr, int n)
{
int low=0,high=n-1,mid=0;

   if(n==1)
   return arr[0];

   if(arr[low]!=arr[low+1])                 //corner case
   return arr[0];

   if(arr[high]!=arr[high-1])              //corner case
   return arr[n-1];

   while(low<=high)
   {
         mid=low+(high-low)/2;
         if(low==high)
         {
            return arr[mid];

         }
       if(arr[mid]!=arr[mid-1] and  arr[mid]!=arr[mid+1])
       {
           return arr[mid];
       }
       if(mid%2==0)
       {
           if(arr[mid]==arr[mid-1])
           {
               high=mid-1;
           }
           else if(arr[mid]==arr[mid+1])
           {
               low=mid+1;
           }
       }
       else
       {
           if(arr[mid]==arr[mid-1])
           {
               low=mid+1;
           }
           else if(arr[mid]==arr[mid+1])
           {
               high=mid-1;
           }
   }
   }
    
   return arr[mid];
}

    int singleNonDuplicate(vector<int>& arr) 
    {
        int n=arr.size();
        
        return check(arr,n);
        
    }
