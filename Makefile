# Makefile for Lab3 project
BINDIR = bin
INCDIR = include
SRCDIR = src
OBJDIR = obj

all: $(OBJDIR)/main.o $(OBJDIR)/interface.o
	gcc -o $(BINDIR)/main $(OBJDIR)/main.o $(OBJDIR)/interface.o

$(OBJDIR)/main.o: $(SRCDIR)/main.c $(INCDIR)/interface.h
	gcc -c $(SRCDIR)/main.c -o $(OBJDIR)/main.o

$(OBJDIR)/interface.o: $(SRCDIR)/interface.c $(INCDIR)/interface.h
	gcc -c $(SRCDIR)/interface.c -o $(OBJDIR)/interface.o 