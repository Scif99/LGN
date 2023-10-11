#include <lgn.h>

class Sandbox : public LGN::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

LGN::Application* LGN::CreateApplication()
{
	return new Sandbox();
}