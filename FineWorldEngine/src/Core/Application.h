#pragma once
#include "Core.h"

namespace FineWorldEngine {

	class FWE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();		
	};	

	Application* CreateApplication();
}
