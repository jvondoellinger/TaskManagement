//
// Created by jorge on 31/08/2025.
//

#ifndef UNTITLED_ITASK_H
#define UNTITLED_ITASK_H
#include <chrono>
#include <string>

class ITask {
protected:
    int id;
    std::string title;
    std::string task;
    std::chrono::system_clock::time_point createdAt;
    std::chrono::system_clock::time_point modifiedAt;
    ~ITask() = default;
public:
    ITask(std::string title, std::string task)
    :   title(std::move(title)),
        task(std::move(task)),
        createdAt(std::chrono::high_resolution_clock::now()),
        modifiedAt(std::chrono::high_resolution_clock::now()) {}
    ITask(ITask&& other)
    :   id(other.id),
        title(std::move(other.title)),
        task(std::move(other.task)),
        createdAt(other.createdAt),
        modifiedAt(std::chrono::high_resolution_clock::now()) {}


    virtual int getId() = 0;
    virtual std::string getTitle() = 0;
    virtual std::string getTask() = 0;
    virtual std::chrono::system_clock::time_point getCreatedAt() = 0;
    virtual std::chrono::system_clock::time_point getModifiedAt() = 0;
};

#endif //UNTITLED_ITASK_H