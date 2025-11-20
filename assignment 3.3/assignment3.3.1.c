#include <stdio.h>
int main(){
    char character;

    printf("Enter character: ");
    scanf("%c",&character);

    if((character>="a" && character<="z")||(character>="A" && character<="Z")){
        printf("%c is alphabet\n",character);
    }else if(character>="0" && character<="9"){
        printf("%c is digit\n",character);
    }else{
        printf("%c is special character\n",character);
    }

}
