class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            auto it=um.find(nums[i]);
            if(it==um.end()){
                um[nums[i]]=1;
            }
            else{
                um[nums[i]]+=1;
            }
        }

        vector<pair<int,int>> v;
        for(auto it=um.begin();it!=um.end();it++){
            v.push_back({it->second,it->first});
        }

        sort(v.begin(),v.end(),greater<>());
        for(int i=0;i<k;i++){
            result.push_back(v[i].second);
        }
        return result;


    // return {};
    }
};
