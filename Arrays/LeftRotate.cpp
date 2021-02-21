#include<iostream>
using namespace std;
void Left(int *arr, int n)
{
	int temp=arr[0];
	for(int i=0;i<n-1;i++)
	{
	   arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
void LeftRotate(int *arr, int n, int d)
{
	for(int i=0;i<d;i++)
	Left(arr, n);
}
int main()
{
	int n, i, a[1000], d;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>d;
	LeftRotate(a, n, d);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}