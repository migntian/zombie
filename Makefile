.PHONY: clean

main: jiangshi.c
	gcc $^ -o $@

clean:
	rm main
