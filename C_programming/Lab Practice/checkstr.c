#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[] = "I learn CSE";
    char c[] = "CSE";

    int n = strlen(s) - strlen(c);
    bool lol;
    for(int i=0; i<n; i++){
        if(s[i] == c[0]){
            int k = 0;
            lol = true;
            for(int j=i; j<strlen(c); j++){
                if(s[j] != c[k]){
                    lol = false;
                    return 0;
                }
                k++;
            }
        }
    }
    if(lol) printf("Found\n");
    else printf("Not Found\n");

    return 0;
}