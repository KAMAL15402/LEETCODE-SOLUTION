class Solution {
    public long kthSmallestProduct(int[] nums1, int[] nums2, long k) {
        return kthproduct(nums1,nums2,k);
    }
    public static long kthproduct(int ar1[],int ar2[],long k)
    {
        long si=-1000_000_0000l;
        long ei=1000_000_0000l;
        long ans=0;
        while(si<=ei)
        {
            long mid=(si+ei)/2;
            if(countofproduct(ar1,ar2,mid)>=k)
            {
                ans=mid;
                ei=mid-1;
            }
            else{
                si=mid+1;
            }
        }
        return ans;
    }
    public static long countofproduct(int ar1[],int ar2[],long pro)
    {
        long ans=0;
        for(int e1:ar1)
        {
            if(e1>=0)
            {
                long cnt=0;
                int lo=0;
                int hi=ar2.length-1;
                while(lo<=hi)
                {
                    int mid=(lo+hi)/2;
                    if((long)(e1)*ar2[mid]<=pro)
                    {
                        cnt=mid+1;
                        lo=mid+1;
                    }
                    else
                    {
                        hi=mid-1;
                    }
                }
                ans +=cnt;
            }
            else
            {
                long cnt=0;
                int lo=0;
                int hi=ar2.length-1;
                while(lo<=hi)
                {
                    int mid=(lo+hi)/2;
                    if((long)(e1)*ar2[mid]<=pro)
                    {
                        cnt=ar2.length-mid;
                        hi=mid-1;
                    }
                    else
                    {
                        lo=mid+1;
                    }
                }
                ans +=cnt;
            }
        }
        return ans;
    }
}