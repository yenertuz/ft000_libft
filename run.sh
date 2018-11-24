gcc -c -Iinc/ src/*.c
ar rc libft.a *.o
rm -rf *.o
ranlib libft.a
