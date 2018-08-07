#include "stdafx.h"
#include "HealthComponent.h"

namespace ecf {


	HealthComponent::HealthComponent()
	{
	}


	HealthComponent::~HealthComponent()
	{
	}

	void HealthComponent::setHealthValue(int value) {
		healthValue = value;

	}

	int HealthComponent::getHealthValue() {
		return healthValue;
	}

}
