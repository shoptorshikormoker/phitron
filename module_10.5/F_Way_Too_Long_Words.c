#include <stdio.h>
#include <string.h>

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int i = 0; i < T; i++) {
        char S[101];  // The maximum length of S is 100, so we allocate an array of size 101 (including '\0').
        scanf("%s", S);
        
        int len = strlen(S);
        
        // Check if the string length is greater than 10
        if (len > 10) {
            // Print the abbreviation
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        } else {
            // Print the string as is
            printf("%s\n", S);
        }
    }
    
    return 0;
}


