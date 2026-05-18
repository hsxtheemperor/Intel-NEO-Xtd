.PHONY: build clean run

build:
	@mkdir -p bin
	gcc src/main.c -o bin/quant_engine -lOpenCL

clean:
	rm -rf bin/quant_engine

run:
	./bin/quant_engine