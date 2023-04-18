#ifndef MAIN_H
#define MAIN_H



char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int count_words(char *str);
char *copy_word(char *str, int start, int end);
int _strlen(char *s);
void free_words(char **words, int word_count);

#endif
