#include<bits/stdc++.h>
using namespace std;


int main(){

	int arr[] = {4,2,5,3,6,1,9};
	int n = sizeof(arr) / sizeof(int);
	
	for(int i = 1 ; i<=n-1;i++){
		for(int j = 0 ; j <= n-i-1;j++){
			if(arr[j] < arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < n;i++)cout << arr[i] << " ";

}

