class Solution:        
    def hasCycle(self, graph, v, visited, dfsStack):
        visited[v] = True
        dfsStack[v] = True
        for n in graph[v]: # for every neighbor of vertex v
            if not visited[n]:
                if self.hasCycle(graph, n, visited, dfsStack) is True:
                    return True
            elif dfsStack[n] is True:
                return True
        dfsStack[v] = False
        return False
                
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        # Make adjacency list
        graph = [[] for i in range(numCourses)]
        for reqPair in prerequisites:
            graph[reqPair[1]].append(reqPair[0])
        visited = [False] * numCourses
        dfsStack = [False] * numCourses
        for v in range(numCourses): # for every vertex in the graph
            if not visited[v]: # DFS on it if we haven't visited it yet
                if self.hasCycle(graph, v, visited, dfsStack) is True:
                    return False # if there's a cycle you cannot take all courses
        return True