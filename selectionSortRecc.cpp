#include<iostream>
using namespace std;
void selectioSort(int arr[], int i,int n){
	//base case
	if(i==n){
		return;
	}
	
	for(int j=i+1;j<n;j++){
		if(arr[j] < arr[i]){
			swap(arr[i],arr[j]);
		}
	}
	
	selectioSort(arr,i+1,n);	
	
}


void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[] = {20,10,6,34,2,0,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selectioSort(arr,0,n);
	
	print(arr,n);
	
	return 0;
}
