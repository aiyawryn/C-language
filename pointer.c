#include <stdio.h>


void  printAge(int *pAge){ // access the value of the address stored
    printf("You are %d age years old",*pAge);  //dereference

}

int main(){

    // pointer = a "variable-like" reference that holds a memory address to another variable,
    //              a some tasks are performed more easilu wiht pointers
    //              * = indirection operator ( value at address)

    int age = 21;
    int *pAge = NULL;  // the pointer has its own address but the value stored within it is an address
    pAge = &age;

    //printf("address of age: %p\n", &age);
    //printf("value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d byes\n",sizeof(pAge));

    //printf("value of age: %d\n", age);
    //printf("value at stored address: %d\n",*pAge);  //dereferencing, extracting the value at this given arress

    printAge(pAge);
    

    return 0;
}