
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void roll(int rollValues[]);
void print(int rollValues[]);

int main(){
srand(time(0));
int i;
int dice1;
int dice2;
int rollValues[13];

for(i=0; i<13; i=i+1)
{
    rollValues[i] = 0;
}

cout << "=======================" << endl;
cout << "Dice Rolled 1000 times"  << endl;
cout << "=======================" << endl;

roll(rollValues);
print(rollValues);
return 0;
}

void roll(int rollValues[]){
    for (int i=1; i<=1000; i++)
    {
        int dice1 = rand()% 6 +1;
        int dice2 = rand()% 6 +1;
        rollValues[dice1 + dice2] = rollValues[dice1 + dice2] + 1;
    }
}

void print(int rollValues[]){
    for (int i=2; i<13; i++)
    {

        cout << "" << i << "=" << rollValues[i] << endl;
    }
}
