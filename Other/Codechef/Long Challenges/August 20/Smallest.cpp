/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/
#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <cstdlib> 
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <tuple>
#include <string>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define ll long long 
#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define pb              push_back
#define mp              make_pair
#define lli             long long int
#define inf             1e18
#define w(x)            int x; cin>>x; while(x--)
#define out cout<<
#define in cin>>
using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

string Solution(map<char,int> &mp, string p, map<char, int> &ms, string s) {
	    string ans="";

        for(auto it=ms.begin();it!=ms.end();it++)
        {
        	// out it->first << " " << it->second << endl;
            if(ms.find(p[0]) != ms.end()){
            while(ms[it->first]>0)
            {
                ans+=it->first;
                ms[it->first]--;
               // out it->first << ms[it->first] << endl;

            }

            // out ans << endl;
 
            }
            else
            {
                break;
            }
        }

        // if(p[0]<p[1]){
        // while(ms[p[0]]>0)
        //   {
        //     ans+=p[0];
        //     ms[p[0]]--;
        //   }
        // }
        // cout<<ans << endl;
 
        ans+=p;
        // cout << ans << endl;
        for(auto it=ms.begin();it!=ms.end();it++)
        {
            while(ms[it->first]>0){
               // cout << it->first << " " << it->second << endl;
               ans+=it->first;
               ms[it->first]--;}
        }
        // cout<<ans.length()<<endl;

        return ans;
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

w(x) {
	    string s,p;
        cin>>s;
        cin>>p;



        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        transform(p.begin(), p.end(), p.begin(), ::tolower); 
        map<char,int> ms;
        map<char,int> mp;
        for(int i=0;i<s.length();i++)
          ms[s[i]]++;
        for(int i=0;i<p.length();i++)
          mp[p[i]]++;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ms[it->first]-=it->second;
            // cout << ms[it->first] << endl;
        }

        cout << Solution(mp,p,ms,s) << endl;

}

   return 0;
}




















