#include <stdio.h>
#include <string.h>


int count = 0;
int makeCount(void);
int recursion(const char *s, int l, int r){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else  
        makeCount();
        
        return recursion(s, l+1, r-1);
    }

int makeCount(){
    count++;
    return count;
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
   int number;
    scanf("%d", &number);
    for(int i=0; i<number; i++){
        char word[1001];
        scanf("%s", word);

        int ispal = isPalindrome(word);
        printf("%d %d\n", ispal, makeCount());
        count = 0;
    }
}