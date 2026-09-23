class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
    //    sort(s.begin(),s.end());
    //    sort(t.begin(),t.end());
    //    if(s==t)return true;
    //    return false;
    vector<int>freq(26,0);
    for(int i=0;i<s.size();i++){
        int a = s[i]-'a';
        int b = t[i]-'a';
        freq[a]++;
        freq[b]--;
    }
    
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
    }
};
