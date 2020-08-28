class Solution {
public:
        
    void dfs(vector<vector<char>>& grid, int x, int y, int nr, int nc) {
        if(x<0 || x >=nr || y<0 || y >=nc || grid[x][y] != '1') return;
        
    
        
        grid[x][y] = '*';
        
        dfs(grid, x+1, y, nr, nc);
        dfs(grid, x-1, y, nr, nc);
        dfs(grid, x, y+1, nr, nc);
        dfs(grid, x, y-1, nr, nc);
    }

    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        int nr = grid.size();
        if (!nr) return 0;
        int nc = grid[0].size();
        for(int r=0; r<nr; r++) {
        for(int c=0; c<nc; c++) {
           if(grid[r][c] == '1') {
               res++;
               dfs(grid, r, c, nr, nc);
           } 
        }
      }
      return res;
    }
};



// Complex One :: 

// class Solution {
// public:
//     int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

//     void DFS(vector<vector<char>>& board, int i, int j, int m, int n) {
//         if (i < 0 || i == m || j < 0 || j == n || board[i][j] == '0') {
//             return;
//         }
//         for (auto d : dirs) {
//           int x = i + d[0], y = j + d[1];
//           board[i][j] = '0';
//           DFS(board, x, y, m, n);
//       }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int nr = grid.size();
//         if (!nr) return 0;
//         int nc = grid[0].size();
//         int num_islands = 0;
//         for (int r = 0; r < nr; ++r) {
//           for (int c = 0; c < nc; ++c) {
//             if (grid[r][c] == '1') {
//               ++num_islands;
//               DFS(grid, r, c,nr,nc);
//             }
//           }
//         }

//         return num_islands;
//     }
// };