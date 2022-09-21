all: ponto.o circulo.o main.o
	gcc ponto.o circulo.o main.o -o p_e_c -lm -std=c99 -Wall

ponto.o: 
	gcc -c ponto.c -o ponto.o

circulo.o: 
	gcc -c circulo.c -o circulo.o

main.o: 
	gcc -c main.c -o main.o

clean:
	rm *.o p_e_c

run:
	./p_e_c
