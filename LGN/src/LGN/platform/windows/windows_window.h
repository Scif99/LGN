#pragma once

#include "LGN/window.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace LGN
{

	class WindowsWindow : public Window
	{
	public:
		WindowsWindow(const WindowProps& props = WindowProps());

		~WindowsWindow();

		void OnUpdate() override;


		unsigned int Width() const override
		{
			return m_data.width;
		}
		unsigned int Height() const override
		{
			return m_data.height;
		}



	private:
		GLFWwindow* m_window;
		unsigned int m_width, m_height;

		struct WindowData
		{
			std::string title;
			unsigned int width, height;
		};
		WindowData m_data;
	};

}