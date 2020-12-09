bool cmp(struct Job a, struct Job b) {
    // if(a.dead == b.dead) return a.profit > b.profit;
    return a.profit > b.profit;
}

pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    // your code here
    sort(arr, arr+n, cmp);
    for(int i=0; i<n; i++) {
        cout << arr[i].id << " " << arr[i].dead << " " << arr[i].profit << endl;
    }
    int maxProfit = 0;
    bool slots[n];
    int jCount = 0;
    for(int i=0; i<n; i++) {
        slots[i] = false;
    }
    for(int i=0; i<n; i++) {
        for(int j=min(n, arr[i].dead) - 1; j>0; i++) {
            if(!slots[j]) {
                maxProfit += arr[i].profit;
                slots[j] = true;
                jCount++;
            }
        }
    }
    pair <int, int> ans = make_pair(jCount, maxProfit);
    return ans; 
} 