
# GCC - GNU C/C++ Compiler

## GCC Command line options:

	-o output
	-E Stop after the preprocessing stage.
	-S Stop after the compilation stage.
	-c Stop after the assembler stage.
	-g enable debugging symbol
	-I <user defined header file path>
	-L <user defined library path>
	-l<library_name>
	-v Print the commands executed to run the stages of compilation.
	-Wall enable all warnings
	-Werror Convert warnings into errors
	D[MACRO] Define a MACRO
	-U[MACRO] Undefine a MACRO
	@file Read command line options from file. Options in file are separated by
	whitespace.
	-funsigned-char char type is treated as unsigned type.
	-fsigned-char char type is treated as signed type.


## Examples:

	+ hello/hello.c - compilation stages (preprocessor, compiler, assembler, linker)
	+ addsub/main.c,sub.c,add.c,myinclude.h - How to compile multiple source files.

