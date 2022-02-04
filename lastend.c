#include <conio.h>
#include <stdio.h>
#include <string.h>



// Driver Code
int main()
{
    FILE *fs=fopen("file_path.csv","r");
    if(fs==NULL)
    {



    perror("Error");
    exit(1);
    }
    char line[200];
    while(fgets(line,sizeof(line),fs))
    {



        char *token;
        token=strtok(line,",");
        while(token!=NULL)
        {



            printf("%-12s",token);
            token=strtok(NULL,",");
        }
        printf("\n");



        }
    }
