
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int population;
    int numberOfStars;
    int year = 1910; 

    fstream file;
    file.open("people.txt");

    if (file.is_open())
    {
       
        cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
        cout << "(each * represents 1000 people)" << endl;

        while (file >> population)
        {
            
            cout << year << "  ";

            numberOfStars = population / 1000;
            for (int i = 0; i < numberOfStars; i++)
            {
                cout << '*';
            }
            cout << endl;

           
            year += 20;
        }
        file.close();
    }

    return 0;
}
