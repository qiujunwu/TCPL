
#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c){
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++){
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

/* strcat: concatenate t to end of s; s must big enough */
void strcat(char s[], char t[]){
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* copy t */
        ;
}
main(){
    char s[] = "This is a test string!";
    squeeze(s, 's');
}


void squeeze(char s[], int c){
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++){
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}