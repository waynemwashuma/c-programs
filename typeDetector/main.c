#include <stdio.h>
//#include <ctype.h>
/*There is an artifact where the the null terminator is 
  considered as a character.
  Dont know how to fix it hence i will leave tit like that.
  Edit:Thought i found a way,just look if it its a null
   terminator character ...but didn't work.
  .
*/
void checkCharacter(char str){
    if(str == '\0'){
        printf("here");
        return ;
    }
    if(str >= '0' && str <= '9'){
        printf("%c is a digit.\n",str);
    }else{
        if(
            str >= 'a' && str <= 'z' ||
            str >= 'A' && str <= 'Z'
        ){
            printf("%c is an alphabetical character.\n",str);
        }else{
            printf("%c is a special character.\n",str);
        }
    }
}

int main (){
    printf("hi there");
    while(true){
        char str;
        printf("\nEnter the character:");
        scanf("%c",&str);
        printf("\n");
        checkCharacter(str);
    }
    return 0;
}

