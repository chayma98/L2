#include <stdio.h>
#include <stdlib.h>
int longeur(char ch[]){
int i =0;
while (ch[i]!='\0'){
        i++ ;
return i;}}
void affiche(char ch[]){
int i = 0 ;
    while (ch[i]!='\0'){
        printf (ch[i],n);
        i++;
    }
}
void rech(char ch[], char c){
int i = 0 ;
if (ch[i]!='\0') { return 0;}
if (ch[i]!= c){
    return 1 ;}
else i++ ;
}
void recop (char ch1[], char ch2[],int p){
// utilise longeur
    int i =0;
    char ch3[];
while (ch[p]!='\0'){
    ch3[i]= ch[p];
    i++ ; p++;
}
while (ch1[i]!='\0'){
    ch1[p]= ch2[i];
    p++ ; i++;
    return i ;
    ch1[i]= ch3[j];
    i++ ; j++
}
}
void concat (char ch1[], char ch2[]){
int i = 0; int j = 0 ;
for (i= (longeur(ch1)+1) ; i<= longeur(ch2) ; i++){
    ch1[i] = ch2[j];
    j++;
}
int compare(char l1[], char l2[]) {
int i = 0;
while(l1[i] == l2[i]) i++;
if(l1[i] != ‘\0’ || l2[i] != ‘\0’) return 0;
return 1;
//à completer
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
