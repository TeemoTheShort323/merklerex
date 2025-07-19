#include <iostream>

int main() {
    
    // print help
    std::cout << "1: Print Help " << std::endl;

    // print echange stats
    std::cout << "2: exchange stats " << std::endl;

    // make and offer
    std::cout << "3: make and offer " << std::endl;

    // make a build
    std::cout << "4: make a bid " << std::endl;

    // print Wallet
    std::cout << "5: Print Wallet " << std::endl;


    // next time step, continue
    std::cout << "6: continue " << std::endl;

    std::cout << "==========" << std::endl;
    std::cout << "Type in 1-6" << std::endl;


    int userOption;
    std::cin >> userOption;
    std::cout << "you chose" << userOption << std::endl;

    return 0;
}
