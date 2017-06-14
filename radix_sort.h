#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class radix_sort {
	public:
		radix_sort (int arr[], int len);
		~radix_sort ();
		
	private:
		void copy_data (int arr[], vector <int> freq[10]);
		void clear_old_info (vector <int> freq[10]);
		int *data;
};
