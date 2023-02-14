all: help.exe strlength.exe strconcat.exe strcompare.exe 

help.exe: makef2.c mystrings.o
	gcc makef2.c mystrings.o -o makef2.exe

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

clean:
	del *.exe
	del *.o

strlength.exe: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe

strcompare.exe: strcompare.c mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe

strconcat.exe: strconcat.c mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe