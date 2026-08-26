class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
if (grid.empty()) return 0;
int rows = grid.size();
int cols = grid[0].size();
int islandCount = 0;
int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
for (int r = 0; r < rows; ++r) {
    for (int c = 0; c < cols; ++c) {
    if (grid[r][c] == '1') {
islandCount++;
grid[r][c] = '0'; // Mark visited
                    
 queue<pair<int, int>> q;
q.push({r, c});
                    
while (!q.empty()) {
                        auto [currR, currC] = q.front();
                        q.pop();
                        
for (auto& dir : directions) {
                            int nr = currR + dir[0];
                            int nc = currC + dir[1];
                            
if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == '1') {
                                grid[nr][nc] = '0'; 
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }
        
        return islandCount;
    
    }
};