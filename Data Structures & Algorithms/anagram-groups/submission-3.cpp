class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> um;
        // vector<vector<string>> result;
        

        //calculate frequency
        for(int i=0;i<strs.size();i++){
            string word=strs[i];

            vector<int> freq(26,0);
            for(int letter=0;letter<word.size();letter++){
                freq[word[letter]-'a']++;
            }

            string freqString="";
            for(int j=0;j<freq.size();j++){
                freqString+=to_string(freq[j])+"#";
            }
            um[freqString].push_back(word);
        }
        vector<vector<string>> result;
        for(auto it=um.begin();it!=um.end();it++){
            result.push_back(it->second);
        }

        return result;
        
    }
};
