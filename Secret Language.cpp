std::string convert(vector<string> &secret,string word)
{
    int length = word.size();
    string ans = "";
    for(int i=0;i<length;++i)
    {
        int c = word[i] - 'a';
        ans += secret[c];
    }
    return ans;
}
 
 
int compute_distinct_homonyms(vector<string> secret_mapping, vector<string> word_list) {
    std::set<string> mySet;
    for(int i = 0; i < word_list.size(); ++i)
    {
        mySet.insert(convert(secret_mapping,word_list[i]));
    }
 
    return mySet.size();
}
