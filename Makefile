all:
	gcc one-punch.c -lraylib -lGL -lm -pthread -ldl -lX11 -o one-punch
