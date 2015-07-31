LDLIBS= -ldl

upper_line: upper_line.c upper.so
	gcc -o upper_line upper_line.c $(LDLIBS)

upper.so: upper.c upper.h
	gcc -fPIC -shared -o upper.so upper.c -I. 


