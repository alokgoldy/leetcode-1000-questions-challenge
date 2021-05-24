Question link https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays#

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
    
        for(int i=0;i<n;i++)
        {
            arr[i] = arr[i] + (arr[arr[i]]%n)*n;
        }
        for(int i=0;i<n;i++)
        arr[i]/=n;
    }
};
