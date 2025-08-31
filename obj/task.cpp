//
// Created by jorge on 30/08/2025.
//

#include <chrono>
#include <string>
#include <utility>

#include "itask.h"



namespace obj {
    class Task : public ITask {
    public:
        Task(const std::string &title, const std::string &task)
            : ITask(title, task) {
        }

        explicit Task(Task &&other)
            : ITask(std::move(other)) {
        }


        int getId() override {
            return id;
        }

        std::string getTitle() override {
            return title;
        }

        std::string getTask() override {
            return task;
        }

        std::chrono::system_clock::time_point getCreatedAt() override {
            return createdAt;
        }

        std::chrono::system_clock::time_point getModifiedAt() override {
            return modifiedAt;
        }
    };
} // obj