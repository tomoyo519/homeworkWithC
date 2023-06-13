#include<stdio.h>

int main(void){
    char sentence[101];
    scanf("%s", sentence);
    int i=0;
    while(sentence[i]!= '\0'){
        i++;
    }
    int index = 0;
    for(int k=0; k<i ; k++){
        if(sentence[k] =="c" && sentence[k+1] =="="){;
            index++;
             k++;
        }else if(sentence[k] =="c" && sentence[k+1]=="-"){;
            index++;
            k++;
        }else if(sentence[k] =="d"&& sentence[k+1]=="z"&& sentence[k+2]=="="){;
            index++;
                k +=2;
        }else if(sentence[k] =="d"&& sentence[k+1]=="-"){;
            index++;
                k++;
        }else if(sentence[k] =="l" && sentence[k+1]=="j"){;
            index++;
            k++;
        }else if(sentence[k]=="n" && sentence[k+1]=="j"){;
            index++;
            k++;
        }else if(sentence[k] =="s" && sentence[k+1] =="="){;
            index++;
            k++;
        }else if(sentence[k] =="z" && sentence[k+1]=="="){;
            index++;
            k++;
        }else{;
            index++;
        };
    }
    printf("%d", index);
}