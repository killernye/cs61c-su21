CC=gcc
CFLAGS=-Wall -std=c99 -g

all: linked_list bit_ops vector

linked_list: linked_list.o test_linked_list.o
	$(CC) -o linked_list linked_list.o test_linked_list.o

linked_list.o: linked_list.c linked_list.h
	$(CC) $(CFLAGS) -c linked_list.c

test_linked_list.o: test_linked_list.c linked_list.h
	$(CC) $(CFLAGS) -c test_linked_list.c

bit_ops: bit_ops.o test_bit_ops.o
	$(CC) -o bit_ops bit_ops.o test_bit_ops.o

bit_ops.o: bit_ops.c bit_ops.h
	$(CC) $(CFLAGS) -c bit_ops.c

test_bit_ops.o: test_bit_ops.c bit_ops.h
	$(CC) $(CFLAGS) -c test_bit_ops.c

vector: vector.o test_vector.o
	$(CC) -o vector vector.o test_vector.o

vector.o: vector.c vector.h
	$(CC) $(CFLAGS) -c vector.c vector.h

test_vector.o: test_vector.c vector.h
	$(CC) $(CFLAGS) -c test_vector.c vector.h

my_test_bit: bit_ops.o test_bit.o 
	$(CC) -o my_test_bit bit_ops.o test_bit.o

test_bit.o: test_bit.c bit_ops.h
	$(CC) $(CFLAGS) -c test_bit.c bit_ops.h

clean:
	rm -f *.o *.h.gch
	rm bit_ops linked_list vector my_test_bit