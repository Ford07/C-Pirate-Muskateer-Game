#include<iostream>
#include<string>

using namespace std;
int main()
{
    int buddies;
    int afterBattle;
    string exit;

    cout << "You are a pirate and are walking"
         << "along in the crime filled\n"
         << "city of Havana (in 1789). "
         << "How many of your pirate buddies \n"
         << "do you bring along? (Any number between 11 and 115)\n";

    cin >> buddies;

    afterBattle = 1 + buddies -10;

    cout << "Suddenly 10 musketeers jump out "
         << "from the local tavern and \n"
         << "draw their swords. "
         << "10 musketeers and 10 pirates die in the \n"
         << "battle. There are only "
         << (buddies + 1 - 10)
         << "pirates left, including you. \n\n";


    cout << "The fallen drop a total of 107 gold coins.\n"
         << "The bounty is split evenly, which works out to "
         << (107 / afterBattle) << "gold coins \n"
         << "for each survivor.\n";

    cout << "The last" << (107 % afterBattle) << "are fought over "
         << "in a big drunken brawl.\n";

    cout << "These last few coins are spent on more booze during the\n"
         << "course of the brawl. Eventually everyone retires\n"
         << "peacefully on the bar room floor.\n"
         << "Another successful day as a pirate!\n";


    return 0;
}


