question link https://leetcode.com/problems/rotate-array/

Method - 1 Using other array

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=3,n=7;
	int arr[] = {1,2,3,4,5,6,7};
	int val[n];
	
	for(int i=0;i<n;i++)
	{
		if(n-1-i>=(n-k))
		{
			val[k-1-i]=arr[n-1-i];	
		}
		else
		{
			val[i]=arr[i-k];
		}
		
	}
	for(auto k : val)
	{
		cout<<k<<" ";
	}
}


 Method-2  Shift element one by one


#include<bits/stdc++.h>
using namespace std;
void rot(int arr[],int n)
{
	int temp = arr[n-1];
	for(int i=n-1;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int n=7,k=3;
	
	for(int i=0;i<k;i++)
	{
		rot(arr,n);
	}
	
	for(auto i:arr)
	{
		cout<<i<<" ";
	}
}

 Method 3 By reversing 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int n=7,k=3;
	
	reverse(arr,arr+n);
	reverse(arr,arr+k);
	reverse(arr+k,arr+n);
	
	for(auto i : arr)
	{
		cout<<i<<" ";
	}
}


 Method-4 Moving each element by k

#include<bits/stdc++.h>
using namespace std;
void rot(int arr[],int n,int k)
{
	int temp[n] ;
	for(int i=0;i<n;i++)temp[i]=arr[i];
	for(int i=0;i<n;i++)
	{
		arr[(i+k)%n]=temp[i];
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	rot(arr,7,3);// n=7,k=3
	
	for(auto i:arr)
	{
		cout<<i<<" ";
	}
}


 Method-5 Juggling Algorithm

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int d = 4,n = 10;
	
	int g_c_d = gcd(n,d);
	
	for(int i=n-1;i>n-g_c_d-1;i--)
	{
		int j = i;
		int temp = arr[i];
		
		while(1)
		{
			int k = (j-d)>=0?(j-d):(n+j-d);
			
			if(k==i)
			break;
			
			arr[j] = arr[k];
			j = k;
		}
		arr[j]=temp;
	}
	
	for(auto i : arr)
	{
		cout<<i<<" ";
	}
}



