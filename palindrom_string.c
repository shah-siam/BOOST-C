#include<stdio.h>
#include<string.h>

void rev(char* orginal,char* reverse){  // or void rev(char orginal[],char reverse[])
    int i, j;
    for(i = 0; orginal[i] != '\0'; i++);
    for(j = 0; j < i; j++){
        reverse[j] = orginal[i - j - 1];
    }
    reverse[j] = '\0'; 
}
int main (){
    char orginal[100];
    char reverse[100];

    fgets(orginal, sizeof(orginal), stdin);
    orginal[strcspn(orginal, "\n")] = '\0';

    rev(orginal, reverse);

    if (strcmp(orginal, reverse) == 0){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    
 
}

