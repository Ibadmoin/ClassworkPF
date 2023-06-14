#include<stdio.h>
/*Do it yourself - 2:

char a = ‘F’; char b = ‘S’;

What will the output of:
1-	a
2-	a + b
3- a + b + 9
4- a + b + ‘9’
And why?
*/

int main(){
    char a = 'F'; char b ='S';
    // char c = 153;
    printf(" %c",a); //prints value F which we had initialized in variable a.
    printf("\n %c",a+b);  // the value of "F" in ASCII is 070 and the value of "S" is 83 
    // so after adding we got 153 which is the value of and special character "Ö"
    printf("\n The character of value 153 is :  %c",153);  // confirmation using 153 ASCII value.

    printf("\n %c",a+b+9); //here 153 becomes 162 which is the value of "ó"
    printf("\n The character of value 162 : %c",162); //confrimation of ASCII Character at 163.

    printf("\n %c",a+b+'9');// here we didnt add integer 9 but the number '9' which hase the ASCII value of 57 
    // so the above total becomes 210 which has its unique character which is " ╥"

    printf("\n The character of value 210 : %c",210);


    return 0;
}
