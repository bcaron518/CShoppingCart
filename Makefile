CC = gcc
CFLAGS = -Wall -g
OBJ = main.o signup.o shop.o validation.o

all: shopcart

shopcart: $(OBJ)
	$(CC) $(CFLAGS) -o shopcart $(OBJ)

main.o: main.c main.h
	$(CC) $(CFLAGS) -c main.c

signup.o: signup.c main.h validation.h
	$(CC) $(CFLAGS) -c signup.c

shop.o: shop.c main.h shop.h
	$(CC) $(CFLAGS) -c shop.c

validation.o: validation.c main.h validation.h
	$(CC) $(CFLAGS) -c validation.c

clean:
	rm -f *.o shopcart
