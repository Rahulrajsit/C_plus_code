/***************************************
        Find Duplicate in given array
*****************************************/
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
class Solution {
public:
	/**
	 * @param A: a list of integers
	 * @return : return an integer
	 */
	bool removeDuplicates(vector<int>& nums) {
		// write your code here
		if (nums.size() == NULL || nums.empty()) {
			return false;
		}
		for (int i = 0; i < nums.size(); i++) {
			int temp = abs(nums[i]);
			if (nums[temp] < 0)
				return true;
			nums[temp] *= -1;
		}
		return false;
	}
};
int main() {
	vector<int> nums{ 1,0,1,1 };

	Solution obj;
	cout << "Is Duplicate:" << obj.removeDuplicates(nums) << endl;
	nums.push_back(10);
	for (auto i = nums.begin(); i < nums.end(); i++) {
		cout << *i << ' ';
	}
}