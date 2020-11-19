// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
/*  
 *	Given an unsorted array A of size N of non-negative integers, 
 *	find a continuous sub-array which adds to a given number S.
 */

// 	approach one
//	brute force
//  time complexity = O(n^2)
//	space complexity = O(1)

void solve( const vector<int> &arr , const int &sum){
	int n = arr.size();
	for(int i = 0 ; i < n ; i++){
		int temp_sum = 0 ;
		for(int j = i ; j < n ; j++){
			temp_sum += arr[j] ;
			if(temp_sum == sum){
				cout << i + 1 << " " << j + 1  << '\n';
				return ;
				}
		}
	}
	cout << "-1\n";
}

// appraoch two 
// time complexity O(nlog(n))
// space complexity O(n)

void solve(const vector<int> &arr , const int &sum){
	map<int , int> idx;
	int sum_till_now = 0;
	for(int i = 0 ; i < n ; i++){
		idx[sum_till_now] = i ;
		sum_till_now += v[i] ;
		if(mp.find(sum_till_now - sum) != mp.end()){
			cout << mp[sum_till_now - sum] + 1 << " " << i + 1 << '\n';
			return;
		}
	}
	cout << "-1\n";
	return ;	
}

//approach three (only if non negative numbers are there)
// time complexity O(n)
// space complexity O(1)
// two pointers approach 

void solve(const vector<int> &arr , const int &sum){
}

