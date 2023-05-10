class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        row = len(matrix)
        col = len(matrix[0])

        used = [[False] * col for _ in range(row)]
        
        x = y = currDir = 0

        directions = [
            (0,1),
            (1,0),
            (0,-1),
            (-1,0)
        ]

        used[0][0] = True
        ans = [matrix[0][0]]

        for _ in range(row*col -1):
            # for 4 directions
            for _ in range(4):
                dirX, dirY = directions[currDir]
                nx, ny = x + dirX, y + dirY
                if 0<=nx<row and 0<=ny<col and not used[nx][ny]:
                    used[nx][ny] = True
                    ans.append(matrix[nx][ny])
                    x, y = nx, ny
                    break

                # checks for wall case
                currDir = (currDir + 1)%4 

        return ans