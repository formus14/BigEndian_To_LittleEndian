#include <stdio.h>
#include <stdlib.h>

int changed_endian(int num)
{
 int byte0, byte1;
 byte0 = (num & 0x000000FF) >> 0 ;
 byte1 = (num & 0x0000FF00) >> 8 ;

 return( (byte0 << 8) | (byte1 << 0));
}

void main(){
uint16_t  BigEnd = ‭59372‬; // Corresponds to 0xE7EC in Hex Format
uint16_t LillEnd = changed_endian(BigEnd); 

printf("The Old Format : 0x%.2X \nThe New Format : 0x%.2X ",BigEnd,LillEnd);
}
