#include "LGN/platform/windows/windows_window.h"


namespace LGN
{

	static bool s_GLFWInitialised = false;

	Window* Window::Create(const WindowProps& props)
	{
		return new WindowsWindow(props);
	}

	WindowsWindow::WindowsWindow(const WindowProps& props)
	{
		m_data.title = props.title;
		m_data.height = props.height;
		m_data.width = props.width;

		LGN::Log::GetClientLogger()->info("Creating window {0}, {1}, {2}", props.title, props.width, props.height);


		if (!s_GLFWInitialised)
		{
			int success = glfwInit();
			assert(success && "Could not initialise GLFW\n");
			s_GLFWInitialised = true;
		}


		m_window = glfwCreateWindow(m_data.width, m_data.height, m_data.title.c_str(), nullptr, nullptr);

		if (!m_window)
		{
			assert("Failed to create window!\n");
		}
		glfwMakeContextCurrent(m_window);
		glfwSetWindowUserPointer(m_window, &m_data);
		//VSync;

		// glad: load all OpenGL function pointers
		// ---------------------------------------
		int loaded_glad = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		if (!loaded_glad)
		{
			assert("Could not initialise GLAD\n");
		}

	}


	WindowsWindow::~WindowsWindow()
	{
		glfwDestroyWindow(m_window);
	}

	void WindowsWindow::OnUpdate() 
	{
		glfwPollEvents();
		glfwSwapBuffers(m_window);
	}


}