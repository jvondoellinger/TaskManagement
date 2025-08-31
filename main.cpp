#include <array>
#include <iostream>

void start_loop() {
    while (true) {
        std::string want;
        std::cout << "Want continue on manage your tasks? (Y/N)" << std::endl;
        getline(std::cin, want);
        if (want == "Y") {

        } else if (want == "N") {
            break;
        }
    }
}

int main(){
    start_loop();
    return 0;
}

