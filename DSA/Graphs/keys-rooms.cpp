class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> seen;
        queue<int> q;
        q.push(0);
        seen.insert(0);
        while(!q.empty()) {
        	int cur = q.front();
        	q.pop();
        	for(auto key: rooms[cur]) {
                if(seen.find(key) == seen.end()) {
                seen.insert(key);
        		q.push(key);
                }
        	}
        }        
        return seen.size() == rooms.size();

    }
};