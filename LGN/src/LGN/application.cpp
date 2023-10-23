#include "application.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace LGN 
{
	Application::Application()
	{

		m_window = std::unique_ptr<Window>(Window::Create());

	}

	Application::~Application()
	{

	}

	void Application::Run() 
	{
		while(m_running) 
		{
			glClearColor(1.f, 0.f, 0.f, 0.f);
			glClear(GL_COLOR_BUFFER_BIT);
			m_window->OnUpdate();
		}
	}
}