#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    char *token = strtok(sentence, " \n");
    
    while (token != NULL) 
    {
        printf("%s\n", token);
        token = strtok(NULL, " \n");
    }

    return 0;
}
