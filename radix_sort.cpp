#include "radix_sort.h"

void radix_sort::copy_data (int arr[], vector <int> freq[10]) {
	int ind = 0;
	for (int d = 0; d < 10; d ++) {
		for (int i = 0; i < freq[d].size(); i ++, ind ++) {
			arr[ind] = freq[d][i];
		}
	}
}

void radix_sort::clear_old_info (vector <int> freq[10]) {
	for (int i = 0; i < 10; i ++) {
		freq[i].clear ();
	}
}

radix_sort::radix_sort (int arr[], int len) {
	int *temp_arr = new int[len];
	for (int i = 0; i < len; i ++) {
		temp_arr[i] = arr[i];
	}
	vector <int> freq[10];
	for (int cur_pow = 1; freq[0].size() != len; cur_pow*=10) {
		clear_old_info (freq);
		for (int i = 0; i < len ; i++) {
			freq[(arr[i]/cur_pow)%10].push_back (arr[i]);
		}
		copy_data (arr, freq);
	}
	
	swap (data, temp_arr);
	data = temp_arr;
}

radix_sort::~radix_sort () {
	delete[] data;
}
