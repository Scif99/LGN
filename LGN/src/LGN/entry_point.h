#pragma once

#include "log.h"

extern LGN::Application* LGN::CreateApplication();

int main(int argc, char** argv)
{
	LGN::Log::Init();
	//LGN_INFO("init app");
	LGN::Log::GetClientLogger()->info("Initialized Application Logger!");

	auto app = LGN::CreateApplication();
	app->Run();
	delete app; 
}