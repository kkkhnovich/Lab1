#include "Solution.h"
#include <algorithm>
int Class::minStartValue(vector<int>& nums)
{
	int minStartValue = -100;
trythis:
	int result = minStartValue;
	for (int x : nums) {
		result += x;
		if (result < 1) {
			minStartValue++;
			goto trythis;
		}
	}

	/*auto minStartValue = min_element(nums.begin(),nums.end());*/

	return minStartValue;
}
