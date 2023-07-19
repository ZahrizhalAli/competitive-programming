#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int * arr, int n){
	
	for(int i = 1 ; i <= n-1;i++){					// 4,5,3,2,1
		int current = arr[i];						// [5] - [3]
		int prev = i - 1;							// 0 -> [4] - 1 -> [5]
		
		while(prev >= 0 and arr[prev] < current){	// No - Yes
			arr[prev + 1] = arr[prev];				//    - [4,3,5,2,1]
			prev = prev - 1;						//    - [4,_,5,2,1]
		}
		
		arr[prev + 1] = current;					// [4,5,3,2,1]
	}
	
	for(int i = 0 ; i < n; i++) cout << arr[i] << " ";
}



int main(){
	int arr[] = {4,5,3,2,1};
	int n =sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, n);
	

}

