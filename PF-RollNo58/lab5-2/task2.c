#include<stdio.h>

// Task 2:
// Any character is entered through the keyboard; write a program to determine 
// whether the character entered is a capital letter, a small case letter, 
// a digit or a special symbol.
int main(){
char input;
printf("Press any key! ");
scanf("%c",&input);
if(input >= 65 && input <= 90 ){
    printf("It's a Capital letter!");
} else if(input >= 97 && input <= 122){
    printf("It's a Small letter!");

} else if(input >= 48  && input <= 57){
    printf("It's a Numeric digit!");

} else {
    printf("It's a Special Symbol!");

}


    return 0;
}