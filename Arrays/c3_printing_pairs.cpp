#include<bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int n){
	for(int i = 0 ; i < n;i++){
		for(int j = i + 1; j < n ;j++){
			cout <<"(" << arr[i] << "," << arr[j] << ")" << " "; 
		}
		cout << endl;
	}
}

int main(){
	int arr[] = {10,20,30,40,50, 60};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printPairs(arr, n);

	
}

