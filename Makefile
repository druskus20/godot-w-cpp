all: fmt clean-build

run: fmt build
	cd rogue && godot

clean-build:
	scons -c platform=linux
	bear -- scons platform=linux

fmt: 
	clang-format -i ./src/*.cpp
	clang-format -i ./src/*.h

build: 
	scons platform=linux

clean:
	scons -c platform=linux


.PHONY: clean

