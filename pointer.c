#include <stdio.h>

int main(){
  char c = 'a';
  int i = 4;
  long l = 90;//step 1
  printf("char-hex:%p\n char-dec:%lu\n int-hex:%p\n int-dec:%lu\n long-hex:%p\n long-dec:%lu\n\n", &c, &c, &i, &i, &l, &l);//step 2
  char *cp = &c;
  int *ip = &i;
  long *lp = &l;//step 3
  printf("char-pointer:%lu\n int-pointer:%lu\n long-pointer:%lu\n\n", cp, ip, lp);//step 4
  *cp = 'h';
  *ip = 9;
  *lp = 293;
  printf("char:%c\n int:%d\n long:%ld\n\n", c, i, l);//step 5
  unsigned int uni = 2945853;
  int *unii = &uni;
  char *unic = &uni;//step 6
  printf("int-p:%p points to:%u\n char-p:%p points to:%u\n\n", unii, *unii, unic, *unic);//step 7
  printf("unsigned-int-hex:%x\n unsigned-int-dec:%u\n", uni, uni);//step 8
  printf("unsigned-int-byte0:%hhx\t unsigned-int-byte1:%hhx\t unsigned-int-byte2:%hhx\t unsigned-int-byte3:%hhx\n\n", *(unic), *(unic+1), *(unic+2), *unic+3);//step 9
  (*unic)++;
  (*(unic+1))++;
  (*(unic+2))++;
  (*(unic+3))++;
  printf("After increasing each byte by 1:\nunsigned-int-hex:%x\n unsigned-int-dec:%u\n", uni, uni);
  printf("unsigned-int-byte0:%hhx\t unsigned-int-byte1:%hhx\t unsigned-int-byte2:%hhx\t unsigned-int-byte3:%hhx\n\n", *(unic), *(unic+1), *(unic+2), *unic+3);//step 10
  (*unic)+=16;
  (*(unic+1))+=16;
  (*(unic+2))+=16;
  (*(unic+3))+=16;
  printf("After increasing each byte by 1:\nunsigned-int-hex:%x\n unsigned-int-dec:%u\n", uni, uni);
  printf("unsigned-int-byte0:%hhx\t unsigned-int-byte1:%hhx\t unsigned-int-byte2:%hhx\t unsigned-int-byte3:%hhx\n\n", *(unic), *(unic+1), *(unic+2), *unic+3);//step 11
}
