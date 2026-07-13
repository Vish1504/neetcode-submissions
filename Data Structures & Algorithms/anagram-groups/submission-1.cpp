class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        // getting the frequency of letters in each word
        for (auto it = strs.begin(); it != strs.end(); it++) {
            string word = *it;
            // cout << word << endl;
            vector<int> freq(26, 0);
            for (int i = 0; i < word.size(); i++) {
                freq[word[i] - 'a']++;
            }
            string freqString = "";
            for (int index : freq) {
                freqString += to_string(index) + "#";
            }
            groups[freqString].push_back(word);
        }

        vector<vector<string>> result;
        for (auto it = groups.begin(); it != groups.end(); ++it) {
            cout << it->first << ": ";
            result.push_back(it->second);
            // for (int j = 0; j < it->second.size(); j++) {
                // cout << it->second[j] << "\t";
                
            // }
            // for(int jt=0;jt<groups[it->first].size();jt++)
            // result[it].insert(groups[it->first][jt]);
        }

        return result;
    }
};
