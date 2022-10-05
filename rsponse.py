def reach(adj, x, y): 
 visited = [False]*len(adj)
 stack = [x]
 visited[x] = True
 while len(stack) > 0:
  u = stack.pop(-1)
  for v in adj[u]:
   if not visited[v]:
    stack.append(v)
    visited[v] = True
    if v == y:
     return 1
 return 0
