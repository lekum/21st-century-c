CFLAGS=`python2.7-config --cflags`
LDFLAGS=`python2.7-config --ldflags`

ideal.so: py_ideal.o ideal.o
	gcc -fPIC -shared -o ideal.so py_ideal.o ideal.o $(LDFLAGS)

py_ideal.o: py/ideal.py.c ideal.h
	gcc -fPIC -c -o py_ideal.o $(CFLAGS) py/ideal.py.c

ideal.o: ideal.h ideal.c
	gcc -fPIC -c -o ideal.o ideal.c
