INCS=-Isrc/include -I../hm_base/src/include -I/usr/include/json-c/
LIB_PATH=-L../hm_base/lib
LIB=-lhmbase -lm -lev -ljson-c -lcouchbase

all: base
	$(CC) -g $(INCS) $(LIB_PATH) src/*.c $(LIB) -o hm_lobbyserver

base:
	$(MAKE) -C ../hm_base target=lobby

clean:
	rm hm_lobbyserver
