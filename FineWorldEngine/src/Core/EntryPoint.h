#pragma once

#ifdef FWE_PLATFORM_WINDOWS

extern FineWorldEngine::Application* FineWorldEngine::CreateApplication();

int main(int argc, char** argv) {

	printf("\n\tWelcome to Fine World Engine\r\n\n\tWork in progress...\n");
	auto app = FineWorldEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // FWE_PLATFORM_WINDOWS
