#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << "Please enter the number of game played:\n";
    int gamesplayed;
    cin >> gamesplayed;
    cin.ignore();
    cout << "Please enter the number of car played and its position for each games on separate lines:\n";

    vector< vector<int> > carstats(5);
    for (int i = 0; i <= gamesplayed - 1; i++)
    {
        string temp;
        getline(cin, temp);
        int carnum = stoi(temp.substr(0, temp.find(" ")));
        int pos = stoi(temp.substr(temp.find(" "), temp.length()));
        switch (carnum)
        {
        case 1:
            carstats[0].push_back(pos);
            break;
        case 2:
            carstats[1].push_back(pos);
            break;
        case 3:
            carstats[2].push_back(pos);
            break;
        case 4:
            carstats[3].push_back(pos);
            break;
        case 5:
            carstats[4].push_back(pos);
            break;
        }
    }

    int stats[5];
    for (int i = 0; i <= 4; i++)
    {
        int a{};
        for (int n = 0; n <= carstats[i].size() - 1; n++)
        {
            a = a + carstats[i][n];
        }
        stats[i] = trunc(a / carstats[i].size());
    }

    int temp = stats[0];
    int count = 0;
    for (int i = 1; i <= 4; i++)
    {
        if (temp >= stats[i])
        {
            temp = stats[i];
            count = i;
        }
    }

    cout << "Best car is: " << count + 1 << "\nAverage position: " << stats[count];
    return EXIT_SUCCESS;
}