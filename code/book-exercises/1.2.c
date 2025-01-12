/*
Exercise 1-2. Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above. 
*/

#include <stdio.h>

void main(){
    printf("Hello world\c\n");
}

/*
Answer: 1.2.c: In function ‘main’:
1.2.c:9:29: warning: unknown escape sequence: '\c'
    9 |     printf("Hello world\c\n");
      |      
*/