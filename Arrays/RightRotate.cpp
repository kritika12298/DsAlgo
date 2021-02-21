#include<iostream>
using namespace std;
void RRotate(int *arr, int n)
{
	int temp=arr[n-1];
	for(int i=n-1;i>0;i--)
	arr[i]=arr[i-1];
	arr[0]=temp;
}
void RightRotate(int *arr, int n, int d)
{
	for(int i=0;i<d;i++)
		RRotate(arr, n);
}
int main()
{
	int n, i, a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	int d;
	cin>>d;
	RightRotate(a, n, d);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}