#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j <= nums.size()-1; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }

};


int main()
{
    Solution s;
    
    vector<int> nums = { 2, 7, 12, 15 };
    int target = 9;

    cout << s.twoSum(nums, target) << endl;

    return 0;

}
