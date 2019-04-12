/*****************************
 * Flynn Harrison 13/03/2019
 * all_zero check array for any
 * non zero entrys.
 ****************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_DISTINCT_WORDS  1000
#define MAX_WORD_LENGTH     10

typedef struct
{
    char word[MAX_WORD_LENGTH+1];
    int num_usess;  
} word_s;

typedef word_s word_t[MAX_DISTINCT_WORDS];

int get_word(char word[], int word_length);

int main(int argc, char **argv)
{
    word_t word_array;
    int num_distinct_words = 0;

    // get input
    printf("input a string: ");

    // prosses stdin
    int file_status = 0;
    for(int i = 0; file_status != EOF && i <= MAX_DISTINCT_WORDS; i++)
    {
        char word_buff[MAX_WORD_LENGTH +1];
        file_status = get_word(word_buff, MAX_WORD_LENGTH);
        for (int i = 0; i < num_distinct_words; i++)
        {
            if (strcmp(word_array[i].word, word_buff) == 0)
                word_array[i].num_usess++;

            
        }
    }
    return 0;
}

/*
* returns EOF when EOF has been reached, and 1 for getting a word.
* string must be 1 longer than word_length
*/
int get_word(char word[], int word_length)
{
    char c;
    while((c = fgetc(stdin)) != EOF && !isalpha(c)) {} // Eat non usefull char

    if (c == EOF)
        return EOF;
    ungetc(c, stdin);

    for (int i =0; i<word_length; i++)
    {
        c = getc(stdin);

        if (c == EOF)
            return EOF;
        if (!isalpha(c))
        {
            // word ends if not a letter
            word[i] = '\0';
            return 1;
        }
        
        word[i] = c;
    }
    word[word_length + 1] = '\0';
    return 1;
}
