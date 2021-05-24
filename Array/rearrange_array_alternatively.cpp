Question link - https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int mxe = n-1,mie = 0,mx = arr[n-1]+2;
    	
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0)
    	    {
    	        arr[i]+=(arr[mxe]%mx)*mx;
    	        mxe--;
    	    }
    	    else
    	    {
    	        arr[i]+=(arr[mie]%mx)*mx;
    	        mie++;
    	    }
    	}
    	for(int i=0;i<n;i++)arr[i]/=mx;
    	 
    }
};