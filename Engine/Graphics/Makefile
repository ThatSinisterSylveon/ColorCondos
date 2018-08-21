all: sprite.o texture.o
	mv sprite.o ../..
	mv texture.o ../..
sprite.o: sprite.cpp sprite.h texture.h
	g++ -c sprite.cpp 
texture.o: texture.cpp texture.h
	g++ -c texture.cpp
clean:
	rm *.o ColorCondos
