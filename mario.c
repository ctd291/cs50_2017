#include <cs50.h>
#include <stdio.h> 

void print_leading_blocks(int number_to_print, int number_of_spaces);
void print_trailing_blocks(int number_to_print);

int main() {
    
    // Get number of lines from the user
    int number_of_lines = 0;sdfsdfsddfs
    do{
        number_of_lines = get_int();
        if(number_of_lines < 0 || number_of_lines > 23){
            printf("No, stop it.  For real this time.\n");
        }
    }
    while(number_of_lines < 0 || number_of_lines > 23);
    
    for(int height = 1; height < number_of_lines + 1; height++){
        print_leading_blocks(height, number_of_lines - height);
        printf("  ");
        print_trailing_blocks(height);
        printf("\n");
    }
}

void print_leading_blocks(int number_to_print, int number_of_spaces){
    for(int i = 0; i < number_of_spaces; i++){
        printf(" ");
    }
    for(int i = 0; i < number_to_print; i++){
        printf("#");
    }
}

void print_trailing_blocks(int number_to_print){
    for(int i = 0; i < number_to_print; i++){
        printf("#");
    }
}
