all: main.o
test: main.o
	./main.o
main.o:
	echo "������� �������:"
	ls
	g++ -o main.o main.cpp
	echo "����� �������:"
	ls
clean:
	echo "����� ��������:"
	ls
	rm -rf *.o
	echo "����� �������:"
	ls