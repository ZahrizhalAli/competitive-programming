#include<vector>
#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;


// has to be sorted
int binarySearch(int * arr, int n, int key){
	int start = 0;
	int end = n - 1;
	while(start <= end){	
		int mid = (start + end) / 2;
		if(key == arr[mid]){
			return key;
		}else if(key > arr[mid]){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	return -1;
}


int linearSearch(int *arr, int n, int key){
	for(int i = 0 ; i < n ;i++){
		if (arr[i] == key){
			return key;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int brr[] = {1,2,3,4,5,6,7,8,9,10};
	
	if (arr == brr){
		printf("Yes");
	}else{
		printf("No");
	}
	

	
}
