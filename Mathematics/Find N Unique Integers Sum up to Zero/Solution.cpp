// My Solution in C++

// Time Complexity O(n) and Space Complexity O(n) (for creating the result array or O(1) if that is not considered)

class Solution {
public:
    std::vector<int> sumZero(int n) {
        std::vector<int> res;
        if (n%2 == 0){
            for (int i = 1; i < (n/2)+1; i++){
                res.push_back(i);
                res.push_back(-i);
            }
            return res;
        } else {
            res.push_back(0);
            for (int i = 1; i < (n/2)+1; i++){
                res.push_back(i);
                res.push_back(-i);
            }
            return res;
        }
    }
};

// Best Solution

class Solution {
public:
    vector<int> sumZero(int n) {
      vector<int> answer(n);
      int x;
        if(n%2==0){
         x=n/2;
        answer[n-1]=0;
        }
        else
         x=(n-1)/2; 
        for(int i=1;i<=x;i++){    
              answer[i-1]=-1*i;          
              answer[i-1+x]=i;
        }
      return answer; 
    }
};

/* Because this solution is using [] operator to add elements to the results array this provides quick 
   This provides fast access time
*/