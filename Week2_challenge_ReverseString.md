"# DSA-Lab-Challenges" 
class Solution {
    public void reverseString(char[] s) {
        // Initialize left and right pointers
        int i = 0, j = s.length - 1; 
        // Loop until pointers meet
        while (i < j) { 
            // Store left character
            char letter = s[i]; 
            // Swap left and right chars
            s[i] = s[j]; 
            s[j] = letter;
            i++; // Move left pointer right
            j--; // Move right pointer left
        }
    }
}
  
