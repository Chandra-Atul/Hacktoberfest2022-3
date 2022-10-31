#include<iostream>
using namespace std;
void sort(int arr[], int pos, int n){
	if(n==1){
		return;
	}
	int max = 0;
	for(int i=0;i<n;i++){
		if(arr[i] > arr[max]){
			max = i;
		}
	}
	
	
	
//	cout<<"maximum value inside function is: "<<endl;
//	cout<<arr[max]<<endl;
	
	swap(arr[pos],arr[max]);
//	pos++;
//	n--;
	sort(arr,++pos,--n);
}
int main(){
	int arr[5] = {2,5,1,6,9};
	sort(arr,0,5);
	
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
