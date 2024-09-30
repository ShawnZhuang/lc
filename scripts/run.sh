rm ./test -rf
g++ --std=c++17 -include include/leetcode.h  -Iinclude -o test $*
./test