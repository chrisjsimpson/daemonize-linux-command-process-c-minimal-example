build:
	rm a.out | true
	gcc -Os ./main.c
	strip -s -R .comment -R .gnu.version a.out
run:
	./a.out
	
