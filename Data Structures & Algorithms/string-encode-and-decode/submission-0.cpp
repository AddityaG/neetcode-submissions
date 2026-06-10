class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs.size();i++){
            ans = ans + "#" + to_string(strs[i].length()) + "#" +strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.length()){
            if(s[i]=='#'){
                string size="";
                int j=i+1;
                while(j<s.length() && s[j]!='#'){
                    size+=s[j];
                    j++;
                }
                int stringSize = stoi(size);
                string curr = "";
                for(int k = j+1; k<j+1+stringSize; k++){
                    curr+=s[k];
                }
                ans.push_back(curr);
                i+=2+size.length()+stringSize;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
