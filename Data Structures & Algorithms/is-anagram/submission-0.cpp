class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> um;

        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0;i<s.size();i++){
            if(um.find(s[i])==um.end()){
                um.insert({s[i],1});
            }
            else{
                um[s[i]]++;
            }
        }

        for(int i=0;i<t.size();i++){
            if(um.find(t[i])!=um.end()){
                um[t[i]]--;
            }
            else{
                return false;
            }
        }

        for(auto it=um.begin();it!=um.end();it++){
            if(it->second!=0){
                return false;
            }
        }

        return true;
    }
};
