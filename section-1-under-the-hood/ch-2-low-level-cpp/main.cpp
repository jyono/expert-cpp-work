/*
 * Ch 1 taught us about how the compiler generates an executable from source code
 * The exe contains machine code that is copied to memory and then run by the CPU
 * Copying is done by internal tool of OS called loader
 *
 * -- main()
 * - Program execution starts with the main() function and is the standard for starting points
 * - main() has two arguments
 *      int argc - number of arguments
 *      char* [] argv - the actually arguments passed in cli (first is always program name)
 * - main() must be the first function called but is not the entry point. in linux it is _libc_start_main
 *
 * -- Special properties of main()
 *  - It is the only function that is allowed to omit a return statement because when execution is complete, return 0 is implicit
 *  - Not allowed to return auto bc it needs to return int
 *
 *  -- contexpr
 *  - specifier that declares that the value of the function/variable can be evaluated at compile time,
 *  but doesn't ensure that it will be.
 *
 * - I don't totally get this and need to come back to it deeper, but I kinda get it enough to move on :shrug:
 *
 * -- Recursion
 * - main() cannot be called recursively
 * - a correct recursive function doesn't go on forever and has a base case that ends execution
 * - solving smaller problems must eventually lead to the base case
 * - everytime a function is called recursively, a new instance is pushed on the stack.
 * - failure to resolve to a base case causes stack overflow errors
 * - obviously recursion is hot for l33tc0d3 god mode, but lets try to avoid it in real programs
 *
 * -- Working with data
 * - When we refer to memory, we refer to RAM which is the general term for SRAM or DRAM. DRAM is default in this book
 * - (FASTEST access time) CPU Registers -> Cache Memory aka SRAM -> Main memory aka DRAM -> Hard Drive (SLOWEST)
 * - When we compile, we store final exe on the ahrd drive. to run the exe, the OS loads its instructions into virtual memory and in turn,
 * RAM to be one by one by the CPU
 *
 * -- Virtual Memory
 * */
int main(){
    return 0;
}