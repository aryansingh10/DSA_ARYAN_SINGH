class Solution {
public:
    bool isAnagram(string s, string t) {
        int count1[26]={0};
        int count2[26]={0};
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length()|| i<t.length();i++){
            int index1=s[i]-'a';
            count1[index1]++;
           int index2=t[i]-'a';
           count2[index2]++;
        }
        for(int i=0; i<26;i++){
            if(count1[i]!=count2[i]){
                return false;
            }
        }
        return true;
    }

};