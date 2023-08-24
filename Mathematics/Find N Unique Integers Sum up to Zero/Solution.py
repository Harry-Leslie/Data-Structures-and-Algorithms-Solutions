from ast import List

# My Solution in Python

# Time Complexity O(n) and Space Complexity O(n) (for creating the result array or O(1) if that is not considered)

class Solution:
    def sumZero(self, n: int) -> List[int]:
        if n%2==0:
            res = []
            for i in range(1,(n//2)+1):
                res.append(i)
                res.append(-i)
        else:
            res = [0]
            for i in range(1,(n//2)+1):
                res.append(i)
                res.append(-i)
        return res
    
# This is the best solution 

class Solution:
    def sumZero(self, n: int) -> List[int]:
        answer = [i for i in range(1, n // 2 + 1)] + [-i for i in range(1, n // 2 + 1)]
        if n % 2:
            answer.append(0)
        return answer
    
# I did think of this but I was not sure how I would add the i and -i in the same list comprehension so but 
# this solution uses two different list comprehensions which makes sense