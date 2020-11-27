bool rcmp(struct Item a, struct Item b) {
    double r1 = (double) a.value / (double) a.weight;
    double r2 = (double) b.value / (double) b.weight;
    return r1 > r2;
}

// function to return fractionalweights
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    sort(arr, arr+n, rcmp);
    // for(int i=0; i<n; i++) cout << arr[i].value << " " << arr[i].weight << endl;
    int curW = 0;
    double ans = 0;
    for(int i=0; i<n; i++) {
        if(curW + arr[i].weight <= W) {
            curW += arr[i].weight;
            ans += arr[i].value;
        }
        else {
            int needed = W - curW;
            ans += (double) needed * ((double) arr[i].value / (double) arr[i].weight);
            break;
        }
    }
    return ans;
}