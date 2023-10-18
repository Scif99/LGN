#include "log.h"

namespace LGN
{
	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$"); // timestamp, logger type, message
		s_CoreLogger = spdlog::stdout_color_mt("LGN");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}
}