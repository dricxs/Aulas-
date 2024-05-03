#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  unsigned int resp=0, som_j=0, som_z=0;
  int limite=10, a=0, b=0, c=0;

  a = atol(argv[1]);
  b = atol(argv[2]);
  c = atol(argv[3]);

  for (int i=a; i>=0; i--){
    resp += i; //+= soma o resp com o i // ++ somo mais 1 // -- subtrai 1
    for (int j=b; j>=0; j-- ){
      som_j+=j
        
      for ( int z=c; z>=0; z--){
        som_z+=z;
        printf("Mensagem; %d %d %d\n", i, j, z);
      }
    }
  }
