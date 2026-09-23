class Solution {
public:
    bool isAnagram(string s, string t) {
    //    sort(s.begin(),s.end());
    //    sort(t.begin(),t.end());
    //    if(s==t)return true;
    //    return false;
    vector<int>freqs(26,0);
    vector<int>freqt(26,0);
    for(int i=0;i<s.size();i++){
        int a = s[i]-'a';
        freqs[a]++;
    }
    for(int i=0;i<t.size();i++){
        int a = t[i]-'a';
        freqt[a]++;
    }
    for(int i=0;i<26;i++){
        if(freqs[i]!=freqt[i]){
            return false;
        }
    }
    return true;
    }
};
