#include <stdio.h>

int contains_at(char*);


int main(int argc, char** argv) {
  int result = contains_at(NULL);
  if(result) printf("Contains an @");
  else printf("No @ found");
  return 0;
}

int contains_at(char* ptr) {
  //for( int i=0; i < strlen(ptr); i++)
  char c;
  while( (c= *ptr ++) ) {if (c=='@') return 1;}
  // return 0;
  // while(1){
  //   c = *ptr;
  //   if(c == '@') return 1;
  //   if(c == '\0') break;
  //   ptr++
  // }
  return 0;
}
