CC := g++
CCFLAG := -std=c++17 -O2 -Wall -Wextra

%:%.cpp
	$(CC) $(CCFLAG) $< -o a.out
	./a.out