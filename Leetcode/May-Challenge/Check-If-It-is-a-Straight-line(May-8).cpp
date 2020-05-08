class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
         int dy = coordinates[1][1] - coordinates[0][1];
         int dx = coordinates[1][0] - coordinates[0][0];
         double slope = (double)dy/ (double)dx;
         for ( int i=2; i< coordinates.size() ; i++) {
            int new_dy = coordinates[i][1] - coordinates[0][1];
            int new_dx = coordinates[i][0] - coordinates[0][0];
            double new_slope = (double) new_dy / (double) new_dx;
             if( slope != new_slope){
                 return false;
             }
         }
        return true;
    }
};
