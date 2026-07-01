// Leetcode Problem: https://leetcode.com/problems/string-compression/
// Leetcode Problem 443 String Compression
// Time Complexity: O(n)
// Space Complexity: O(1)

/*
class Solution {
public:
    int compress(vector<char>& chars) {
    int n = chars.size();
    int index = 0; // Index to keep track of the position in the chars array

    for(int i=0; i<n; i++){
            char currentChar = chars[i];
            int count = 1; // Count the occurrences of the current character

            // Count the occurrences of the current character
            while(i+1 < n && chars[i] == chars[i+1]){
                count++;
                i++;
            }

            
            if(count == 1){
                chars[index++] = currentChar; // If the count is 1, just store the character
            } else {
                chars[index++] = currentChar; // Store the character
                string countStr = to_string(count); // Convert the count to string
                for(char c : countStr){
                    chars[index++] = c; // Store each digit of the count
                }   
        }
    }
        return index; // Return the new length of the compressed array
        
    }
};

*/