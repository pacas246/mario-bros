bin/programa : src/main.cpp
	g++ src/.cpp -include -o bin/programa

ejecutar: bin/programa
	./bin/programa 

clean : bin/programa
    rm bin/programa