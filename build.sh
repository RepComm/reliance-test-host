gcc ./src/main.c -g -std=c99 -Wl,-rpath='${ORIGIN}' -Wall -Werror -o main

chmod +x ./main

echo done compiling