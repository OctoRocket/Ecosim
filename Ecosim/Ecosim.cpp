#include <iostream>
#include <thread>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
using namespace std;

void sleep(int time_in_ms)
{
    using namespace this_thread;
    using namespace chrono;
    sleep_for(seconds(time_in_ms));
}
int autorun(float RPI, float WPI, float MRP)
{
    int rabbits = 100;
    int wolfs = 10;
    int rounds_since_ate;
    int wait;
    cout << "How long (in ms) do you want to wait between each round?\n";
    cin >> wait;
    while (true)
    {
        if (rabbits < 1)
        {
            cout << "The rabbits are extinct!\n";
            break;
        }
        if (wolfs < 1)
        {
            cout << "The wolves are extinct!\n";
            break;
        }
        if (rabbits > MRP)
        {
            rabbits = MRP;
        }
    }
    cin.ignore();
    cin.ignore();
    return 0;
}

int manual_run(float RPI, float WPI, float MRP)
{
    return 0;
}

int main()
{
    srand(time(NULL));
    float rabbit_pop_increase;
    float wolf_pop_increase;
    float max_rabbit_pop;
    bool autorun_choice;
    string answer;
    while (true)
    {
        cout << "How much do rabbits reproduce? (eg. 2 is they double each round)\n";
        cin >> rabbit_pop_increase;
        cout << "Are you sure? (y/n)\n";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Ok!\n";
            break;
        }
    }
    while (true)
    {
        cout << "How much do the wolves reproduce? (eg 1 is 1 pup per rabbit eaten, 2 is )\n";
        cin >> wolf_pop_increase;
        cout << "Are you sure? (y/n)\n";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Ok!\n";
            break;
        }
    }
    while (true)
    {
        cout << "What is the max number of rabbits at a time?.\n";
        cin >> max_rabbit_pop;
        cout << "Are you sure? (y/n)\n";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Ok!\n";
            break;
        }
    }
    while (true)
    {
        cout << "Would you like it to auto run or for you to be able to manually go through the rounds? (a/m)\n";
        cin >> answer;
        if (answer == "a")
        {
            autorun_choice = true;
        }
        else
        {
            autorun_choice = false;
        }
        cout << "Are you sure? (y/n)\n";
        cin >> answer;
        if (answer == "y")
        {
            cout << "Ok!\n";
            break;
        }
    }
    if (autorun_choice == true)
    {
        autorun(rabbit_pop_increase, wolf_pop_increase, max_rabbit_pop);
    }
}