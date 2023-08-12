CXX=g++
CXXFLAGS+= -Wall -Werror
CXXFLAGS+= -std=c++20 -O3 -save-temps
CXXFLAGS+= -fconcepts-diagnostics-depth=10
CXXINCS=-Isrc

clean:
	rm -rf building
	rm -rf dist
	rm -f test*

building:
	mkdir -p building

tests-rotl: src/tests-rotl.cpp building
	${CXX} -o  building/tests-rotl.app src/tests-rotl.cpp ${CXXFLAGS} ${CXXINCS}
	./building/tests-rotl.app

test: tests-rotl

stats:
	wc -l building/*.s
