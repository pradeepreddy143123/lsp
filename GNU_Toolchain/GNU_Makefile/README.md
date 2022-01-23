

# GNU Makefile

	Compilation of multiple source files is possible in 2 ways. 
	1. Manual Method. 
	2. Automation Method: uses GNU Make tool.  


## What is Makefile?

	Makefile help to compile multiple source files.
	Makefile is Dependency tracking utility.
	Make file look in to the current directory for a file by the name Makefile (recommended) or makefile.

## Makefile Advantages:

	Make is a utility for automatically building executable programs from source code.
	Makefile compiles only modified files based on compilation time (i.e., time stamp) because of this compilation time is reduced.


## Makefile Examples:

	source files: main.c,add.c,sub.c
	header files: myinclude.h

### Example 1: This is Basic example of Makefile.

	$ make
	default target is all

### Example 2: This example shows how to use,  clean and install targets, in Makefile.

	$ make clean (This command cleans object files, binaries and configuration files)
	$ make install  (This command copy the binaries in /usr/bin directory)


### Example 3: This Example shows how to use environment variables in Makefile

### Example 4: This Example shows how to create multiple Makefiles in each directory.

### Example 5: This Example shows how to give user defined name to Makefile.
