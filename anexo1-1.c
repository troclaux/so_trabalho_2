#include <stdio.h>
#include <unistd.h>

void main(){
  int ret1, ret2;
  ret1 = fork();
  ret2 = fork();
  printf("Programa em execução.\n");
}