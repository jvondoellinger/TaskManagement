//
// Created by jorge on 30/08/2025.
//

#include <iostream>
#include <ostream>

namespace views {
    class MainOptions {
        public:
            static void show_main_options() {
                std::cout << "Select an option to continue:\n";
                std::cout << "[1] Create a new task\n";
                std::cout << "[2] Finish task\n";
                std::cout << "[3] Delete task\n";
                std::cout << "[4] Show tasks\n";
                std::cout << "[5] Show finished tasks\n";
                std::cout << "[6] Show deleted tasks\n";
                std::cout << "[0] Leave\n";
            }
    };

    class CaptureMainOption {
        public:
            static int show_capture_main_options() {
                std::string captured = "0";
                getline(std::cin, captured);
                return  std::stoi(captured);
            }
    };

    class MainCoordinator {
    public:
        static void coordinate() {
            while (true) {
                MainOptions::show_main_options();
                int opt = CaptureMainOption::show_capture_main_options();
                if (opt == 0) {
                    break;
                }

            }
        }
    private:
        static void requestTaskDataToUser() {

        }
    };

    class MainView {
        public:
            void run() {
                while (true) {
                    MainCoordinator::coordinate();
                }
            }
    };
}
