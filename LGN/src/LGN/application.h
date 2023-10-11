#pragma once


namespace LGN 
{
	class Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Defined in client
	Application* CreateApplication();

}