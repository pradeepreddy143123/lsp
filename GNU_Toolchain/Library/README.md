
<!-- vim-markdown-toc GFM -->

* [1. Static Library vs Dynamic Library](#1-static-library-vs-dynamic-library)
* [2. Static Linker vs Dynamic Linker](#2-static-linker-vs-dynamic-linker)
* [3. Procedure for Creation of static libraries](#3-procedure-for-creation-of-static-libraries)
* [4. Procedure for Creation of Dynamic libraries (Shared Libraries)](#4-procedure-for-creation-of-dynamic-libraries-shared-libraries)
* [5. Telling GCC where to find the User defiend header file:](#5-telling-gcc-where-to-find-the-user-defiend-header-file)
* [6. Telling GCC where to find the shared library:](#6-telling-gcc-where-to-find-the-shared-library)
* [7. Making the library available at runtime:](#7-making-the-library-available-at-runtime)
* [8.Examples:](#8examples)

<!-- vim-markdown-toc -->

## 1. Static Library vs Dynamic Library

	Size is Different
	Static Linkers use static libraries which are appended the executable image at build time.
	Dynamic Linkers use dynamic libraries which carrys symbolic reference in exectable and physically loaded at runtime

## 2. Static Linker vs Dynamic Linker

	Executale and Linkable Format (ELF) is a standard binary file format.
	$ readelf -a hello | more (readelf is a details of ELF file)

	creation of exec file using Dynamic linker
	$ gcc hello.c -o hello (by default)

	creation of exec file using Static linker
	$ gcc -static hello.c -o hello

## 3. Procedure for Creation of static libraries

	Step1: Implementaion of Source code.
		add.c
		sub.c

	Step2: Compile source code up to object file.
		$ gcc -c add.c sub.c

	Step3: Use UNIX archive tools create library image.
		$ ar -rcs libcalc.a add.o sub.o

## 4. Procedure for Creation of Dynamic libraries (Shared Libraries)

	Step1: Implementaion of Source code.
		add.c
		sub.c
	
	Step2: Compile source to create position independent relocatale.
		$ gcc -c -fpic add.c
		$ gcc -c -fpic sub.c
	Step3:
		$ gcc -shared -o libcalc.so add.o sub.o

## 5. Telling GCC where to find the User defiend header file:

	-I <USER DEFINED HEADER PATH>

## 6. Telling GCC where to find the shared library:
	
	Why -l<library name>, -L and LD_LIBRARY_PATH?
	-l<library name> means compiler search the library
	-L <path> means gcc compiler checks libraries at compilation time in path location.

## 7. Making the library available at runtime:

	LD_LIBRARY_PATH=<path> means binary execution time checks the library PATH.
	$ file libcalc.a
	libourown.a: current ar archive

	$ file libcalc.so
	libourown.so: ELF 32-bit LSB shared object, Intel 80386, version 1 (SYSV), dynamically linked, not stripped

## 8.Examples:

	libraries/addsub_lib: how to create static and dynamic libraries

