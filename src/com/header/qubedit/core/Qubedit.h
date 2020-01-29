#ifndef SLOVERSE_CORE_SLOVERSE_H_
#define SLOVERSE_CORE_SLOVERSE_H_

#include <qubeengine/core/QubeApplication.h>

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

	};

	std::shared_ptr<QubeApplication> createApplication();
}

#endif