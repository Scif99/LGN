#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace LGN
{
	class Log
	{
	public:
		static void Init();
		static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
		static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }

	private:
		inline static std::shared_ptr<spdlog::logger> s_CoreLogger;
		inline static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


////Core log macros
//#define LGN_CORE_TRACE(...)		::LGN::Log::GetCoreLogger()->trace()(__VA_ARGS__)
//#define LGN_CORE_INFO(...)		::LGN::Log::GetCoreLogger()->info()(__VA_ARGS__)
//#define LGN_CORE_WARN(...)		::LGN::Log::GetCoreLogger()->warn()(__VA_ARGS__)
//#define LGN_CORE_ERROR(...)		::LGN::Log::GetCoreLogger()->error()(__VA_ARGS__)
//
//
////Client log macros
//#define LGN_TRACE(...)			::LGN::Log::GetClientLogger()->trace()(__VA_ARGS__)
//#define LGN_INFO(...)			::LGN::Log::GetClientLogger()->info()(__VA_ARGS__)
//#define LGN_WARN(...)			::LGN::Log::GetClientLogger()->warn()(__VA_ARGS__)
//#define LGN_ERROR(...)			::LGN::Log::GetClientLogger()->error()(__VA_ARGS__)