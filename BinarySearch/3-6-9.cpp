vector<string> solve(int n) {
    vector<string> ans;
    
    for(int i=1; i<=n; i++) {
        string s = to_string(i);
        
        if(i%3 == 0 || s.find("3") != -1 || s.find("6") != -1 || s.find("9") != -1) {
            ans.push_back("clap");
        }
        else {
            ans.push_back(s);
        }
}
    return ans;
}