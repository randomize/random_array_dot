
CFLAGS = -std=c++14 -Wall -Wextra -Wpedantic -O2 -g0 -v -march=native
LDFLAGS =  -fopenmp

random_array: random_array_dot.cpp
	clang++ $(CFLAGS) -o random_array random_array_dot.cpp $(LDFLAGS)

.PHONY: clean

clean:
	rm -f random_array

