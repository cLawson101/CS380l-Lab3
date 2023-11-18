
# Make sure to add -static
apager: apager.cpp my_elf.h switch.h
	g++ -o apager.exe apager.cpp switch.S

run-apager: apager
	./apager.exe a.out hello world

dpager: dpager.cpp my_elf.h switch.h
	g++ -o dpager.exe dpager.cpp switch.S

run-dpager: dpager
	./dpager.exe a.out hello world

hpager: hpager.cpp my_elf.h switch.h
	g++ -o hpager.exe hpager.cpp switch.S

run-hpager: hpager
	./hpager.exe a.out hello world

dynamic: dynamic.cpp
	gcc -shared -fPIC -o my_malloc.so my_malloc.c
	gcc -o dynamic.exe dynamic.cpp

run-dynamic: dynamic
	LD_PRELOAD=./my_malloc.so ./dynamic.exe
	
clean:
	rm *.exe