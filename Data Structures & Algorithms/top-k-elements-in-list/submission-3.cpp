class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;

        vector<pair<int,int>> vpair;

        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }

        for(auto it=um.begin();it!=um.end();it++){
            vpair.push_back({it->second,it->first});
        }

        sort(vpair.begin(), vpair.end(),greater<>());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(vpair[i].second);
        }

        

        return result;
    }
};
