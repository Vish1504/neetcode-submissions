class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        int needed;
        


        for(int i=0;i<nums.size();i++){
            needed=target-nums[i];
            if(um.find(needed)==um.end()){
                um.insert({nums[i],i});
            }
            else{
                if(um[needed]>i){
                    
                    return{i,um[needed]};
                }
                else{
                    
                    return{um[needed],i};
                }
            }
        }
        
        
    }
};
