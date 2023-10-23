#pragma once

#include "log.h"

#include <string>


namespace LGN
{
	struct WindowProps
	{
		std::string title;
		unsigned int width, height;

		WindowProps(
					std::string title = "Window",
					unsigned int width = 1280,
					unsigned int height = 720) 
			: title{"Window"}, width{1280}, height{720} {}
	};

	class Window
	{
	public:
		virtual ~Window() {}
		virtual void OnUpdate() = 0;

		virtual unsigned int Width() const = 0;
		virtual unsigned int Height() const = 0;

		static Window* Create(const WindowProps & = WindowProps());
	};

}

