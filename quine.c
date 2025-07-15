#include <stdio.h>
int main() {char *src = "#include <stdio.h>%cint main() {char *src = %c%s%c; printf(src, 0xa, 0x22, src, 0x22, 0xa);}%c"; printf(src, 0xa, 0x22, src, 0x22, 0xa);}
