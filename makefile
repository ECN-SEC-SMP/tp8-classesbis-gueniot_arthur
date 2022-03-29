#Makefile
#Created by Corentin and Rémy 29/03/2022

main_classe.out : main_classe.o Animal.o Attaque.o Lion.o Loup.o Ours.o Pierre.o
	g++ -o out/main_classe.out out/main_classe.o out/Animal.o out/Attaque.o out/Lion.o out/Loup.o out/Ours.o out/Pierre.o

main_classe.o : main_classe.cpp
	g++ -c main_classe.cpp -o out/main_classe.o

Animal.o : Animal.cpp
	g++ -c Animal.cpp -o out/Animal.o

Attaque.o : Attaque.cpp
	g++ -c Attaque.cpp -o out/Attaque.o

Lion.o : Lion.cpp
	g++ -c Lion.cpp -o out/Lion.o

Loup.o : Loup.cpp
	g++ -c Loup.cpp -o out/Loup.o

Ours.o : Ours.cpp
	g++ -c Ours.cpp -o out/Ours.o

Pierre.o : Pierre.cpp
	g++ -c Pierre.cpp -o out/Pierre.o



