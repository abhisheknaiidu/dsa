class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = arr[n-1];
        unordered_set <int> hash;
        // for(int i=0; i<n; i++) {
        //     hash.insert(arr[i]);
        // }
       // unordered_set<int> :: iterator itr; 
       // for (itr = hash.begin(); itr != hash.end(); itr++) 
       //  cout << (*itr) << endl;
        vector <int> v;
        vector <int> v1;


        for(int i=1; i<=1000000 ; i++) {
            if(i<=n) {
               hash.insert(arr[i-1]);   
            }
            if(hash.find(i) == hash.end()) {
                   v.push_back(i);
            }
            if(hash.find(i) != hash.end()) {
                v1.push_back(i);
            }
            
        }

        cout << v1.size();
        int ans;
        if(k > v.size()) {
            ans = v1[k-1];
        }
        else  {
           ans = v[k-1];
        }
        return ans;
    }
};