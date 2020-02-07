#include <qubedit/core/Qubedit.h>

#include <string>

#include <GLFW/glfw3.h>
#include <glm/vec3.hpp>

#include <nanogui/nanogui.h>
#include <iostream>
using namespace nanogui;

namespace qe::application
{
	std::shared_ptr<QubeApplication> createApplication()
	{
		return std::make_shared<Qubedit>();
	}
	
	Qubedit::Qubedit() :
		qe::application::QubeApplication("Qubedit")
	{
		//glfwInit();
		nanogui::init();
	}
	
	void Qubedit::init()
	{
		std::cout << "Initializing Qubedit." << std::endl;
		setApplicationName("Qubedit");

		testScreen = std::make_shared<Screen>(Vector2i(950, 540), "Hello, World!");
	}
	
	void Qubedit::start()
	{
		testScreen->set_visible(true);
	}
	
	void Qubedit::update()
	{
	
	}
	
	void Qubedit::render()
	{
	
	}
	
	void Qubedit::cleanup()
	{
		std::cin.get();
	}
}
