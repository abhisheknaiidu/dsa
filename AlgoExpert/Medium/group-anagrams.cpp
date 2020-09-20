#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <numeric>
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

// S.C - O(w*n + n) ==> O(w*n) 
// w = length of words vector and n = longest anagram length;
// T.C - O(w*nlog(n) + n*wlog(w));
// sorting w words of max of length n;
// sorting w indices with anagrams of max length n;

int main(int argc, char* argv[]) {
	abhisheknaiidu();


	vector <string> words{"yo", "act", "flop", "tac", "cat", "oy", "olfp"};
    vector <string> sortedWords;

    for(auto word: words) {
    	sort(word.begin(), word.end());
    	sortedWords.push_back(word);

    }


    // vector<int> indices(words.size());
    // iota(indices.begin(), indices.end(), 0);

    // sort(indices.begin(), indices.end(), [sortedWords](int a, int b) -> bool {
    // 	// cout << a << " " << b << endl;
    // 	return sortedWords[a] < sortedWords[b];
    // });

    // vector<vector<string>> res;
    // vector<string> anaGroup;
    // string currentAna = sortedWords[indices[0]];


    // for(auto index: indices) {
    // 	string word = words[index];
    // 	string sortedWord = sortedWords[index];

    // 	if(sortedWord == currentAna) {
    // 		anaGroup.push_back(word);
    // 		continue;
    // 	}

    // 	res.push_back(anaGroup);
    // 	anaGroup = vector <string>{word};
    // 	currentAna = sortedWord;

    // }


    // res.push_back(anaGroup);


    // MOST OPTIMAL 🔥

    // S.C remains same
    // T.C will be O(w*nlogn)
    // because we are just sorting w words of max of length n;

    unordered_map<string, vector<string>>m;

    for(auto word: words) {
    	string sortedWord = word;
    	sort(sortedWord.begin(), sortedWord.end());

    	if(m.find(sortedWord) != m.end()) {
    		m[sortedWord].push_back(word);
    	}
    	else {
    		m[sortedWord] = vector<string>{word};
    	}
    }

    vector<vector<string>> res;

    for(auto x:m) {
    	res.push_back(x.second);
    }




    for(auto x: res) {
    	for(auto y: x) {
    		cout << y << " ";
    	}
    	cout << endl;
    }
 








   return 0;
}