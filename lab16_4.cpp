#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &, int &, int &, int &);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(a, b, c, d);
		cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}
void shuffle(int &a, int &b, int &c, int &d)
{
    int x[4] = {50, 100, 500, 1000}, index[4] = {-1,-1,-1,-1}, round = 0;
    while (round <= 3)
    {
        int randNum = rand() % 4;
        bool same = false;
        for (int i = 0; i < 4; i++)
        {
            if (randNum == index[i])
            {
                same = true;
                break;
            }
        }
        if (same == true)
            continue;
        else
            index[round] = randNum;
        if (round == 0)
            a = x[randNum];
        else if (round == 1)
            b = x[randNum];
        else if (round == 2)
            c = x[randNum];
        else
            d = x[randNum];
        round++;
    }
}
