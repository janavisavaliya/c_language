#include <stdio.h>
main() {
    
    char current_char = 'a';
    
    printf("%c ", current_char);
    
    do {
        current_char += 4;
        
        if (current_char > 'z') {
        	break;
        }
        
        printf("%c ", current_char);
        
    } while(1);

}

