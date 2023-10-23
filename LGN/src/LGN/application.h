#pragma once

#include "window.h"

namespace LGN 
{
	class Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_window;
		bool m_running = true;
	};


	//Defined in client
	Application* CreateApplication();
}