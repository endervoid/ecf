// ecf.cpp : Defines the entry point for the console application.
//

#include <memory>
#include "stdafx.h"
#include "Component.h"
#include "EntityManager.h"
#include "ecf.h"

using namespace std;
using namespace ecf;

int main()
{
	EntityManager em;
	em.getComponent<HealthComponent>();
	auto t = new ArrayComponent<int>(2);
	
	//std::unique_ptr<IComponent> c(new ArrayComponent<int>());
    return 0;
}

