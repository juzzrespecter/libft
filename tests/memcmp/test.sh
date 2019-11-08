gcc -Wall -Werror -Wextra -c main.c
gcc -o main main.o -L../../ -lft
./main "asdf" "asdf"
./main "asdf" "asdfg"
./main "asdfg" "asdf"
./main "asdfgh" "asdfgj"
./main "arsdf" "asdfr"
./main "" "asdf"
./main "asdf" ""
./main "" ""
./main "t\200" "t\0"

