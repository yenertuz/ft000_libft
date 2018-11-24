# Mini Lib C

##### Header

__Author:__ Yener Tuz  
__Creation date__: 9/15/2018  

* A 42USA project

##### Intro

Rewriting a portion of the standard C library

##### Requirements

gcc, sh, a terminal, `<unist.d>`, `<stdlib.h>`, `<string.h>`  

##### Usage

* Run `run.sh` by entering `sh run.sh` in the command prompt  
  
* To link the library into another project:  
	1. clone this repository into your project `git clone https://github.com/yenertuz/mini_lib_c  libft`  
	2. `sh run.sh` to get the `libft.a` file  
	3. while compiling your project, link this library: `gcc -Ilibft/inc/ -Llibft -lft *.c`  
