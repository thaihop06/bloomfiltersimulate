#include <iostream>
#include "app/menu.hpp"

void showMenu(BloomFilter &bf) {
    int choice;
    int id;

    while (true) {
        std::cout << "\n===== BLOOM FILTER MENU =====\n";
        std::cout << "1. Add ID\n";
        std::cout << "2. Check ID\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter ID: ";
            std::cin >> id;
            bf.add(id);
            std::cout << "ID added.\n";
        }
        else if (choice == 2) {
            std::cout << "Enter ID: ";
            std::cin >> id;
            if (bf.possiblyContains(id)) {
                std::cout << "Result: ID MAY exist.\n";
            } else {
                std::cout << "Result: ID does NOT exist.\n";
            }
        }
        else if (choice == 0) {
            break;
        }
        else {
            std::cout << "Invalid choice!\n";
        }
    }
}
