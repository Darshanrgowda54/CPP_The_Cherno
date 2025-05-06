#include "entity.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    std::cout<<"----------------------Unique_ptr---------------------"<<std::endl;
    {
        std::unique_ptr<Entity> entity(new Entity());
        std::unique_ptr<Entity> entity1 = std::make_unique<Entity>();
        //std::unique_ptr<Entity> e1 = entity1; /// Can't copy ... Because the copy constructor and copy assigment operator are deleted.
        entity1->print();
    }


    std::cout<<"----------------------Shared_ptr---------------------"<<std::endl;
    {
        std::shared_ptr<Entity> entity2;
        {
            std::shared_ptr<Entity> entity1;
            {
                std::shared_ptr<Entity> entity = std::make_shared<Entity>();
                entity1 = entity;
                entity2 = entity;
                cout << entity.use_count()<<std::endl;   /// Reference Count
            }
            cout << entity1.use_count()<<std::endl;
        }
        cout << entity2.use_count()<<std::endl;
    }

    // Weak_ptr there will be not refer count.
    std::cout<<"----------------------Weak_ptr---------------------"<<std::endl;
    {
        std::weak_ptr<Entity> entity1;
        {
            std::shared_ptr<Entity> entity = std::make_shared<Entity>();
            entity1 = entity;
            cout << entity.use_count()<<std::endl;
        }
        cout << entity1.use_count()<<std::endl;
    }
    return 0;
}
