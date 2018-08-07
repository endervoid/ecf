#pragma once

#include "Component.h"
#include "ArrayComponent.h"


namespace ecf {
class EntityManager
		{
		public:
			EntityManager();
			~EntityManager();

			template<typename T>
			unique_ptr<Component<T>> getComponent() {
				cout << typeid(T).name() << endl;
				cout << typeid(T).raw_name() << endl;
				
				unique_ptr<ArrayComponent<T>> p =  unique_ptr<ArrayComponent<T>>(new ArrayComponent<T>(2));
				p->resize(10);
				p->setData(0,move(unique_ptr<T>(new T())));
				auto d = p->getData(0);
				d.setHealthValue(10);
				p->setData(0, d);
				auto d2 = p->getData(0);
				
				cout << d.getHealthValue() << endl;
				cout << d2.getHealthValue() << endl;
				return p;
			}

		};

}

