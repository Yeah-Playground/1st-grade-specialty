'''
N x M 크기의 구멍이 뚫려있는 얼음 틀이 있다. 구멍이 뚫려있는 부분은 0, 칸막이가 존재하는 부분은 1로 표시된다.
구멍이 뚫려 있는 부분끼리 상, 하, 좌, 우로 붙어 있는 경우 서로 연결되어 있는 것으로 간주한다.
이떄 얼음 틀의 모양이 주어졌을 때 생성되는 총 아이스크림의 개수를 구하는 프로그램을 작성하시오.
'''

graph = [
  '00000111100000',
  '11111101111110',
  '11011101101110',
  '11001110110000',
  '11011111111111',
  '11011111111100',
  '11000000011111',
  '01111111111111',
  '00000000011111',
  '01111111111000',
  '00011111111000',
  '00000001111000',
  '11111111111001',
  '11100011111111',
  '11100011111111'
]

n = len(graph)
m = len(graph[0])

for i in range(n):
  graph[i] = list(map(int, graph[i]))

def dfs(x, y):
  if x <= -1 or x >= n or y <= -1 or y >= m:
    return False
  
  if graph[x][y] == 0:
    graph[x][y] = 1
    dfs(x - 1, y)
    dfs(x, y - 1)
    dfs(x + 1, y)
    dfs(x, y + 1)
    return True
  return False

result = 0
for i in range(n):
  for j in range(m):
    if graph[i][j] == 0:
      result += 1
      dfs(i, j)

print(result)
