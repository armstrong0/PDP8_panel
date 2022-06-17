all: gen_pdp8_svg gen_pdp8_backing my_pdp8e.svg pdp8_backing.svg

gen_pdp8_svg: pdp8_panel.cpp simple_svg_1.0.0.hpp
	g++ -std=c++11 pdp8_panel.cpp -o gen_pdp8_svg

my_pdp8e.svg: gen_pdp8_svg
	./gen_pdp8_svg

gen_pdp8_backing: pdp8_backing.cpp simple_svg_1.0.0.hpp
	g++ -std=c++11 pdp8_backing.cpp -o gen_pdp8_backing

pdp8_backing.svg: gen_pdp8_backing
	./gen_pdp8_backing
clean:
	rm -rf gen_pdp8_svg
	rm -rf my_pdp8e.svg
	rm -rf gen_pdp8_backing
	rm -rf pdp8_backing.svg


