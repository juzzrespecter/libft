gcc -Wall -Werror -Wextra -c main.c
gcc -o main main.o -L../../ -lft
touch archivo.txt
PATH_FILE=$(ls -1 | grep .txt)
./main "$PATH_FILE" "-2147483648"
cat $PATH_FILE
rm main.o main
