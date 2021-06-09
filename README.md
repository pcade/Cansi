Here my solutions for tasks from the book "C Programming Language: Ansi C by Brian W. Kernighan,
Dennis M. Ritchie" rus.edt.

All code do in Ubuntu Linux.            

Здесь я предоставляю свои решения по книге "Кернигина и Ритчи - Язык программирования С" рус.изд.

Вся работа произведена на ос Ubuntu Linux.

changes:

all:
   main() changed to void main()

1.5.2/example.c
  book version:
    while (getchar() != EOF)
      nc++;
	  printf("%ld\n", nc++);

1.5.3/example.c
  book version:
    while ((c = getchar()) != EOF)
      if (c == '\n')
      	nl++;
	  printf("%d\n", nl);
