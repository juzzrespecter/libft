gcc -Wall -Werror -Wextra -c main.c
gcc -o main main.o -L../../ -lft
./main "1234"
./main " 2345"
./main "   +4567"
./main "     -5678"
./main "  +-234"
./main "   ++345"
./main "   0123"
./main "  1l23"
./main "   l123"
./main ""
