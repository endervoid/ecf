#pragma once
#include "Component.h"
#include <vector>
#include "HealthComponent.h"
#include "ComponentStorage.h"

namespace ecf {

	template<typename T>
	class ArrayComponent : public  ComponentStorage<T>
	{
	public:
		ArrayComponent(int size) :data(size) {
			

		};
		virtual ~ArrayComponent() {};

		virtual void setData(int id, unique_ptr<T>  v) {
			data.at(id) = move(v);
		}

		virtual void setData(int id, T& v) {
			data.at(id) = unique_ptr<T>(new T(v));
		}


		virtual T& getData(int id) {
			int internalId = id;

			//TODO getInternalId (mapping from external id to internal id)

			return *data.at(internalId);
			//return unique_ptr<IComponentData>(nullptr);
			//return unique_ptr<IComponentData>(new HealthComponent());
		};

		virtual void resize(int size) {
			data.resize(size);
		}
	private:
		vector<unique_ptr<T>> data;
	};

}

