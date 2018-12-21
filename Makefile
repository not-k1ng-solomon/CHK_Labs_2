all: main.o
test: main.o
	./main.o
main.o:
	echo "Вначале введите:"
	ls
	g++ -o main.o main.cpp
	echo "Потом введите:"
	ls
clean:
	echo "Перед очисткой:"
	ls
	rm -rf *.o
	echo "После очистки:"
	ls