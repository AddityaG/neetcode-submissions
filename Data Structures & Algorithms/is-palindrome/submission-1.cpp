class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==1) return true;

        int i=0;
        int j=s.length()-1;

        while(i<=j && i<s.length() && j>0){
            if(!isalnum(s[i]) || s[i]==' '){
                i++;
                continue;
            }
            if(!isalnum(s[j]) || s[j]==' ') {
                j--;
                continue;
            }
            if (tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++; j--;
        }
        return true;
    }
};
