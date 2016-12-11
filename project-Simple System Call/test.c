#include <lib.h>    // provides _syscall and message
#include <stdio.h>
#include <stdlib.h> // provides atoi
#include <unistd.h>

int main(int argc, char **argv) {
    if (argc < 2)
        exit(1);    // expecting at least 1 integer parameter to test program
        
    int i = atoi(argv[1]);
    
    //message m;      // Minix uses message to pass parameters to a system call
    pcall(i);
  //  m.m1_i1 = i;    // set first integer of message to i
    
//    _syscall(PM_PROC_NR, PRINTINTEGER, &m);
        /* _syscall leads to the system server identified by PM_PRO_NR (the PM
         * server process) invoking the function identified by call number 
         * PRINTMSG with parameters in the message copied to address &m
         */   
}