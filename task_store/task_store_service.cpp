//
// Created by jorge on 30/08/2025.
//

#include <array>

#include "itask_store_service.h"

class TaskStore : public ITaskStore {
    public:
        std::array<ITask*, 8> tasks;

        void put(ITask &task) override {
            tasks.at(task.()) = &task;
        }
        void remove(ITask &task) override;
        void get(int index) override;
        ~TaskStore() override;
};
