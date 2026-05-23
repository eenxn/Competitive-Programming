def fillPuzzle(n, numbers):
    grid = [[0] * n for _ in range(n)]
    pos = {} # pos[number] = (row, col)
    
    vals = list(map(int, numbers.split()))
    start_r = start_c = 0
    
    for i in range(n):
        for j in range(n):
            val = vals[i * n + j]
            grid[i][j] = val
            if val != 0:
                pos[val] = (i, j)
            if val == 1:
                start_r, start_c = i, j

    def solve(r, c, current_val):
        if current_val == n * n:
            return True
            
        next_val = current_val + 1

        if next_val in pos:
            next_r, next_c = pos[next_val]
            if abs(next_r - r) + abs(next_c - c) == 1:
                return solve(next_r, next_c, next_val)
            return False
            
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            
            if 0 <= nr < n and 0 <= nc < n and grid[nr][nc] == 0:
                
                grid[nr][nc] = next_val
                
                if solve(nr, nc, next_val):
                    return True 
                    
                grid[nr][nc] = 0
                
        return False 

    solve(start_r, start_c, 1)
    
    result = []
    for i in range(n):
        for j in range(n):
            if vals[i * n + j] == 0:
                result.append(str(grid[i][j]))
                
    return " ".join(result)

if __name__ == '__main__':
    n = 5
    numbers = "3 0 1 0 23 0 11 0 25 22 5 10 13 20 0 6 0 14 19 18 0 8 0 16 0"
    
    print(fillPuzzle(n, numbers))