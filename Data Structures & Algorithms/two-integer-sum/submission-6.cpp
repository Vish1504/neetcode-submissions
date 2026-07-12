class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int needed;
        unordered_map<int,int> um;
        
        for(int i=0;i<nums.size();i++){
            needed=target-nums[i];
            if(um.find(needed)==um.end()){
                um[nums[i]]=i;
            }
            else{
                return{um[needed],i};
            }
        }
        return{};
    }
};
