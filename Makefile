compil: assemble link

assemble:
	g++ -c -g main.cpp metaClass/* -I metaClass/

link :
	g++ -o a.out *.o
