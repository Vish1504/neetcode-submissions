class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> us;

        for(int i=0;i<nums.size();i++){
            if(us.find(nums[i])==us.end()){
                us.insert(nums[i]);
            }
            else{
                return true;
            }
        }
        return false;
    }
};