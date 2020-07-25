/*
 * - Compiler steps
 * Code(source files(.cpp and .h)) ->
 * Preprocessing(source files(.cpp)) ->
 * Compiling(object files(.o) ->
 * Linking ->
 * Executable File
 *
 * -- Preprocessing
 * - Macros evil and we should use const instead
 *
 * - When declaring header files, it's strongly advised to
 * use so-called include-guards (#ifndef, #define, #endif) to avoid double declaration errors
 *
 * #ifndef RECT_H // check if RECT_H is not defined
 * #define RECT_H //  if its not, lets define it
 * struct Rect { ... }; // code omitted for brevity
 * #endif // RECT_H // do all things until this end block
 *
 * All of the conditional compilation directives are
 * #if, #ifdef, #ifndef, #else, #elif, and #endif
 *
 * This is a good way to set DEBUG mode for programs
 *
 * - Now, we can use modules to bundle things together
 * and avoid the use for include-guards. Can still have separate
 * interface and implementation files
 *
 * -- Compiling
 * Tokenization -> Split the code into the smallest unit of
 * source code that carries meaningful value to a compiler such as `=` or `int`
 * Syntax analysis -> do the tokens follow the rules of the language together?
 * Semantic analysis -> find the meaning behind expressions.
 * `it b = a + 1;` fails at this step because it is unkown
 * Intermediate code generation -> Turn the source code into a light C++/mostly C version to work with
 * Optimization -> optimize intermediate code.
 * Machine code generation - output an object file(.o) ELF for linux/ PE for windows
 * - The object files have multiple sections(.text, .data, etc.) and a symbols table.
 * The symbols table is used to store mappings of strings to locations in the obj file
 * The compiler marks things as unknown at this stage for the linker to resolve
 *
 * -- Linking
 * - The job of the linker is to combine multiple object files into a single object file.
 * The linker combines object files, makes relative address changes, combines symbol tables,
 * and resolves unresolved symbols in the object file
 * - A library is similar to an exe file but it doesnt have a main() function.
 * A library can either be linked statically or dynamically.
 * When linked as static they become part of the final executable file.
 * When linked dynamically, the lib must be loaded into memory by the OS
 * to provide ability to call its functions at run time.
 * The loader must load the contents of the library into memory so that the actual location
 * can be found in mem and used by other programs as well
 * */

int main() {
    return 0;
}
