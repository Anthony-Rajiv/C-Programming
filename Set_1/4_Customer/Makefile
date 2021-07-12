SRC = customer.cpp\
test.cpp


all: $(SRC)
	g++ $^ -lgtest -lgtest_main -lpthread -o all.out

run: all
	./all.out

memory_leakage: all
	valgrind ./all.out

coverage:
    g++ -fprofile-arcs -ftest-coverage $(SRC) -lgtest -lgtest_main -lpthread -o all.out
    ./all.out
    gcov -a box.cpp

clean:
	rm -rf *.o *.out *.gcd *.gcno *.gcov*