#include <stdlib.h>
#include <stdio.h>

char* dash_read_line(){
  return NULL;
}

char** dash_split_line(char* line){
  return NULL;
}

int dash_execute(char** args){
  return 0;
}

void dash_loop(void){
  char *line;
  char **args;
  int status;

  do{
    printf("> ");
    line = dash_read_line();
    args = dash_split_line(line);
    status = dash_execute(args);

    free(line);
    free(args);
  } while(status);

  return;
}

int main(int argc, char **argv){
  // Load config files, if any.

  // Run command loop.
  dash_loop();

  // Perform any shutdown/cleanup.

  return EXIT_SUCCESS;
}

