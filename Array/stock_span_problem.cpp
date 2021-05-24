class Solution
{
question - https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1/?category[]=Arrays&category[]=Arrays&difficulty[]=1&page=1&query=category[]Arraysdifficulty[]1page1category[]Arrays   

 public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>st;
       st.push(0);
       vector<int>v;
       v.push_back(1);
       
       for(int i=1;i<n;i++)
       {
           while(!st.empty()&&price[i]>=price[st.top()])
           {
               st.pop();
           }
           st.empty()?v.push_back(i+1):v.push_back(i-st.top());
           st.push(i);
       }
       
       return v;
    }
};