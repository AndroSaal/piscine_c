rm -f libft.a
find . -name "*.c" -exec gcc -Wextra -Werror -Wall -c {} \;
ar rc libft.a *.o
ranlib libft.a
rm -f *.o