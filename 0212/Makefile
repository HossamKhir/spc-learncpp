build:
	mkdir build
	g++ -I ./include/ -o build/main -fdiagnostics-color=always -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -std=c++17 src/*cpp

clean:
	rm -fr build

clean-build:
	make clean; make build