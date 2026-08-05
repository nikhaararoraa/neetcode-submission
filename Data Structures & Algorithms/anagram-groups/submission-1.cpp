class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string word:strs){
            int freq[26]={0};
            for(char i:word){
                freq[i-'a']++;
            }
            string key="";
            for(int i: freq){
                key+='#';
                key+=to_string(i);

            }
            mp[key].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto& i:mp){
            ans.push_back(i.second);

        }
        return ans;




        
    }
};
