#include <iostream>
#include <string>

#include <qubedit/core/Qubedit.h>

namespace qe::application
{
	std::shared_ptr<QubeApplication> createApplication()
	{
		return std::make_shared<Qubedit>();
	}

	Qubedit::Qubedit() :
		qe::application::QubeApplication("Qubedit")
	{

	}

	void Qubedit::init()
	{
		std::cout << "Initializing Qubedit." << std::endl;
		//setApplicationName("Qubedit");
	}

	void Qubedit::start()
	{

	}

	void Qubedit::update()
	{

	}

	void Qubedit::render()
	{

	}

	void Qubedit::cleanup()
	{

	}
}
