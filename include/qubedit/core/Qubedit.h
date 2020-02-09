#ifndef QUBEDIT_CORE_QUBEDIT_H_
#define QUBEDIT_CORE_QUBEDIT_H_

#include <qubeengine/core/QubeApplication.h>

namespace nanogui
{
	class Screen;
}

namespace qe::application
{
	class Qubedit : public qe::application::QubeApplication
	{
	public:
		Qubedit();
		virtual ~Qubedit() {}
	
		virtual void init();
		virtual void start();
		virtual void update();
		virtual void render();
		virtual void cleanup();
	
	private:
		std::shared_ptr<nanogui::Screen> testScreen;
	};
	
	std::shared_ptr<QubeApplication> createApplication();
}

#endif