#include <stdio.h>

int main(){

    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';       // setting some amount of memory blocks aside to store some value, 
                        //the memory block that this variable is using up has some memory address

    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));  // each of these variables is using one block of memory
    printf("%d bytes\n", sizeof(b));    // a single block of memory is BYTE
    printf("%d bytes\n", sizeof(c));

    printf("address a: %p\n",&a);        // these addresses are in hexadecimal
    printf("address b: %p\n",&b);
    printf("address c: %p\n",&c);


}