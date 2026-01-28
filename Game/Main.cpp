#include <iostream>

#include "Engine/Engine.h"
#include "Level\TestLevel.h"
#include "Actor\TestActor.h"

using namespace Wanted;

int main()
{
	/*Wanted::Engine engine;
	engine.SetNewLevel(new TestLevel());
	engine.Run();*/

	TestLevel* level = new TestLevel();
	Actor* actor = new TestActor();
	TestActor* testActor = new TestActor();

	/*if (actor->Is(testActor))
	{
		std::cout << "actor is TestActor Type\n";
	}
	else
	{
		std::cout << "actor is not TestActor Type\n";
	}*/

	// 두 방식이 동일함 
	TestActor* testActor2 = dynamic_cast<TestActor*>(actor);
	TestActor* testActor = actor->As<TestActor>();
	if (testActor)
	{
		std::cout << "actor is TestActor type.\n";
	}
	else
	{
		std::cout << "actor is not TestActor type.\n";
	}
}