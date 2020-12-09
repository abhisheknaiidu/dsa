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
 	string s1 = "ABCD";
 	string s2 = "DABC";
 	if(s1.size() != s2.size()) {
 		cout << "0" << endl;
 	}
 	string temp = s1 + s2;
 	cout << (temp.find(s1) != string::npos) << endl;
 	
 
    return 0;
 }