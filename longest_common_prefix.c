/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 
*/


#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char* strs[], int strsSize) {
    
    if (strsSize == 0)
        return "";

    char* prefix = strs[0];  // Assume first string as prefix

    for (int i = 1; i < strsSize; i++) {
        
        // Compare prefix with current string
        while (strncmp(prefix, strs[i], strlen(prefix)) != 0) {
            
            prefix[strlen(prefix) - 1] = '\0';  // Remove last character
            
            if (strlen(prefix) == 0)
                return "";
        }
    }

    return prefix;
}