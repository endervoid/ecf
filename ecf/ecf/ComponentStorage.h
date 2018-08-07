#pragma once
#include "Component.h"

namespace ecf {
	template<typename T>
	class ComponentStorage : public Component<T> {
	public:		
		virtual ~ComponentStorage() {};
		virtual void resize(int size) = 0;

	};
}
