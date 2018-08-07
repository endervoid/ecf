#pragma once

#include <string>
#include "IComponentData.h"
#include <memory>

using namespace std;

namespace ecf {
	template<typename T>
	class Component {
	public:
		virtual  ~Component() {};
		virtual T& getData(int id) = 0;
	private:
		
		
	};

}
