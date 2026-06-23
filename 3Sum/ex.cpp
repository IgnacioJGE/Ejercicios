class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> combos;
        vector<vector<int>> sol;
        vector<int> posible;
        if (nums.empty())
            return {};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int r = nums.size() - 1;
            int l = i + 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    vector<int> poss = {nums[i], nums[l], nums[r]};
                    if (combos.count(poss) == 0) {
                        sol.push_back(poss);
                        combos.insert(poss);
                    }
                    r--;
                    l++;
                }
                if (sum > 0) {
                    r--;
                } else if(sum<0) {
                    l++;
                }
            }
        }
        return sol;
    }
};

itero sobre el primer numero y luego voy iterando hasta que los dos punteros se encuentran