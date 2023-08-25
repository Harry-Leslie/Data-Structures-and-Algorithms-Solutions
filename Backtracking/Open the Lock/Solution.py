# My Solution in Python

# Time Complexity O(10^N) and Space Complexity O(10^N) where N is the number of digits in the target

from collections import deque

class Solution:
    def move_up(self, current_state, index):
        new_value = (int(current_state[index])+1)%10
        return current_state[:index] + str(new_value) + current_state[index+1:]

    
    def move_down(self, current_state, index):
        new_value = (int(current_state[index])-1)%10
        return current_state[:index] + str(new_value) + current_state[index+1:]
    
    def openLock(self, deadends, target: str) -> int:

        def bfs(state):
            visited = set([state])
            no_gos = set(deadends)
            queue = deque()
            queue.append(state)
            res=0
            while len(queue) > 0:
                n = len(queue)
                for _ in range(n):
                    current = queue.popleft()
                    if current == target:
                        return res
                    if current in no_gos:
                        continue
                    for i in range(4):
                        up_state = self.move_up(current, i)
                        if up_state not in visited:
                            visited.add(up_state)
                            queue.append(up_state)
                        down_state = self.move_down(current, i)
                        if down_state not in visited:
                            visited.add(down_state)
                            queue.append(down_state)
                res+=1
            return -1
        return bfs("0000")

""" 

From the solutions I have seen most of them use the same techniques just with the fact that the use an array
to made access time blazingly fast compared with checking a set. This is also because as the size of
the set increases the time complexity starts to approach N

"""