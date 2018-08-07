#pragma once

#include "IComponentData.h"

namespace ecf {

	class HealthComponent : public IComponentData
	{
	public:
		HealthComponent();
		virtual ~HealthComponent();

		int getHealthValue();
		void setHealthValue(int value);
	private:
		int healthValue;
	};

}

