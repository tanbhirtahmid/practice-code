#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool not_there(char ** p, char * sub, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(strcmp(*p, sub)==0) return 0;
    }

    return 1;
    
}

void trim(char * b, char * a)
{
    int i = 0, j = strlen(a);

    while(a[i]==' ') i++;
    while(a[j]==' ') j--;
    char temp = a[j+1];
    a[j+1] = 0;
    strcpy(b, &a[i]);
    a[j+1] = temp;

}

int main() {
    int n = 5;
    char str[100][100] = {"Rezwanur Rahman Ruben $ 010201 $ Nazir Ghat, Khulna  $  CSE $ 3.81",
        "Ahmed Shah Mashiyat $ 010203 $ Nirala, Khulna  $  CSE $ 3.76", 
        "Manishankar Mondal $ 010205 $ Alkatra mill, Khulna  $  CSE $ 3.83",
        "Mr. unknown in math $ 271201 $ Nirala, Khulna  $  Math $ 3.87", 
        "Mr. unknown in physics $ 271701 $ Nirala, Khulna  $  Physics $ 3.82"};

    // for (int i = 0; i < n; i++)
    // {
    //     fgets(str[i], 100, stdin);
    // }

    int len[5];

    for (int i = 0; i < n; i++)
    {
        len[i]=strlen(str[i]);
        // str[i][len[i]] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < len[i]; j++)
        {
            if(str[i][j]=='$') str[i][j]=0;
        }
    }

    char name[5][100], id[5][10], place[5][100], dept[5][100], cgpa[5][10];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        trim(name[i], str[i]);
        for (int j = 0; j < len[i]; j++)
        {
            if(str[i][j]==0)
            {
                count++;
                if(count==1) trim(id[i], &str[i][j+1]);
                if(count==2) trim(place[i], &str[i][j+1]);
                if(count==3) trim(dept[i], &str[i][j+1]);
                if(count==4) {trim(cgpa[i], &str[i][j+1]); break;}
            }
        }
        
    }
    

    // for (int i = 0; i < n; i++)
    // {
    //     printf("------------------------\n");
    //     printf("%s\n", name[i]);
    //     printf("%s\n", id[i]);
    //     printf("%s\n", place[i]);
    //     printf("%s\n", dept[i]);
    //     printf("%s\n", cgpa[i]);
    //     printf("------------------------");
    // }

    char **p = (char **) malloc(0*sizeof(char *));
    bool * seen= (bool *) calloc(5, sizeof(bool));
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(seen[i]) continue;
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (strcmp(place[i], place[j])==0)
            {
                seen[j]=1;
                count++;
                if(count > 1) {
                k++;
                p = realloc(p , (k)*sizeof(char *));
                p[k-1] = place[i];
                break;
                }
            }
            
        }
        
    }
    free(seen);
    bool * seen1= (bool *) calloc(5, sizeof(bool));
    int ad_count = 0;
    for (int i = 0; i < n; i++)
    {
        if(seen1[i]) continue;
        k=0;
        int count=0;
        char **sub = (char **) malloc(0*sizeof(char *));
        for (int j = i; j < n; j++)
        {
            if (strcmp(place[i], place[j])==0)
            {
                seen1[j]=1;
                
                if(not_there(sub, dept[j], k))
                {
                    count++;
                    k++;
                    sub = realloc(sub , (k)*sizeof(char *));
                    sub[k-1] = dept[j];
                    if(count > 1) {ad_count++; break;} 
                }
            }
        }
        free(sub);
    }
    free(seen1);

    // for (int i = 0; i < k; i++)
    // {
    //     printf("%s", p[i]);
    // }
    
    printf("%d", ad_count);
    
    free(p);
    return 0;
}