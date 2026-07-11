class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        int needed;
        vector<int> result;


        for(int i=0;i<nums.size();i++){
            needed=target-nums[i];
            if(um.find(needed)==um.end()){
                um.insert({nums[i],i});
            }
            else{
                if(um[needed]>i){
                    result.push_back(i);
                    result.push_back(um[needed]);
                }
                else{
                    result.push_back(um[needed]);
                    result.push_back(i);
                }
            }
        }
        return result;
        
    }
};
