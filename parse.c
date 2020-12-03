#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char * args[20];

char ** parse_args( char * line ){
    char *p = line;
    char *token;
    int i = 0;
    while(p){
        token = strsep(&p," ");
        args[i] = token;
        i++;
    }
    return args;
}

int main(){
    char line[100] = "ls -a -l";
    char **args = parse_args(line);

    execvp(args[0], args);

}