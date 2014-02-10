all: wrong correct

correct: correct.c
	gcc -o ${@} correct.c

wrong: wrong.c
	gcc -o ${@} wrong.c
