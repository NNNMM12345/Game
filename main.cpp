#include <iostream>
#include <sstream>
#include <string>
#include <random>
#include <cstdlib>
#include <Windows.h>
#include <limits>

int main()

{

    float strength1 = 80.0;
    float accuracy1 = 45.5;
    float dexterity1 = 24.0;
    float health1 = 100.0;
    std::string soldiers1 = std::to_string(3000000);
    std::string tanks1 = std::to_string(50000);
    int ships1 = 400;
    int population1 = 500000000;
    int nukes1 = 8000;
    std::string oil1 = "3,829,320,000 gallons";
    std::string food1 = "5,000,000,000,000 tons";
    std::string medicine1 = "1,000,000,000 tons";

    const int MAXIMUM1 = 50.0;

    auto attack1 = strength1 * (accuracy1 / MAXIMUM1);
    auto damage1 = strength1 * (dexterity1 / MAXIMUM1);

    // Separation

    float strength2 = 85.0;
    float accuracy2 = 37.8;
    float dexterity2 = 20.0;
    float health2 = 100.0;
    std::string soldiers2 = std::to_string(1700000);
    std::string tanks2 = std::to_string(70000);
    int ships2 = 200;
    int population2 = 300000000;
    int nukes2 = 10000;
    std::string oil2 = "3,829,320,000 gallons";
    std::string food2 = "5,000,000,000,000 tons";
    std::string medicine2 = "1,000,000,000 tons";

    const int MAXIMUM2 = 40.0;

    auto attack2 = strength2 * (accuracy2 / MAXIMUM2);
    auto damage2 = strength2 * (dexterity2 / MAXIMUM2);

    // Separation

    float strength3 = 63.0;
    float accuracy3 = 32.5;
    float dexterity3 = 23.0;
    float health3 = 100.0;
    std::string soldiers3 = std::to_string(4800000);
    std::string tanks3 = std::to_string(30000);
    int ships3 = 170;
    int population3 = 2000000000;
    int nukes3 = 1000;
    std::string oil3 = "3,829,320,000 gallons";
    std::string food3 = "5,000,000,000,000 tons";
    std::string medicine3 = "1,000,000,000 tons";

    const int MAXIMUM3 = 30.0;

    auto attack3 = strength3 * (accuracy3 / MAXIMUM3);
    auto damage3 = strength3 * (dexterity3 / MAXIMUM3);

    // Separation

    float strength4 = 74.0;
    float accuracy4 = 47.5;
    float dexterity4 = 22.0;
    float health4 = 100.0;
    std::string soldiers4 = std::to_string(4100000);
    std::string tanks4 = std::to_string(37000);
    int ships4 = 40;
    int population4 = 400000000;
    int nukes4 = 700;
    std::string oil4 = "3,829,320,000 gallons";
    std::string food4 = "5,000,000,000,000 tons";
    std::string medicine4 = "1,000,000,000 tons";

    const int MAXIMUM4 = 37.0;

    auto attack4 = strength4 * (accuracy4 / MAXIMUM4);
    auto damage4 = strength4 * (dexterity4 / MAXIMUM4);

    // Separation

    float strength5 = 78.0;
    float accuracy5 = 49.5;
    float dexterity5 = 28.0;
    float health5 = 100.0;
    std::string soldiers5 = std::to_string(5400000);
    std::string tanks5 = std::to_string(47000);
    int ships5 = 290;
    int population5 = 4000000000;
    int nukes5 = 2000;
    std::string oil5 = "3,829,320,000 gallons";
    std::string food5 = "5,000,000,000,000 tons";
    std::string medicine5 = "1,000,000,000 tons";

    const int MAXIMUM5 = 20.0;

    auto attack5 = strength5 * (accuracy5 / MAXIMUM5);
    auto damage5 = strength5 * (dexterity5 / MAXIMUM5);

    std::cout << "Press Enter to Continue";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Welcome to the game";
    std::string nation1 = "China";
    std::string nation2 = "Russia";
    std::string nation3 = "Pakistan";
    std::string nation4 = "India";
    std::string nation5 = "USA";
    std::string nation = "China, Russia, USA, India, Pakistan";
    std::cout << "\nPlease select a nation, your options are\n" << nation << '\n';
    selected1:
    std::getline(std::cin, nation);
    if (nation == "USA")
    {
        std::cout << "\nAttack rating: " << attack1 << "\n";
        std::cout << "Damage rating: " << damage1 << "\n";
        std::cout << "Health: " << health1 << "\n";
        std::cout << "Soldiers: " << soldiers1 << "\n";
        std::cout << "Tanks: " << tanks1 << "\n";
        std::cout << "Ships: " << ships1 << "\n";
        std::cout << "Population: " << population1 << "\n";
        std::cout << "Nukes: " << nukes1 << "\n";
        std::cout << "Oil: " << oil1 << "\n";
        std::cout << "Food: " << food1 << "\n";
        std::cout << "Medicine: " << medicine1 << "\n";
    }

    else if (nation == "Russia")
    {
        std::cout << "\nAttack rating: " << attack2 << "\n";
        std::cout << "Damage rating: " << damage2 << "\n";
        std::cout << "Health: " << health2 << "\n";
        std::cout << "Soldiers: " << soldiers2 << "\n";
        std::cout << "Tanks: " << tanks2 << "\n";
        std::cout << "Ships: " << ships2 << "\n";
        std::cout << "Population: " << population2 << "\n";
        std::cout << "Nukes: " << nukes2 << "\n";
        std::cout << "Oil: " << oil2 << "\n";
        std::cout << "Food: " << food2 << "\n";
        std::cout << "Medicine: " << medicine2 << "\n";
    }

    else if (nation == "India")
    {
        std::cout << "\nAttack rating: " << attack3 << "\n";
        std::cout << "Damage rating: " << damage3 << "\n";
        std::cout << "Health: " << health3 << "\n";
        std::cout << "Soldiers: " << soldiers3 << "\n";
        std::cout << "Tanks: " << tanks3 << "\n";
        std::cout << "Ships: " << ships3 << "\n";
        std::cout << "Population: " << population3 << "\n";
        std::cout << "Nukes: " << nukes3 << "\n";
        std::cout << "Oil: " << oil3 << "\n";
        std::cout << "Food: " << food3 << "\n";
        std::cout << "Medicine: " << medicine3 << "\n";
    }

    else if (nation == "Pakistan")
    {
        std::cout << "\nAttack rating: " << attack4 << "\n";
        std::cout << "Damage rating: " << damage4 << "\n";
        std::cout << "Health: " << health4 << "\n";
        std::cout << "Soldiers: " << soldiers4 << "\n";
        std::cout << "Tanks: " << tanks4 << "\n";
        std::cout << "Ships: " << ships4 << "\n";
        std::cout << "Population: " << population4 << "\n";
        std::cout << "Nukes: " << nukes4 << "\n";
        std::cout << "Oil: " << oil4 << "\n";
        std::cout << "Food: " << food4 << "\n";
        std::cout << "Medicine: " << medicine4 << "\n";
    }

    else if (nation == "China")
    {
        std::cout << "\nAttack rating: " << attack5 << "\n";
        std::cout << "Damage rating: " << damage5 << "\n";
        std::cout << "Health: " << health5 << "\n";
        std::cout << "Soldiers: " << soldiers5 << "\n";
        std::cout << "Tanks: " << tanks5 << "\n";
        std::cout << "Ships: " << ships5 << "\n";
        std::cout << "Population: " << population5 << "\n";
        std::cout << "Nukes: " << nukes5 << "\n";
        std::cout << "Oil: " << oil5 << "\n";
        std::cout << "Food: " << food5 << "\n";
        std::cout << "Medicine: " << medicine5 << "\n";
    }

    else
    {
        std::cout << "Select a nation";
    }

    std::string selection;
    std::string selection2;
    std::string decision;
    std::string decision2;
    std::string decision3;
    std::cout << "Congratulations on your selection of " << nation << '\n';
    std::cout << "\nAre you sure you want to select " << nation << '\n';
    std::getline(std::cin, selection);
    if (selection == "Yes")
    {
        std::cout << "OK";
    }

    else if (selection == "No")
    {
        std::cout << "What country do you wish to select";
        std::cout << "\nHere are your options\n";
        std::cout << "China, Russia, USA, India, Pakistan: ";
            goto selected1;
    }

    else
    {
        std::cout << "What do you wish to do";
        std::cout << "\nHere are your options\n";
        std::cout << "1 - Exit game, 2 - Continue game: ";
        std::getline(std::cin, decision);

        if (decision == "1")
        {
            std::cout << "Have a fabulous day and say good bye to the world";
            std::exit(EXIT_SUCCESS);
        }

        else if (decision == "2")
        {
            std::cout << "Well looks like you will continue the game";
        }

    }

    std::cout << "\nThe year is 2057 AD\n";

    if (nation == "Russia")
    {
        std::cout << "We are at war with India Pakistan China and the USA\n";
        std::cout << "You are currently in hiding in a secret bunker somewhere";
    }

    else if (nation == "USA")
    {
        std::cout << "We are at war with India Pakistan China and Russia\n";
        std::cout << "You are currently in hiding in a secret bunker somewhere";
    }

    else if (nation == "China")
    {
        std::cout << "We are at war with India Pakistan Russia and the USA\n";
        std::cout << "You are currently in hiding in a secret bunker somewhere";
    }

    else if (nation == "India")
    {
        std::cout << "We are at war with Pakistan China Russia and the USA\n";
        std::cout << "You are currently in hiding in a secret bunker somewhere";
    }

    else if (nation == "Pakistan")
    {
        std::cout << "We are at war with India China Russia and the USA\n";
        std::cout << "You are currently in hiding in a secret bunker somewhere";
    }

    std::cout << "Our options are Invasion, Nuclear Strike and Cyber-War\n";
    std::cout << "Choose 1 to launch invasion, Choose 2 to launch Nuclear Strike, Choose 3 to launch Cyber War, Choose 4 to launch a Missile Strike: ";
    std::getline(std::cin, decision2);
    if (decision2 == "1")
    {
        std::cout << "Invasion Initiated\n";
    }

    else if (decision2 == "2")
    {
        std::cout << "Nuclear Strike Initiated\n";
    }

    else if (decision2 == "3")
    {
        std::cout << "Cyber War Initiated\n";
    }

    else if (decision2 == "4")
    {
        std::cout << "Missile Strike initiated\n";

        std::cout << "Hello";
        std::string ITEM = "\nSeeking-Pointer-Viktor -Missile-";
        std::cout << ITEM << '\n';
        std::string Itemi = "rocket Seeking Pointer";
        std::cout << Itemi << '\n';

        std::string KEY = "Victor";
        std::cout << "Enter a key to continue: ";
        std::getline(std::cin, KEY);

        if (KEY == "Victor")
        {
            std::cout << "Launch Initiated";
        }

        else
        {
            std::cout << "Goodbye";
            std::exit(EXIT_SUCCESS);
        }
        relaunch:
        std::string target;
        std::cout << "\nEnter a target: ";
        std::getline(std::cin, target);
        std::cout << "\nThe target is: " << target << '\n';
        std::cout << "\nTraveling..." << '\n';

        for (int i = 10; i; i--)
        {
            Sleep(1000); std::cout << i << '\n';
        }

        std::cout << "\nThe target of " << target << " has been hit " << '\n';
        std::string decision2;
        std::cout << "\nReload another rocket to fire again";
        std::cout << "\nHave you reloaded: ";
        std::getline(std::cin, decision2);

        if (decision2 == "Yes")
        ;

        else
        {
            std:exit (EXIT_SUCCESS);
        }
        std::cout << "\nWould you like to fire another rocket: ";

        std::string decision;
        std::getline(std::cin, decision);

        if (decision == "Yes")
            goto relaunch;


        else
        {
            ;
        }

    }

    if (decision2 == "1")
    {
        std::cout << "Congratulations on choosing Invasion\n";
    }

    else if (decision2 == "2")
    {
        std::cout << "Congratulations on choosing Nuclear Strike\n";
    }

    else if (decision2 == "3")
    {
        std::cout << "Congratulations on choosing Cyber War\n";
    }

    else if (decision2 == "4")
    {
        std::cout << "Congratulations on choosing Missile Strike\n";
    }

    if (nation == "USA")
    {
    std::cout << "What do you wish to do next Mr.Trump\n";
    }

    else if (nation == "Russia")
    {
        std::cout << "What do you wish to do next Mr.Putin\n";
    }

    else if (nation == "India")
    {
        std::cout << "What do you wish to do next Mr.Ram Nath Kovind\n";
    }

    else if (nation == "Pakistan")
    {
        std::cout << "What do you wish to do next Mr.Mamnoon Hussain\n";
    }

    else if (nation == "China")
    {
        std::cout << "What do you wish to do next Mr.Xi Jinping\n";
    }

    std::cout << "Your options are again Invasion, Nuclear Strike, Cyber War, Missile Strike: ";
    std::string choice;
    std::getline(std::cin, decision3);
    std::cout << "A " << decision3 << " will be initiated" << '\n';
    std::cout << "Who do you want to initiate a " << decision3 << " on" << '\n';
    std::getline(std::cin, choice);

    if (choice == nation1)
        std::cout << nation1 << " Has chosen to retaliate by launching a Missile Strike";

    else if (choice == nation1)
        std::cout << nation1 << " Has chosen to retaliate by launching an Invasion";


    return 0;

}
