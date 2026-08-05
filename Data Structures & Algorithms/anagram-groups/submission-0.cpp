class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()<2)return {strs};
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string abc=strs[i];
            sort(abc.begin(),abc.end());
            mp[abc].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto& i:mp){
            ans.push_back(i.second);
        }
        return ans;


        
    }
};
