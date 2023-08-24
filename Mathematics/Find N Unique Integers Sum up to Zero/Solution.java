// My Solution in Java

// Time Complexity O(n) and Space Complexity O(n) (for creating the result array or O(1) if that is not considered)

// This is also the best solution 

class Solution {
    public int[] sumZero(int n) {
        int[] res = new int[n];
        if (n%2 == 0){
            int c = 0;
            for(int i = 1; i < (n/2)+1;i++){
                res[c]=i;
                c+=1;
                res[c]=-i;
                c+=1;
            }
            return res;
        } else {
            res[0]=0;
            int c = 1;
            for(int i = 1; i < (n/2)+1;i++){
                res[c]=i;
                c+=1;
                res[c]=-i;
                c+=1;
            }
            return res;
        }
    }
}