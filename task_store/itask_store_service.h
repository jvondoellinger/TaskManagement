//
// Created by jorge on 30/08/2025.
//

#include "../obj/itask.h"  // <- inclui o header


#ifndef UNTITLED_TASK_STORE_SERVICE_H
#define UNTITLED_TASK_STORE_SERVICE_H;

class ITaskStore {
    public:
        virtual void put(ITask& task) = 0;
        virtual void remove(ITask& task) = 0;
        virtual void get(int index) = 0;
        virtual ~ITaskStore() = default;
};


#endif //UNTITLED_TASK_STORE_SERVICE_H