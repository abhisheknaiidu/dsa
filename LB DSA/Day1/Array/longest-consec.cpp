#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

  int arr[7] = {1,9,3,10,4,20,2};
  int count = 0;
  int ans = 0;
  int N = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+N);
  vector<int> v;
  v.push_back(arr[0]);
  for(int i=1; i<N; i++) {
      if(arr[i-1] != arr[i]) {
          v.push_back(arr[i]);
      } 
  }
  for(int i=0; i<v.size(); i++) {
      if(i>0 && v[i] == v[i-1] + 1) {
          count++;
      }
      else {
          count = 1;
      }
      ans = max(ans, count);
  }
  cout << ans << endl;

   return 0;
}