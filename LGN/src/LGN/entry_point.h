#pragma once

extern LGN::Application* LGN::CreateApplication();

int main(int argc, char** argv)
{
	auto app = LGN::CreateApplication();
	app->Run();
	delete app; 
}