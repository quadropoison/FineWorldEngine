#include <FineWorldEngine.h>

class SandBox : public FineWorldEngine::Application
{
public:
	SandBox() 
	{

	}

	~SandBox()
	{

	}

};

FineWorldEngine::Application* FineWorldEngine::CreateApplication()
{
	return new SandBox();
}