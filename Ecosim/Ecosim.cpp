#include <iostream>
#include <thread>
using namespace std;

int main()
{
    int rabbit_pop_increase;
    int rabbit_to_wolf;
    int wolf_pop_increase;
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
        cout << "What is the chance that a wolf eats a rabbit? (100 being 100% of the time, and 0 being 0% of the time)";
        cin >> rabbit_to_wolf;
    }
}