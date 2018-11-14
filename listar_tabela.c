#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include "tabela.h"

void listarTabelas(){
  //listando todos os txt, falta retirar o .txt  
  printf("----TABELAS----- \n");
  DIR *p;
  struct dirent *pp;     
  p = opendir ("./");
  if (p != NULL)
  {
    while ((pp = readdir (p))!=NULL) {
      int length = strlen(pp->d_name);
      if (strncmp(pp->d_name + length - 4, ".txt", 4) == 0) {         
          printf("%.*s",length - 4, pp->d_name);
      }
    }
    (void) closedir (p);
  }
  printf("-----------------\n");
}