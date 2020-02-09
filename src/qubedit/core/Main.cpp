#include <nanogui/nanogui.h>
#include <iostream>
using namespace nanogui;

int main()
{
	nanogui::init();

	nanogui::Screen* s = new Screen(Vector2i(100, 100), "Hello!");
	s->set_visible(true);

	std::cout << "hello world!" << std::endl;
	std::cin.get();
	return 0;
}