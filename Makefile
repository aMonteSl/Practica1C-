# *****************************************************
# NOTES: it uses '>' as prefix of my recipes (.RECIPEPREFIX is set in line 16)
# since all actions of every Makefile's rule are identified by tabs and I do not
# use tabs in my file editor. Otherwise, I will get the 'missing separator' error.
#
# To check whether a tab character is used, run: cat -e -t -v Makefile
# It shows the presence of tabs (-t) with ^I and line endings (-e) with $
#
# make      # Compile all cpp files and generate executables
# make clean # Remove object files and executables
#
# *****************************************************

CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

# List of source files
SRCS = ejercicio1.cpp ejercicio2a.cpp ejercicio3.cpp ejercicio6.cpp ejercicio8b.cpp \
       ejercicio10.cpp ejercicio2b.cpp ejercicio4.cpp ejercicio7.cpp ejercicio8c.cpp \
       ejercicio10pro.cpp ejercicio2c.cpp ejercicio5.cpp ejercicio8a.cpp ejercicio9.cpp

# List of generated object files
OBJS = $(SRCS:.cpp=.o)

# Rules to compile each cpp file individually
all: $(SRCS:.cpp=)

%: %.cpp
>$(CC) $(CFLAGS) -o $@ $<

clean:
>rm -f *.o $(SRCS:.cpp=)

