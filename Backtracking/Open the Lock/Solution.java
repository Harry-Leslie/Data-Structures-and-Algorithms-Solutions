// My Solution in Java

// Time Complexity O(10^N) and Space Complexity O(10^N) where N is the number of digits in the target

import java.util.ArrayDeque;
import java.util.HashSet;
import java.util.Set;
import java.util.Queue;


class Solution {
    public String moveUp(String state, Integer index){
        if (state.charAt(index) == '9')
            return state.substring(0, index) + '0' + state.substring(index+1);
        else{
            int chr = Integer.parseInt(String.valueOf(state.charAt(index)))+1;
            return state.substring(0, index) + chr + state.substring(index+1);
        }
    }

    public String moveDown(String state, Integer index){
        if (state.charAt(index) == '0')
            return state.substring(0, index) + '9' + state.substring(index+1);
        else{
            int chr = Integer.parseInt(String.valueOf(state.charAt(index)))-1;
            return state.substring(0, index) + chr + state.substring(index+1);
        }
    }

    public int bfs(Set<String> visited, String target) {
        Queue<String> queue = new ArrayDeque<>();
        queue.add("0000");
        int res = 0;
        while (!queue.isEmpty()){
            int n = queue.size();
            for (int i = 0; i < n; i++){
                String current = queue.poll();
                if (current.equals(target))
                    return res;
                for (int j = 0; j < 4; j++){
                    String upState = moveUp(current, j);
                    String downState = moveDown(current, j);
                    if (!visited.contains(upState)){
                        queue.add(upState);
                        visited.add(upState);
                    } 
                    if (!visited.contains(downState)){
                        queue.add(downState);
                        visited.add(downState);
                    }
                }
            }
            res++;
        }

        return -1;
    }

    public int openLock(String[] deadends, String target) {
        Set<String> visited = new HashSet<>();
        for (String deadend: deadends)
            visited.add(deadend);
        return bfs(visited, target);
    }

}

/*
 * From the solutions I have seen most of them use the same techniques just with the fact that the use an array
 * to made access time blazingly fast compared with checking a set. This is also because as the size of
 * the set increases the time complexity starts to approach N
 */