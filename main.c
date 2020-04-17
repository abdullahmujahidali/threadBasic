#include <stdio.h>
#include <zconf.h>
#include <pthread.h>
void* mythread(void *pVOid){
  printf("This is a thread");
  return 0;
}
int main () {
 pthread_t tid ;
 pthread_create(&tid,NULL,mythread,NULL);
 pthread_join(tid,NULL);
 return 0;
}