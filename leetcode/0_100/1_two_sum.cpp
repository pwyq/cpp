class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2)
            exit(0);
        
        vector<int> res;
        for (std::vector<int>::size_type i = 0; i != nums.size(); i++) {
            for (std::vector<int>::size_type j = i+1; j != nums.size(); j++) {
                int temp = nums[i] + nums[j];
                // cout << "temp=" << temp << endl;
                // cout << "nums[i]=" << nums[i] << endl;
                // cout << "nums[j]=" << nums[j] << endl;
                if (temp == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        exit(0);
    }
};
