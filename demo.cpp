#include <iostream>
#include <thread>
#include <chrono>

bool validateLogin(const std::string& username, const std::string& password) {
    return (username == "MR" && password == "123");
}

int main() {
    std::string name, username, password;

    std::cout << "Please Enter your name: ";
    std::cin >> name;

    while (true) {
        std::cout << "Hello, " << name << "! Please Enter Username And Password!..\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (validateLogin(username, password)) {
            std::cout << "Welcome, " << name << "! You managed to enter the page of my heart. 😉\n";
            break;
        } else {
            std::cout << "Ups, " << name << ". It seems that your heart is not ready to accept me. 😅\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "Let's try again 😅\n";
        }
    }

    while (true) {
        std::cout << "Do you want to be my girlfriend??" << std::endl;
        std::cout << "Yes/No" << std::endl;

        std::string answer;
        std::cin >> answer;

        if (answer == "Yes") {
            std::cout << "____________________██████\n"
             "_________▓▓▓▓____█████████\n"
             "__ Ƹ̵̡Ӝ̵̨̄Ʒ▓▓▓▓▓=▓____▓=▓▓▓▓▓\n"
             "__ ▓▓▓_▓▓▓▓░●____●░░▓▓▓▓\n"
             "_▓▓▓▓_▓▓▓▓▓░░__░░░░▓▓▓▓\n"
             "_ ▓▓▓▓_▓▓▓▓░░♥__♥░░░▓▓▓\n"
             "__ ▓▓▓___▓▓░░_____░░░▓▓\n"
             "▓▓▓▓▓____▓░░_____░░▓\n"
             "_ ▓▓____ ▒▓▒▓▒___ ████\n"
             "_______ ▒▓▒▓▒▓▒_ ██████\n"
             "_______▒▓▒▓▒▓▒ ████████\n"
             "_____ ▒▓▒▓▒▓▒_██████ ███\n"
             "_ ___▒▓▒▓▒▓▒__██████ _███\n"
             "_▓▓X▓▓▓▓▓▓▓__██████_ ███\n"
             "▓▓_██████▓▓__██████_ ███\n"
             "▓_███████▓▓__██████_ ███\n"
             "_████████▓▓__██████ _███\n"
             "_████████▓▓__▓▓▓▓▓▓_▒▒\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "__████████▓___▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒____▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "_______▒▒▒▒▒_____ ▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "________▒▒▒▒______▓▓▓▓▓\n"
             "________█████____█████\n"
             "_'▀█║────────────▄▄────────────▄──▄_\n"
             "──█║───────▄─▄─█▄▄█║──────▄▄──█║─█║\n"
             "──█║───▄▄──█║█║█║─▄║▄──▄║█║─█║█║▄█║\n"
             "──█║──█║─█║█║█║─▀▀──█║─█║█║─█║─▀─▀\n"
             "──█║▄║█║─█║─▀───────█║▄█║─▀▀\n"
             "──▀▀▀──▀▀────────────▀─█║\n"
             "───────▄▄─▄▄▀▀▄▀▀▄──▀▄▄▀\n"
             "──────███████───▄▀\n"
             "──────▀█████▀▀▄▀\n"
             "────────▀█▀\n";

            std::cout << "Aaaa, I love you><" << std::endl;
            break;
        } else if (answer == "No") {
            std::cout << "Aaaaaa, why don't you want to, you have to want to 😠" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            continue;
        } else {
            std::cout << "Invalid input. Please enter 'Yes' or 'No'." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    }

    return 0;
}