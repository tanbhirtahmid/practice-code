    #include <stdio.h>
     

    int strlen(){ return 0; }

    int main() {
        char str1[6]="Hello", str2[100]=" I am here";
        // strcat(str1, " Sir"); // "Hello" + " Sir"
        printf("%s", str1); // Hello Sir
        // printf("\n%s", str2);
        // strlen();

        return 0;
    }