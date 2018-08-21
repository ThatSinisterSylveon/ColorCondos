ColorCondos: subdirectories main.o
	g++ main.o Engine.o sprite.o texture.o mouse.o  -o ColorCondos -lGL -lGLU -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi -ldl -lXinerama -lXcursor -lSOIL
main.o: main.cpp
	g++ -c main.cpp
subdirectories:
	make -C Engine
	make -C Engine/Graphics
	make -C Engine/IO
clean:
	rm *.o ColorCondos

