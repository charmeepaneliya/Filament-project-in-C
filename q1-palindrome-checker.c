#include<stdio.h>

int main(){

    char str[50];
    int length=1;

    printf("Enter any string:");
    scanf("%d",&str);

    for(int i=0;str[i]!='\0';i++){
       if(str[i]!=str[0+i]){
        length=0;
        break;
       }
    }

    if(length){
        printf("the string is a palindrome.\n");

    }else{
         printf("the string is not a palindrome.\n");
    }

    return 0;
}